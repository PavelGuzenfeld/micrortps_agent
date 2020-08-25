/****************************************************************************
 *
 * Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
 * Copyright (c) 2018-2019 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/*!
 * @file position_setpoint_triplet_Subscriber.cpp
 * This file contains the implementation of the subscriber functions.
 *
 * This file was adapted from the fastcdrgen tool.
 */

#include <fastrtps/participant/Participant.h>
#include <fastrtps/attributes/ParticipantAttributes.h>
#include <fastrtps/subscriber/Subscriber.h>
#include <fastrtps/attributes/SubscriberAttributes.h>

#include <fastrtps/Domain.h>

#include "position_setpoint_triplet_Subscriber.h"

position_setpoint_triplet_Subscriber::position_setpoint_triplet_Subscriber()
    : mp_participant(nullptr),
      mp_subscriber(nullptr)
{ }

position_setpoint_triplet_Subscriber::~position_setpoint_triplet_Subscriber()
{
    Domain::removeParticipant(mp_participant);
}

bool position_setpoint_triplet_Subscriber::init(uint8_t topic_ID, std::condition_variable* t_send_queue_cv, std::mutex* t_send_queue_mutex, std::queue<uint8_t>* t_send_queue)
{
    m_listener.topic_ID = topic_ID;
    m_listener.t_send_queue_cv = t_send_queue_cv;
    m_listener.t_send_queue_mutex = t_send_queue_mutex;
    m_listener.t_send_queue = t_send_queue;

    // Create RTPSParticipant
    ParticipantAttributes PParam;
    PParam.rtps.builtin.domainId = 0;
    PParam.rtps.builtin.leaseDuration = c_TimeInfinite;
    PParam.rtps.setName("position_setpoint_triplet_subscriber");
    mp_participant = Domain::createParticipant(PParam);
    if(mp_participant == nullptr)
            return false;

    //Register the type
    Domain::registerType(mp_participant, static_cast<TopicDataType*>(&position_setpoint_tripletDataType));

    // Create Subscriber
    SubscriberAttributes Rparam;
    Rparam.topic.topicKind = NO_KEY;
    Rparam.topic.topicDataType = position_setpoint_tripletDataType.getName();
    Rparam.topic.topicName = "position_setpoint_tripletPubSubTopic";
    mp_subscriber = Domain::createSubscriber(mp_participant, Rparam, static_cast<SubscriberListener*>(&m_listener));
    if(mp_subscriber == nullptr)
        return false;
    return true;
}

void position_setpoint_triplet_Subscriber::SubListener::onSubscriptionMatched(Subscriber* sub, MatchingInfo& info)
{
    // The first 6 values of the ID guidPrefix of an entity in a DDS-RTPS Domain
    // are the same for all its subcomponents (publishers, subscribers)
    bool is_different_endpoint = false;
    for (size_t i = 0; i < 6; i++) {
        if (sub->getGuid().guidPrefix.value[i] != info.remoteEndpointGuid.guidPrefix.value[i]) {
            is_different_endpoint = true;
            break;
        }
    }

    // If the matching happens for the same entity, do not make a match
    if (is_different_endpoint) {
        if (info.status == MATCHED_MATCHING) {
            n_matched++;
            std::cout << "\033[0;37m[   micrortps_agent   ]\tposition_setpoint_triplet subscriber matched\033[0m" << std::endl;
        } else {
            n_matched--;
            std::cout << "\033[0;37m[   micrortps_agent   ]\tposition_setpoint_triplet subscriber unmatched\033[0m" << std::endl;
        }
    }
}

void position_setpoint_triplet_Subscriber::SubListener::onNewDataMessage(Subscriber* sub)
{
    if (n_matched > 0) {
        std::unique_lock<std::mutex> has_msg_lock(has_msg_mutex);
        if(has_msg.load() == true) // Check if msg has been fetched
        {
            has_msg_cv.wait(has_msg_lock); // Wait till msg has been fetched
        }
        has_msg_lock.unlock();

        // Take data
        if(sub->takeNextData(&msg, &m_info))
        {
            if(m_info.sampleKind == ALIVE)
            {
                std::unique_lock<std::mutex> lk(*t_send_queue_mutex);

                ++n_msg;
                has_msg = true;

                t_send_queue->push(topic_ID);
                lk.unlock();
                t_send_queue_cv->notify_one();

            }
        }
    }
}

bool position_setpoint_triplet_Subscriber::hasMsg()
{
    if (m_listener.n_matched > 0) {
        return m_listener.has_msg.load();
    }

    return false;
}

position_setpoint_triplet_msg_t position_setpoint_triplet_Subscriber::getMsg()
{
    return m_listener.msg;
}

void position_setpoint_triplet_Subscriber::unlockMsg()
{
    if (m_listener.n_matched > 0) {
        std::unique_lock<std::mutex> has_msg_lock(m_listener.has_msg_mutex);
        m_listener.has_msg = false;
        has_msg_lock.unlock();
        m_listener.has_msg_cv.notify_one();
    }
}
