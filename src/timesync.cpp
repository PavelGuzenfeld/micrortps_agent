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
 * @file timesync.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "timesync.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

timesync::timesync()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4f970963
    m_timestamp_ = 0;
    // m_sys_id_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@61f8bee4
    m_sys_id_ = 0;
    // m_seq_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7b49cea0
    m_seq_ = 0;
    // m_tc1_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@887af79
    m_tc1_ = 0;
    // m_ts1_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7fac631b
    m_ts1_ = 0;

}

timesync::~timesync()
{





}

timesync::timesync(const timesync &x)
{
    m_timestamp_ = x.m_timestamp_;
    m_sys_id_ = x.m_sys_id_;
    m_seq_ = x.m_seq_;
    m_tc1_ = x.m_tc1_;
    m_ts1_ = x.m_ts1_;
}

timesync::timesync(timesync &&x)
{
    m_timestamp_ = x.m_timestamp_;
    m_sys_id_ = x.m_sys_id_;
    m_seq_ = x.m_seq_;
    m_tc1_ = x.m_tc1_;
    m_ts1_ = x.m_ts1_;
}

timesync& timesync::operator=(const timesync &x)
{

    m_timestamp_ = x.m_timestamp_;
    m_sys_id_ = x.m_sys_id_;
    m_seq_ = x.m_seq_;
    m_tc1_ = x.m_tc1_;
    m_ts1_ = x.m_ts1_;

    return *this;
}

timesync& timesync::operator=(timesync &&x)
{

    m_timestamp_ = x.m_timestamp_;
    m_sys_id_ = x.m_sys_id_;
    m_seq_ = x.m_seq_;
    m_tc1_ = x.m_tc1_;
    m_ts1_ = x.m_ts1_;

    return *this;
}

size_t timesync::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t timesync::getCdrSerializedSize(const timesync& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void timesync::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp_;
    scdr << m_sys_id_;
    scdr << m_seq_;
    scdr << m_tc1_;
    scdr << m_ts1_;
}

void timesync::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_sys_id_;
    dcdr >> m_seq_;
    dcdr >> m_tc1_;
    dcdr >> m_ts1_;
}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void timesync::timestamp_(uint64_t _timestamp_)
{
m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t timesync::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& timesync::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function sets a value in member sys_id_
 * @param _sys_id_ New value for member sys_id_
 */
void timesync::sys_id_(uint8_t _sys_id_)
{
m_sys_id_ = _sys_id_;
}

/*!
 * @brief This function returns the value of member sys_id_
 * @return Value of member sys_id_
 */
uint8_t timesync::sys_id_() const
{
    return m_sys_id_;
}

/*!
 * @brief This function returns a reference to member sys_id_
 * @return Reference to member sys_id_
 */
uint8_t& timesync::sys_id_()
{
    return m_sys_id_;
}

/*!
 * @brief This function sets a value in member seq_
 * @param _seq_ New value for member seq_
 */
void timesync::seq_(uint8_t _seq_)
{
m_seq_ = _seq_;
}

/*!
 * @brief This function returns the value of member seq_
 * @return Value of member seq_
 */
uint8_t timesync::seq_() const
{
    return m_seq_;
}

/*!
 * @brief This function returns a reference to member seq_
 * @return Reference to member seq_
 */
uint8_t& timesync::seq_()
{
    return m_seq_;
}

/*!
 * @brief This function sets a value in member tc1_
 * @param _tc1_ New value for member tc1_
 */
void timesync::tc1_(int64_t _tc1_)
{
m_tc1_ = _tc1_;
}

/*!
 * @brief This function returns the value of member tc1_
 * @return Value of member tc1_
 */
int64_t timesync::tc1_() const
{
    return m_tc1_;
}

/*!
 * @brief This function returns a reference to member tc1_
 * @return Reference to member tc1_
 */
int64_t& timesync::tc1_()
{
    return m_tc1_;
}

/*!
 * @brief This function sets a value in member ts1_
 * @param _ts1_ New value for member ts1_
 */
void timesync::ts1_(int64_t _ts1_)
{
m_ts1_ = _ts1_;
}

/*!
 * @brief This function returns the value of member ts1_
 * @return Value of member ts1_
 */
int64_t timesync::ts1_() const
{
    return m_ts1_;
}

/*!
 * @brief This function returns a reference to member ts1_
 * @return Reference to member ts1_
 */
int64_t& timesync::ts1_()
{
    return m_ts1_;
}


size_t timesync::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;








    return current_align;
}

bool timesync::isKeyDefined()
{
   return false;
}

void timesync::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
}
