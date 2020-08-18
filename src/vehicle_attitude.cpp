// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file vehicle_attitude.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "vehicle_attitude.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


vehicle_attitude::vehicle_attitude()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@32d2fa64
    m_timestamp_ = 0;
    // m_q com.eprosima.idl.parser.typecode.AliasTypeCode@1d8d30f7
    memset(&m_q, 0, (4) * 4);
    // m_delta_q_reset com.eprosima.idl.parser.typecode.AliasTypeCode@1d8d30f7
    memset(&m_delta_q_reset, 0, (4) * 4);
    // m_quat_reset_counter_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3e57cd70
    m_quat_reset_counter_ = 0;

}

vehicle_attitude::~vehicle_attitude()
{




}

vehicle_attitude::vehicle_attitude(const vehicle_attitude &x)
{
    m_timestamp_ = x.m_timestamp_;
    m_q = x.m_q;
    m_delta_q_reset = x.m_delta_q_reset;
    m_quat_reset_counter_ = x.m_quat_reset_counter_;
}

vehicle_attitude::vehicle_attitude(vehicle_attitude &&x)
{
    m_timestamp_ = x.m_timestamp_;
    m_q = std::move(x.m_q);
    m_delta_q_reset = std::move(x.m_delta_q_reset);
    m_quat_reset_counter_ = x.m_quat_reset_counter_;
}

vehicle_attitude& vehicle_attitude::operator=(const vehicle_attitude &x)
{

    m_timestamp_ = x.m_timestamp_;
    m_q = x.m_q;
    m_delta_q_reset = x.m_delta_q_reset;
    m_quat_reset_counter_ = x.m_quat_reset_counter_;

    return *this;
}

vehicle_attitude& vehicle_attitude::operator=(vehicle_attitude &&x)
{

    m_timestamp_ = x.m_timestamp_;
    m_q = std::move(x.m_q);
    m_delta_q_reset = std::move(x.m_delta_q_reset);
    m_quat_reset_counter_ = x.m_quat_reset_counter_;

    return *this;
}

size_t vehicle_attitude::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t vehicle_attitude::getCdrSerializedSize(const vehicle_attitude& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    if ((4) > 0)
    {
        current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((4) > 0)
    {
        current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void vehicle_attitude::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp_;
    scdr << m_q;

    scdr << m_delta_q_reset;

    scdr << m_quat_reset_counter_;
}

void vehicle_attitude::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_q;

    dcdr >> m_delta_q_reset;

    dcdr >> m_quat_reset_counter_;
}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void vehicle_attitude::timestamp_(uint64_t _timestamp_)
{
m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t vehicle_attitude::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& vehicle_attitude::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function copies the value in member q
 * @param _q New value to be copied in member q
 */
void vehicle_attitude::q(const vehicle_attitude__float_array_4 &_q)
{
m_q = _q;
}

/*!
 * @brief This function moves the value in member q
 * @param _q New value to be moved in member q
 */
void vehicle_attitude::q(vehicle_attitude__float_array_4 &&_q)
{
m_q = std::move(_q);
}

/*!
 * @brief This function returns a constant reference to member q
 * @return Constant reference to member q
 */
const vehicle_attitude__float_array_4& vehicle_attitude::q() const
{
    return m_q;
}

/*!
 * @brief This function returns a reference to member q
 * @return Reference to member q
 */
vehicle_attitude__float_array_4& vehicle_attitude::q()
{
    return m_q;
}
/*!
 * @brief This function copies the value in member delta_q_reset
 * @param _delta_q_reset New value to be copied in member delta_q_reset
 */
void vehicle_attitude::delta_q_reset(const vehicle_attitude__float_array_4 &_delta_q_reset)
{
m_delta_q_reset = _delta_q_reset;
}

/*!
 * @brief This function moves the value in member delta_q_reset
 * @param _delta_q_reset New value to be moved in member delta_q_reset
 */
void vehicle_attitude::delta_q_reset(vehicle_attitude__float_array_4 &&_delta_q_reset)
{
m_delta_q_reset = std::move(_delta_q_reset);
}

/*!
 * @brief This function returns a constant reference to member delta_q_reset
 * @return Constant reference to member delta_q_reset
 */
const vehicle_attitude__float_array_4& vehicle_attitude::delta_q_reset() const
{
    return m_delta_q_reset;
}

/*!
 * @brief This function returns a reference to member delta_q_reset
 * @return Reference to member delta_q_reset
 */
vehicle_attitude__float_array_4& vehicle_attitude::delta_q_reset()
{
    return m_delta_q_reset;
}
/*!
 * @brief This function sets a value in member quat_reset_counter_
 * @param _quat_reset_counter_ New value for member quat_reset_counter_
 */
void vehicle_attitude::quat_reset_counter_(uint8_t _quat_reset_counter_)
{
m_quat_reset_counter_ = _quat_reset_counter_;
}

/*!
 * @brief This function returns the value of member quat_reset_counter_
 * @return Value of member quat_reset_counter_
 */
uint8_t vehicle_attitude::quat_reset_counter_() const
{
    return m_quat_reset_counter_;
}

/*!
 * @brief This function returns a reference to member quat_reset_counter_
 * @return Reference to member quat_reset_counter_
 */
uint8_t& vehicle_attitude::quat_reset_counter_()
{
    return m_quat_reset_counter_;
}


size_t vehicle_attitude::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool vehicle_attitude::isKeyDefined()
{
   return false;
}

void vehicle_attitude::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
}
