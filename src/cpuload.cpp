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
 * @file cpuload.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "cpuload.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

cpuload::cpuload()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@65e2dbf3
    m_timestamp_ = 0;
    // m_load_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4f970963
    m_load_ = 0.0;
    // m_ram_usage_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@61f8bee4
    m_ram_usage_ = 0.0;

}

cpuload::~cpuload()
{



}

cpuload::cpuload(const cpuload &x)
{
    m_timestamp_ = x.m_timestamp_;
    m_load_ = x.m_load_;
    m_ram_usage_ = x.m_ram_usage_;
}

cpuload::cpuload(cpuload &&x)
{
    m_timestamp_ = x.m_timestamp_;
    m_load_ = x.m_load_;
    m_ram_usage_ = x.m_ram_usage_;
}

cpuload& cpuload::operator=(const cpuload &x)
{

    m_timestamp_ = x.m_timestamp_;
    m_load_ = x.m_load_;
    m_ram_usage_ = x.m_ram_usage_;

    return *this;
}

cpuload& cpuload::operator=(cpuload &&x)
{

    m_timestamp_ = x.m_timestamp_;
    m_load_ = x.m_load_;
    m_ram_usage_ = x.m_ram_usage_;

    return *this;
}

size_t cpuload::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t cpuload::getCdrSerializedSize(const cpuload& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void cpuload::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp_;
    scdr << m_load_;
    scdr << m_ram_usage_;
}

void cpuload::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_load_;
    dcdr >> m_ram_usage_;
}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void cpuload::timestamp_(uint64_t _timestamp_)
{
m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t cpuload::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& cpuload::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function sets a value in member load_
 * @param _load_ New value for member load_
 */
void cpuload::load_(float _load_)
{
m_load_ = _load_;
}

/*!
 * @brief This function returns the value of member load_
 * @return Value of member load_
 */
float cpuload::load_() const
{
    return m_load_;
}

/*!
 * @brief This function returns a reference to member load_
 * @return Reference to member load_
 */
float& cpuload::load_()
{
    return m_load_;
}

/*!
 * @brief This function sets a value in member ram_usage_
 * @param _ram_usage_ New value for member ram_usage_
 */
void cpuload::ram_usage_(float _ram_usage_)
{
m_ram_usage_ = _ram_usage_;
}

/*!
 * @brief This function returns the value of member ram_usage_
 * @return Value of member ram_usage_
 */
float cpuload::ram_usage_() const
{
    return m_ram_usage_;
}

/*!
 * @brief This function returns a reference to member ram_usage_
 * @return Reference to member ram_usage_
 */
float& cpuload::ram_usage_()
{
    return m_ram_usage_;
}


size_t cpuload::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool cpuload::isKeyDefined()
{
   return false;
}

void cpuload::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
}
