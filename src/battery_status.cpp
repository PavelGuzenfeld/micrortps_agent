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
 * @file battery_status.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "battery_status.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>










battery_status::battery_status()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@12cdcf4
    m_timestamp_ = 0;
    // m_voltage_v_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5bcea91b
    m_voltage_v_ = 0.0;
    // m_voltage_filtered_v_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5f3a4b84
    m_voltage_filtered_v_ = 0.0;
    // m_current_a_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@27f723
    m_current_a_ = 0.0;
    // m_current_filtered_a_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@670b40af
    m_current_filtered_a_ = 0.0;
    // m_average_current_a_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4923ab24
    m_average_current_a_ = 0.0;
    // m_discharged_mah_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@44c8afef
    m_discharged_mah_ = 0.0;
    // m_remaining_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7b69c6ba
    m_remaining_ = 0.0;
    // m_scale_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@46daef40
    m_scale_ = 0.0;
    // m_temperature_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@12f41634
    m_temperature_ = 0.0;
    // m_cell_count_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@13c27452
    m_cell_count_ = 0;
    // m_connected_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@262b2c86
    m_connected_ = false;
    // m_source_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@371a67ec
    m_source_ = 0;
    // m_priority_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5ed828d
    m_priority_ = 0;
    // m_capacity_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@50d0686
    m_capacity_ = 0;
    // m_cycle_count_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1e7c7811
    m_cycle_count_ = 0;
    // m_run_time_to_empty_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@77f99a05
    m_run_time_to_empty_ = 0;
    // m_average_time_to_empty_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@63440df3
    m_average_time_to_empty_ = 0;
    // m_serial_number_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3aeaafa6
    m_serial_number_ = 0;
    // m_manufacture_date_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@76a3e297
    m_manufacture_date_ = 0;
    // m_state_of_health_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4d3167f4
    m_state_of_health_ = 0;
    // m_max_error_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@ed9d034
    m_max_error_ = 0;
    // m_id_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6121c9d6
    m_id_ = 0;
    // m_interface_error_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@87f383f
    m_interface_error_ = 0;
    // m_voltage_cell_v com.eprosima.idl.parser.typecode.AliasTypeCode@4eb7f003
    memset(&m_voltage_cell_v, 0, (10) * 4);
    // m_max_cell_voltage_delta_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@eafc191
    m_max_cell_voltage_delta_ = 0.0;
    // m_is_powering_off_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@612fc6eb
    m_is_powering_off_ = false;
    // m_warning_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1060b431
    m_warning_ = 0;

}

battery_status::~battery_status()
{




























}

battery_status::battery_status(const battery_status &x)
{
    m_timestamp_ = x.m_timestamp_;
    m_voltage_v_ = x.m_voltage_v_;
    m_voltage_filtered_v_ = x.m_voltage_filtered_v_;
    m_current_a_ = x.m_current_a_;
    m_current_filtered_a_ = x.m_current_filtered_a_;
    m_average_current_a_ = x.m_average_current_a_;
    m_discharged_mah_ = x.m_discharged_mah_;
    m_remaining_ = x.m_remaining_;
    m_scale_ = x.m_scale_;
    m_temperature_ = x.m_temperature_;
    m_cell_count_ = x.m_cell_count_;
    m_connected_ = x.m_connected_;
    m_source_ = x.m_source_;
    m_priority_ = x.m_priority_;
    m_capacity_ = x.m_capacity_;
    m_cycle_count_ = x.m_cycle_count_;
    m_run_time_to_empty_ = x.m_run_time_to_empty_;
    m_average_time_to_empty_ = x.m_average_time_to_empty_;
    m_serial_number_ = x.m_serial_number_;
    m_manufacture_date_ = x.m_manufacture_date_;
    m_state_of_health_ = x.m_state_of_health_;
    m_max_error_ = x.m_max_error_;
    m_id_ = x.m_id_;
    m_interface_error_ = x.m_interface_error_;
    m_voltage_cell_v = x.m_voltage_cell_v;
    m_max_cell_voltage_delta_ = x.m_max_cell_voltage_delta_;
    m_is_powering_off_ = x.m_is_powering_off_;
    m_warning_ = x.m_warning_;
}

battery_status::battery_status(battery_status &&x)
{
    m_timestamp_ = x.m_timestamp_;
    m_voltage_v_ = x.m_voltage_v_;
    m_voltage_filtered_v_ = x.m_voltage_filtered_v_;
    m_current_a_ = x.m_current_a_;
    m_current_filtered_a_ = x.m_current_filtered_a_;
    m_average_current_a_ = x.m_average_current_a_;
    m_discharged_mah_ = x.m_discharged_mah_;
    m_remaining_ = x.m_remaining_;
    m_scale_ = x.m_scale_;
    m_temperature_ = x.m_temperature_;
    m_cell_count_ = x.m_cell_count_;
    m_connected_ = x.m_connected_;
    m_source_ = x.m_source_;
    m_priority_ = x.m_priority_;
    m_capacity_ = x.m_capacity_;
    m_cycle_count_ = x.m_cycle_count_;
    m_run_time_to_empty_ = x.m_run_time_to_empty_;
    m_average_time_to_empty_ = x.m_average_time_to_empty_;
    m_serial_number_ = x.m_serial_number_;
    m_manufacture_date_ = x.m_manufacture_date_;
    m_state_of_health_ = x.m_state_of_health_;
    m_max_error_ = x.m_max_error_;
    m_id_ = x.m_id_;
    m_interface_error_ = x.m_interface_error_;
    m_voltage_cell_v = std::move(x.m_voltage_cell_v);
    m_max_cell_voltage_delta_ = x.m_max_cell_voltage_delta_;
    m_is_powering_off_ = x.m_is_powering_off_;
    m_warning_ = x.m_warning_;
}

battery_status& battery_status::operator=(const battery_status &x)
{

    m_timestamp_ = x.m_timestamp_;
    m_voltage_v_ = x.m_voltage_v_;
    m_voltage_filtered_v_ = x.m_voltage_filtered_v_;
    m_current_a_ = x.m_current_a_;
    m_current_filtered_a_ = x.m_current_filtered_a_;
    m_average_current_a_ = x.m_average_current_a_;
    m_discharged_mah_ = x.m_discharged_mah_;
    m_remaining_ = x.m_remaining_;
    m_scale_ = x.m_scale_;
    m_temperature_ = x.m_temperature_;
    m_cell_count_ = x.m_cell_count_;
    m_connected_ = x.m_connected_;
    m_source_ = x.m_source_;
    m_priority_ = x.m_priority_;
    m_capacity_ = x.m_capacity_;
    m_cycle_count_ = x.m_cycle_count_;
    m_run_time_to_empty_ = x.m_run_time_to_empty_;
    m_average_time_to_empty_ = x.m_average_time_to_empty_;
    m_serial_number_ = x.m_serial_number_;
    m_manufacture_date_ = x.m_manufacture_date_;
    m_state_of_health_ = x.m_state_of_health_;
    m_max_error_ = x.m_max_error_;
    m_id_ = x.m_id_;
    m_interface_error_ = x.m_interface_error_;
    m_voltage_cell_v = x.m_voltage_cell_v;
    m_max_cell_voltage_delta_ = x.m_max_cell_voltage_delta_;
    m_is_powering_off_ = x.m_is_powering_off_;
    m_warning_ = x.m_warning_;

    return *this;
}

battery_status& battery_status::operator=(battery_status &&x)
{

    m_timestamp_ = x.m_timestamp_;
    m_voltage_v_ = x.m_voltage_v_;
    m_voltage_filtered_v_ = x.m_voltage_filtered_v_;
    m_current_a_ = x.m_current_a_;
    m_current_filtered_a_ = x.m_current_filtered_a_;
    m_average_current_a_ = x.m_average_current_a_;
    m_discharged_mah_ = x.m_discharged_mah_;
    m_remaining_ = x.m_remaining_;
    m_scale_ = x.m_scale_;
    m_temperature_ = x.m_temperature_;
    m_cell_count_ = x.m_cell_count_;
    m_connected_ = x.m_connected_;
    m_source_ = x.m_source_;
    m_priority_ = x.m_priority_;
    m_capacity_ = x.m_capacity_;
    m_cycle_count_ = x.m_cycle_count_;
    m_run_time_to_empty_ = x.m_run_time_to_empty_;
    m_average_time_to_empty_ = x.m_average_time_to_empty_;
    m_serial_number_ = x.m_serial_number_;
    m_manufacture_date_ = x.m_manufacture_date_;
    m_state_of_health_ = x.m_state_of_health_;
    m_max_error_ = x.m_max_error_;
    m_id_ = x.m_id_;
    m_interface_error_ = x.m_interface_error_;
    m_voltage_cell_v = std::move(x.m_voltage_cell_v);
    m_max_cell_voltage_delta_ = x.m_max_cell_voltage_delta_;
    m_is_powering_off_ = x.m_is_powering_off_;
    m_warning_ = x.m_warning_;

    return *this;
}

size_t battery_status::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += ((10) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t battery_status::getCdrSerializedSize(const battery_status& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    if ((10) > 0)
    {
        current_alignment += ((10) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void battery_status::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp_;
    scdr << m_voltage_v_;
    scdr << m_voltage_filtered_v_;
    scdr << m_current_a_;
    scdr << m_current_filtered_a_;
    scdr << m_average_current_a_;
    scdr << m_discharged_mah_;
    scdr << m_remaining_;
    scdr << m_scale_;
    scdr << m_temperature_;
    scdr << m_cell_count_;
    scdr << m_connected_;
    scdr << m_source_;
    scdr << m_priority_;
    scdr << m_capacity_;
    scdr << m_cycle_count_;
    scdr << m_run_time_to_empty_;
    scdr << m_average_time_to_empty_;
    scdr << m_serial_number_;
    scdr << m_manufacture_date_;
    scdr << m_state_of_health_;
    scdr << m_max_error_;
    scdr << m_id_;
    scdr << m_interface_error_;
    scdr << m_voltage_cell_v;

    scdr << m_max_cell_voltage_delta_;
    scdr << m_is_powering_off_;
    scdr << m_warning_;
}

void battery_status::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_voltage_v_;
    dcdr >> m_voltage_filtered_v_;
    dcdr >> m_current_a_;
    dcdr >> m_current_filtered_a_;
    dcdr >> m_average_current_a_;
    dcdr >> m_discharged_mah_;
    dcdr >> m_remaining_;
    dcdr >> m_scale_;
    dcdr >> m_temperature_;
    dcdr >> m_cell_count_;
    dcdr >> m_connected_;
    dcdr >> m_source_;
    dcdr >> m_priority_;
    dcdr >> m_capacity_;
    dcdr >> m_cycle_count_;
    dcdr >> m_run_time_to_empty_;
    dcdr >> m_average_time_to_empty_;
    dcdr >> m_serial_number_;
    dcdr >> m_manufacture_date_;
    dcdr >> m_state_of_health_;
    dcdr >> m_max_error_;
    dcdr >> m_id_;
    dcdr >> m_interface_error_;
    dcdr >> m_voltage_cell_v;

    dcdr >> m_max_cell_voltage_delta_;
    dcdr >> m_is_powering_off_;
    dcdr >> m_warning_;
}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void battery_status::timestamp_(uint64_t _timestamp_)
{
m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t battery_status::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& battery_status::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function sets a value in member voltage_v_
 * @param _voltage_v_ New value for member voltage_v_
 */
void battery_status::voltage_v_(float _voltage_v_)
{
m_voltage_v_ = _voltage_v_;
}

/*!
 * @brief This function returns the value of member voltage_v_
 * @return Value of member voltage_v_
 */
float battery_status::voltage_v_() const
{
    return m_voltage_v_;
}

/*!
 * @brief This function returns a reference to member voltage_v_
 * @return Reference to member voltage_v_
 */
float& battery_status::voltage_v_()
{
    return m_voltage_v_;
}

/*!
 * @brief This function sets a value in member voltage_filtered_v_
 * @param _voltage_filtered_v_ New value for member voltage_filtered_v_
 */
void battery_status::voltage_filtered_v_(float _voltage_filtered_v_)
{
m_voltage_filtered_v_ = _voltage_filtered_v_;
}

/*!
 * @brief This function returns the value of member voltage_filtered_v_
 * @return Value of member voltage_filtered_v_
 */
float battery_status::voltage_filtered_v_() const
{
    return m_voltage_filtered_v_;
}

/*!
 * @brief This function returns a reference to member voltage_filtered_v_
 * @return Reference to member voltage_filtered_v_
 */
float& battery_status::voltage_filtered_v_()
{
    return m_voltage_filtered_v_;
}

/*!
 * @brief This function sets a value in member current_a_
 * @param _current_a_ New value for member current_a_
 */
void battery_status::current_a_(float _current_a_)
{
m_current_a_ = _current_a_;
}

/*!
 * @brief This function returns the value of member current_a_
 * @return Value of member current_a_
 */
float battery_status::current_a_() const
{
    return m_current_a_;
}

/*!
 * @brief This function returns a reference to member current_a_
 * @return Reference to member current_a_
 */
float& battery_status::current_a_()
{
    return m_current_a_;
}

/*!
 * @brief This function sets a value in member current_filtered_a_
 * @param _current_filtered_a_ New value for member current_filtered_a_
 */
void battery_status::current_filtered_a_(float _current_filtered_a_)
{
m_current_filtered_a_ = _current_filtered_a_;
}

/*!
 * @brief This function returns the value of member current_filtered_a_
 * @return Value of member current_filtered_a_
 */
float battery_status::current_filtered_a_() const
{
    return m_current_filtered_a_;
}

/*!
 * @brief This function returns a reference to member current_filtered_a_
 * @return Reference to member current_filtered_a_
 */
float& battery_status::current_filtered_a_()
{
    return m_current_filtered_a_;
}

/*!
 * @brief This function sets a value in member average_current_a_
 * @param _average_current_a_ New value for member average_current_a_
 */
void battery_status::average_current_a_(float _average_current_a_)
{
m_average_current_a_ = _average_current_a_;
}

/*!
 * @brief This function returns the value of member average_current_a_
 * @return Value of member average_current_a_
 */
float battery_status::average_current_a_() const
{
    return m_average_current_a_;
}

/*!
 * @brief This function returns a reference to member average_current_a_
 * @return Reference to member average_current_a_
 */
float& battery_status::average_current_a_()
{
    return m_average_current_a_;
}

/*!
 * @brief This function sets a value in member discharged_mah_
 * @param _discharged_mah_ New value for member discharged_mah_
 */
void battery_status::discharged_mah_(float _discharged_mah_)
{
m_discharged_mah_ = _discharged_mah_;
}

/*!
 * @brief This function returns the value of member discharged_mah_
 * @return Value of member discharged_mah_
 */
float battery_status::discharged_mah_() const
{
    return m_discharged_mah_;
}

/*!
 * @brief This function returns a reference to member discharged_mah_
 * @return Reference to member discharged_mah_
 */
float& battery_status::discharged_mah_()
{
    return m_discharged_mah_;
}

/*!
 * @brief This function sets a value in member remaining_
 * @param _remaining_ New value for member remaining_
 */
void battery_status::remaining_(float _remaining_)
{
m_remaining_ = _remaining_;
}

/*!
 * @brief This function returns the value of member remaining_
 * @return Value of member remaining_
 */
float battery_status::remaining_() const
{
    return m_remaining_;
}

/*!
 * @brief This function returns a reference to member remaining_
 * @return Reference to member remaining_
 */
float& battery_status::remaining_()
{
    return m_remaining_;
}

/*!
 * @brief This function sets a value in member scale_
 * @param _scale_ New value for member scale_
 */
void battery_status::scale_(float _scale_)
{
m_scale_ = _scale_;
}

/*!
 * @brief This function returns the value of member scale_
 * @return Value of member scale_
 */
float battery_status::scale_() const
{
    return m_scale_;
}

/*!
 * @brief This function returns a reference to member scale_
 * @return Reference to member scale_
 */
float& battery_status::scale_()
{
    return m_scale_;
}

/*!
 * @brief This function sets a value in member temperature_
 * @param _temperature_ New value for member temperature_
 */
void battery_status::temperature_(float _temperature_)
{
m_temperature_ = _temperature_;
}

/*!
 * @brief This function returns the value of member temperature_
 * @return Value of member temperature_
 */
float battery_status::temperature_() const
{
    return m_temperature_;
}

/*!
 * @brief This function returns a reference to member temperature_
 * @return Reference to member temperature_
 */
float& battery_status::temperature_()
{
    return m_temperature_;
}

/*!
 * @brief This function sets a value in member cell_count_
 * @param _cell_count_ New value for member cell_count_
 */
void battery_status::cell_count_(int32_t _cell_count_)
{
m_cell_count_ = _cell_count_;
}

/*!
 * @brief This function returns the value of member cell_count_
 * @return Value of member cell_count_
 */
int32_t battery_status::cell_count_() const
{
    return m_cell_count_;
}

/*!
 * @brief This function returns a reference to member cell_count_
 * @return Reference to member cell_count_
 */
int32_t& battery_status::cell_count_()
{
    return m_cell_count_;
}

/*!
 * @brief This function sets a value in member connected_
 * @param _connected_ New value for member connected_
 */
void battery_status::connected_(bool _connected_)
{
m_connected_ = _connected_;
}

/*!
 * @brief This function returns the value of member connected_
 * @return Value of member connected_
 */
bool battery_status::connected_() const
{
    return m_connected_;
}

/*!
 * @brief This function returns a reference to member connected_
 * @return Reference to member connected_
 */
bool& battery_status::connected_()
{
    return m_connected_;
}

/*!
 * @brief This function sets a value in member source_
 * @param _source_ New value for member source_
 */
void battery_status::source_(uint8_t _source_)
{
m_source_ = _source_;
}

/*!
 * @brief This function returns the value of member source_
 * @return Value of member source_
 */
uint8_t battery_status::source_() const
{
    return m_source_;
}

/*!
 * @brief This function returns a reference to member source_
 * @return Reference to member source_
 */
uint8_t& battery_status::source_()
{
    return m_source_;
}

/*!
 * @brief This function sets a value in member priority_
 * @param _priority_ New value for member priority_
 */
void battery_status::priority_(uint8_t _priority_)
{
m_priority_ = _priority_;
}

/*!
 * @brief This function returns the value of member priority_
 * @return Value of member priority_
 */
uint8_t battery_status::priority_() const
{
    return m_priority_;
}

/*!
 * @brief This function returns a reference to member priority_
 * @return Reference to member priority_
 */
uint8_t& battery_status::priority_()
{
    return m_priority_;
}

/*!
 * @brief This function sets a value in member capacity_
 * @param _capacity_ New value for member capacity_
 */
void battery_status::capacity_(uint16_t _capacity_)
{
m_capacity_ = _capacity_;
}

/*!
 * @brief This function returns the value of member capacity_
 * @return Value of member capacity_
 */
uint16_t battery_status::capacity_() const
{
    return m_capacity_;
}

/*!
 * @brief This function returns a reference to member capacity_
 * @return Reference to member capacity_
 */
uint16_t& battery_status::capacity_()
{
    return m_capacity_;
}

/*!
 * @brief This function sets a value in member cycle_count_
 * @param _cycle_count_ New value for member cycle_count_
 */
void battery_status::cycle_count_(uint16_t _cycle_count_)
{
m_cycle_count_ = _cycle_count_;
}

/*!
 * @brief This function returns the value of member cycle_count_
 * @return Value of member cycle_count_
 */
uint16_t battery_status::cycle_count_() const
{
    return m_cycle_count_;
}

/*!
 * @brief This function returns a reference to member cycle_count_
 * @return Reference to member cycle_count_
 */
uint16_t& battery_status::cycle_count_()
{
    return m_cycle_count_;
}

/*!
 * @brief This function sets a value in member run_time_to_empty_
 * @param _run_time_to_empty_ New value for member run_time_to_empty_
 */
void battery_status::run_time_to_empty_(uint16_t _run_time_to_empty_)
{
m_run_time_to_empty_ = _run_time_to_empty_;
}

/*!
 * @brief This function returns the value of member run_time_to_empty_
 * @return Value of member run_time_to_empty_
 */
uint16_t battery_status::run_time_to_empty_() const
{
    return m_run_time_to_empty_;
}

/*!
 * @brief This function returns a reference to member run_time_to_empty_
 * @return Reference to member run_time_to_empty_
 */
uint16_t& battery_status::run_time_to_empty_()
{
    return m_run_time_to_empty_;
}

/*!
 * @brief This function sets a value in member average_time_to_empty_
 * @param _average_time_to_empty_ New value for member average_time_to_empty_
 */
void battery_status::average_time_to_empty_(uint16_t _average_time_to_empty_)
{
m_average_time_to_empty_ = _average_time_to_empty_;
}

/*!
 * @brief This function returns the value of member average_time_to_empty_
 * @return Value of member average_time_to_empty_
 */
uint16_t battery_status::average_time_to_empty_() const
{
    return m_average_time_to_empty_;
}

/*!
 * @brief This function returns a reference to member average_time_to_empty_
 * @return Reference to member average_time_to_empty_
 */
uint16_t& battery_status::average_time_to_empty_()
{
    return m_average_time_to_empty_;
}

/*!
 * @brief This function sets a value in member serial_number_
 * @param _serial_number_ New value for member serial_number_
 */
void battery_status::serial_number_(uint16_t _serial_number_)
{
m_serial_number_ = _serial_number_;
}

/*!
 * @brief This function returns the value of member serial_number_
 * @return Value of member serial_number_
 */
uint16_t battery_status::serial_number_() const
{
    return m_serial_number_;
}

/*!
 * @brief This function returns a reference to member serial_number_
 * @return Reference to member serial_number_
 */
uint16_t& battery_status::serial_number_()
{
    return m_serial_number_;
}

/*!
 * @brief This function sets a value in member manufacture_date_
 * @param _manufacture_date_ New value for member manufacture_date_
 */
void battery_status::manufacture_date_(uint16_t _manufacture_date_)
{
m_manufacture_date_ = _manufacture_date_;
}

/*!
 * @brief This function returns the value of member manufacture_date_
 * @return Value of member manufacture_date_
 */
uint16_t battery_status::manufacture_date_() const
{
    return m_manufacture_date_;
}

/*!
 * @brief This function returns a reference to member manufacture_date_
 * @return Reference to member manufacture_date_
 */
uint16_t& battery_status::manufacture_date_()
{
    return m_manufacture_date_;
}

/*!
 * @brief This function sets a value in member state_of_health_
 * @param _state_of_health_ New value for member state_of_health_
 */
void battery_status::state_of_health_(uint16_t _state_of_health_)
{
m_state_of_health_ = _state_of_health_;
}

/*!
 * @brief This function returns the value of member state_of_health_
 * @return Value of member state_of_health_
 */
uint16_t battery_status::state_of_health_() const
{
    return m_state_of_health_;
}

/*!
 * @brief This function returns a reference to member state_of_health_
 * @return Reference to member state_of_health_
 */
uint16_t& battery_status::state_of_health_()
{
    return m_state_of_health_;
}

/*!
 * @brief This function sets a value in member max_error_
 * @param _max_error_ New value for member max_error_
 */
void battery_status::max_error_(uint16_t _max_error_)
{
m_max_error_ = _max_error_;
}

/*!
 * @brief This function returns the value of member max_error_
 * @return Value of member max_error_
 */
uint16_t battery_status::max_error_() const
{
    return m_max_error_;
}

/*!
 * @brief This function returns a reference to member max_error_
 * @return Reference to member max_error_
 */
uint16_t& battery_status::max_error_()
{
    return m_max_error_;
}

/*!
 * @brief This function sets a value in member id_
 * @param _id_ New value for member id_
 */
void battery_status::id_(uint8_t _id_)
{
m_id_ = _id_;
}

/*!
 * @brief This function returns the value of member id_
 * @return Value of member id_
 */
uint8_t battery_status::id_() const
{
    return m_id_;
}

/*!
 * @brief This function returns a reference to member id_
 * @return Reference to member id_
 */
uint8_t& battery_status::id_()
{
    return m_id_;
}

/*!
 * @brief This function sets a value in member interface_error_
 * @param _interface_error_ New value for member interface_error_
 */
void battery_status::interface_error_(uint16_t _interface_error_)
{
m_interface_error_ = _interface_error_;
}

/*!
 * @brief This function returns the value of member interface_error_
 * @return Value of member interface_error_
 */
uint16_t battery_status::interface_error_() const
{
    return m_interface_error_;
}

/*!
 * @brief This function returns a reference to member interface_error_
 * @return Reference to member interface_error_
 */
uint16_t& battery_status::interface_error_()
{
    return m_interface_error_;
}

/*!
 * @brief This function copies the value in member voltage_cell_v
 * @param _voltage_cell_v New value to be copied in member voltage_cell_v
 */
void battery_status::voltage_cell_v(const battery_status__float_array_10 &_voltage_cell_v)
{
m_voltage_cell_v = _voltage_cell_v;
}

/*!
 * @brief This function moves the value in member voltage_cell_v
 * @param _voltage_cell_v New value to be moved in member voltage_cell_v
 */
void battery_status::voltage_cell_v(battery_status__float_array_10 &&_voltage_cell_v)
{
m_voltage_cell_v = std::move(_voltage_cell_v);
}

/*!
 * @brief This function returns a constant reference to member voltage_cell_v
 * @return Constant reference to member voltage_cell_v
 */
const battery_status__float_array_10& battery_status::voltage_cell_v() const
{
    return m_voltage_cell_v;
}

/*!
 * @brief This function returns a reference to member voltage_cell_v
 * @return Reference to member voltage_cell_v
 */
battery_status__float_array_10& battery_status::voltage_cell_v()
{
    return m_voltage_cell_v;
}
/*!
 * @brief This function sets a value in member max_cell_voltage_delta_
 * @param _max_cell_voltage_delta_ New value for member max_cell_voltage_delta_
 */
void battery_status::max_cell_voltage_delta_(float _max_cell_voltage_delta_)
{
m_max_cell_voltage_delta_ = _max_cell_voltage_delta_;
}

/*!
 * @brief This function returns the value of member max_cell_voltage_delta_
 * @return Value of member max_cell_voltage_delta_
 */
float battery_status::max_cell_voltage_delta_() const
{
    return m_max_cell_voltage_delta_;
}

/*!
 * @brief This function returns a reference to member max_cell_voltage_delta_
 * @return Reference to member max_cell_voltage_delta_
 */
float& battery_status::max_cell_voltage_delta_()
{
    return m_max_cell_voltage_delta_;
}

/*!
 * @brief This function sets a value in member is_powering_off_
 * @param _is_powering_off_ New value for member is_powering_off_
 */
void battery_status::is_powering_off_(bool _is_powering_off_)
{
m_is_powering_off_ = _is_powering_off_;
}

/*!
 * @brief This function returns the value of member is_powering_off_
 * @return Value of member is_powering_off_
 */
bool battery_status::is_powering_off_() const
{
    return m_is_powering_off_;
}

/*!
 * @brief This function returns a reference to member is_powering_off_
 * @return Reference to member is_powering_off_
 */
bool& battery_status::is_powering_off_()
{
    return m_is_powering_off_;
}

/*!
 * @brief This function sets a value in member warning_
 * @param _warning_ New value for member warning_
 */
void battery_status::warning_(uint8_t _warning_)
{
m_warning_ = _warning_;
}

/*!
 * @brief This function returns the value of member warning_
 * @return Value of member warning_
 */
uint8_t battery_status::warning_() const
{
    return m_warning_;
}

/*!
 * @brief This function returns a reference to member warning_
 * @return Reference to member warning_
 */
uint8_t& battery_status::warning_()
{
    return m_warning_;
}


size_t battery_status::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;































    return current_align;
}

bool battery_status::isKeyDefined()
{
   return false;
}

void battery_status::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}
