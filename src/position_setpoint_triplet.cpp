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
 * @file position_setpoint_triplet.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "position_setpoint_triplet.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>











position_setpoint_triplet::position_setpoint_triplet()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@58c1670b
    m_timestamp_ = 0;
    // m_previous_ com.eprosima.fastrtps.idl.parser.typecode.StructTypeCode@6b57696f

    // m_current_ com.eprosima.fastrtps.idl.parser.typecode.StructTypeCode@6b57696f

    // m_next_ com.eprosima.fastrtps.idl.parser.typecode.StructTypeCode@6b57696f


}

position_setpoint_triplet::~position_setpoint_triplet()
{




}

position_setpoint_triplet::position_setpoint_triplet(const position_setpoint_triplet &x)
{
    m_timestamp_ = x.m_timestamp_;
    m_previous_ = x.m_previous_;
    m_current_ = x.m_current_;
    m_next_ = x.m_next_;
}

position_setpoint_triplet::position_setpoint_triplet(position_setpoint_triplet &&x)
{
    m_timestamp_ = x.m_timestamp_;
    m_previous_ = std::move(x.m_previous_);
    m_current_ = std::move(x.m_current_);
    m_next_ = std::move(x.m_next_);
}

position_setpoint_triplet& position_setpoint_triplet::operator=(const position_setpoint_triplet &x)
{

    m_timestamp_ = x.m_timestamp_;
    m_previous_ = x.m_previous_;
    m_current_ = x.m_current_;
    m_next_ = x.m_next_;

    return *this;
}

position_setpoint_triplet& position_setpoint_triplet::operator=(position_setpoint_triplet &&x)
{

    m_timestamp_ = x.m_timestamp_;
    m_previous_ = std::move(x.m_previous_);
    m_current_ = std::move(x.m_current_);
    m_next_ = std::move(x.m_next_);

    return *this;
}

size_t position_setpoint_triplet::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += position_setpoint::getMaxCdrSerializedSize(current_alignment);
    current_alignment += position_setpoint::getMaxCdrSerializedSize(current_alignment);
    current_alignment += position_setpoint::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t position_setpoint_triplet::getCdrSerializedSize(const position_setpoint_triplet& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += position_setpoint::getCdrSerializedSize(data.previous_(), current_alignment);
    current_alignment += position_setpoint::getCdrSerializedSize(data.current_(), current_alignment);
    current_alignment += position_setpoint::getCdrSerializedSize(data.next_(), current_alignment);

    return current_alignment - initial_alignment;
}

void position_setpoint_triplet::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp_;
    scdr << m_previous_;
    scdr << m_current_;
    scdr << m_next_;
}

void position_setpoint_triplet::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_previous_;
    dcdr >> m_current_;
    dcdr >> m_next_;
}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void position_setpoint_triplet::timestamp_(uint64_t _timestamp_)
{
m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t position_setpoint_triplet::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& position_setpoint_triplet::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function copies the value in member previous_
 * @param _previous_ New value to be copied in member previous_
 */
void position_setpoint_triplet::previous_(const position_setpoint &_previous_)
{
m_previous_ = _previous_;
}

/*!
 * @brief This function moves the value in member previous_
 * @param _previous_ New value to be moved in member previous_
 */
void position_setpoint_triplet::previous_(position_setpoint &&_previous_)
{
m_previous_ = std::move(_previous_);
}

/*!
 * @brief This function returns a constant reference to member previous_
 * @return Constant reference to member previous_
 */
const position_setpoint& position_setpoint_triplet::previous_() const
{
    return m_previous_;
}

/*!
 * @brief This function returns a reference to member previous_
 * @return Reference to member previous_
 */
position_setpoint& position_setpoint_triplet::previous_()
{
    return m_previous_;
}
/*!
 * @brief This function copies the value in member current_
 * @param _current_ New value to be copied in member current_
 */
void position_setpoint_triplet::current_(const position_setpoint &_current_)
{
m_current_ = _current_;
}

/*!
 * @brief This function moves the value in member current_
 * @param _current_ New value to be moved in member current_
 */
void position_setpoint_triplet::current_(position_setpoint &&_current_)
{
m_current_ = std::move(_current_);
}

/*!
 * @brief This function returns a constant reference to member current_
 * @return Constant reference to member current_
 */
const position_setpoint& position_setpoint_triplet::current_() const
{
    return m_current_;
}

/*!
 * @brief This function returns a reference to member current_
 * @return Reference to member current_
 */
position_setpoint& position_setpoint_triplet::current_()
{
    return m_current_;
}
/*!
 * @brief This function copies the value in member next_
 * @param _next_ New value to be copied in member next_
 */
void position_setpoint_triplet::next_(const position_setpoint &_next_)
{
m_next_ = _next_;
}

/*!
 * @brief This function moves the value in member next_
 * @param _next_ New value to be moved in member next_
 */
void position_setpoint_triplet::next_(position_setpoint &&_next_)
{
m_next_ = std::move(_next_);
}

/*!
 * @brief This function returns a constant reference to member next_
 * @return Constant reference to member next_
 */
const position_setpoint& position_setpoint_triplet::next_() const
{
    return m_next_;
}

/*!
 * @brief This function returns a reference to member next_
 * @return Reference to member next_
 */
position_setpoint& position_setpoint_triplet::next_()
{
    return m_next_;
}

size_t position_setpoint_triplet::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool position_setpoint_triplet::isKeyDefined()
{
   return false;
}

void position_setpoint_triplet::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
}
