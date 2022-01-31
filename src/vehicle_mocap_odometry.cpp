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
 * @file vehicle_mocap_odometry.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "vehicle_mocap_odometry.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>



















vehicle_mocap_odometry::vehicle_mocap_odometry()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1e730495
    m_timestamp_ = 0;
    // m_timestamp_sample_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7d3a22a9
    m_timestamp_sample_ = 0;
    // m_local_frame_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1d082e88
    m_local_frame_ = 0;
    // m_x_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@60704c
    m_x_ = 0.0;
    // m_y_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6b19b79
    m_y_ = 0.0;
    // m_z_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2a32de6c
    m_z_ = 0.0;
    // m_q com.eprosima.idl.parser.typecode.AliasTypeCode@7692d9cc
    memset(&m_q, 0, (4) * 4);
    // m_q_offset com.eprosima.idl.parser.typecode.AliasTypeCode@7692d9cc
    memset(&m_q_offset, 0, (4) * 4);
    // m_pose_covariance com.eprosima.idl.parser.typecode.AliasTypeCode@75f32542
    memset(&m_pose_covariance, 0, (21) * 4);
    // m_velocity_frame_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7f1302d6
    m_velocity_frame_ = 0;
    // m_vx_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@43ee72e6
    m_vx_ = 0.0;
    // m_vy_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@23529fee
    m_vy_ = 0.0;
    // m_vz_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@4fe767f3
    m_vz_ = 0.0;
    // m_rollspeed_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2805c96b
    m_rollspeed_ = 0.0;
    // m_pitchspeed_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@184cf7cf
    m_pitchspeed_ = 0.0;
    // m_yawspeed_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2fd6b6c7
    m_yawspeed_ = 0.0;
    // m_velocity_covariance com.eprosima.idl.parser.typecode.AliasTypeCode@75f32542
    memset(&m_velocity_covariance, 0, (21) * 4);
    // m_reset_counter_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5bfa9431
    m_reset_counter_ = 0;

}

vehicle_mocap_odometry::~vehicle_mocap_odometry()
{


















}

vehicle_mocap_odometry::vehicle_mocap_odometry(const vehicle_mocap_odometry &x)
{
    m_timestamp_ = x.m_timestamp_;
    m_timestamp_sample_ = x.m_timestamp_sample_;
    m_local_frame_ = x.m_local_frame_;
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
    m_q = x.m_q;
    m_q_offset = x.m_q_offset;
    m_pose_covariance = x.m_pose_covariance;
    m_velocity_frame_ = x.m_velocity_frame_;
    m_vx_ = x.m_vx_;
    m_vy_ = x.m_vy_;
    m_vz_ = x.m_vz_;
    m_rollspeed_ = x.m_rollspeed_;
    m_pitchspeed_ = x.m_pitchspeed_;
    m_yawspeed_ = x.m_yawspeed_;
    m_velocity_covariance = x.m_velocity_covariance;
    m_reset_counter_ = x.m_reset_counter_;
}

vehicle_mocap_odometry::vehicle_mocap_odometry(vehicle_mocap_odometry &&x)
{
    m_timestamp_ = x.m_timestamp_;
    m_timestamp_sample_ = x.m_timestamp_sample_;
    m_local_frame_ = x.m_local_frame_;
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
    m_q = std::move(x.m_q);
    m_q_offset = std::move(x.m_q_offset);
    m_pose_covariance = std::move(x.m_pose_covariance);
    m_velocity_frame_ = x.m_velocity_frame_;
    m_vx_ = x.m_vx_;
    m_vy_ = x.m_vy_;
    m_vz_ = x.m_vz_;
    m_rollspeed_ = x.m_rollspeed_;
    m_pitchspeed_ = x.m_pitchspeed_;
    m_yawspeed_ = x.m_yawspeed_;
    m_velocity_covariance = std::move(x.m_velocity_covariance);
    m_reset_counter_ = x.m_reset_counter_;
}

vehicle_mocap_odometry& vehicle_mocap_odometry::operator=(const vehicle_mocap_odometry &x)
{

    m_timestamp_ = x.m_timestamp_;
    m_timestamp_sample_ = x.m_timestamp_sample_;
    m_local_frame_ = x.m_local_frame_;
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
    m_q = x.m_q;
    m_q_offset = x.m_q_offset;
    m_pose_covariance = x.m_pose_covariance;
    m_velocity_frame_ = x.m_velocity_frame_;
    m_vx_ = x.m_vx_;
    m_vy_ = x.m_vy_;
    m_vz_ = x.m_vz_;
    m_rollspeed_ = x.m_rollspeed_;
    m_pitchspeed_ = x.m_pitchspeed_;
    m_yawspeed_ = x.m_yawspeed_;
    m_velocity_covariance = x.m_velocity_covariance;
    m_reset_counter_ = x.m_reset_counter_;

    return *this;
}

vehicle_mocap_odometry& vehicle_mocap_odometry::operator=(vehicle_mocap_odometry &&x)
{

    m_timestamp_ = x.m_timestamp_;
    m_timestamp_sample_ = x.m_timestamp_sample_;
    m_local_frame_ = x.m_local_frame_;
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
    m_q = std::move(x.m_q);
    m_q_offset = std::move(x.m_q_offset);
    m_pose_covariance = std::move(x.m_pose_covariance);
    m_velocity_frame_ = x.m_velocity_frame_;
    m_vx_ = x.m_vx_;
    m_vy_ = x.m_vy_;
    m_vz_ = x.m_vz_;
    m_rollspeed_ = x.m_rollspeed_;
    m_pitchspeed_ = x.m_pitchspeed_;
    m_yawspeed_ = x.m_yawspeed_;
    m_velocity_covariance = std::move(x.m_velocity_covariance);
    m_reset_counter_ = x.m_reset_counter_;

    return *this;
}

size_t vehicle_mocap_odometry::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t vehicle_mocap_odometry::getCdrSerializedSize(const vehicle_mocap_odometry& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    if ((4) > 0)
    {
        current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((4) > 0)
    {
        current_alignment += ((4) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((21) > 0)
    {
        current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    if ((21) > 0)
    {
        current_alignment += ((21) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void vehicle_mocap_odometry::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp_;
    scdr << m_timestamp_sample_;
    scdr << m_local_frame_;
    scdr << m_x_;
    scdr << m_y_;
    scdr << m_z_;
    scdr << m_q;

    scdr << m_q_offset;

    scdr << m_pose_covariance;

    scdr << m_velocity_frame_;
    scdr << m_vx_;
    scdr << m_vy_;
    scdr << m_vz_;
    scdr << m_rollspeed_;
    scdr << m_pitchspeed_;
    scdr << m_yawspeed_;
    scdr << m_velocity_covariance;

    scdr << m_reset_counter_;
}

void vehicle_mocap_odometry::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_timestamp_sample_;
    dcdr >> m_local_frame_;
    dcdr >> m_x_;
    dcdr >> m_y_;
    dcdr >> m_z_;
    dcdr >> m_q;

    dcdr >> m_q_offset;

    dcdr >> m_pose_covariance;

    dcdr >> m_velocity_frame_;
    dcdr >> m_vx_;
    dcdr >> m_vy_;
    dcdr >> m_vz_;
    dcdr >> m_rollspeed_;
    dcdr >> m_pitchspeed_;
    dcdr >> m_yawspeed_;
    dcdr >> m_velocity_covariance;

    dcdr >> m_reset_counter_;
}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void vehicle_mocap_odometry::timestamp_(uint64_t _timestamp_)
{
m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t vehicle_mocap_odometry::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& vehicle_mocap_odometry::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function sets a value in member timestamp_sample_
 * @param _timestamp_sample_ New value for member timestamp_sample_
 */
void vehicle_mocap_odometry::timestamp_sample_(uint64_t _timestamp_sample_)
{
m_timestamp_sample_ = _timestamp_sample_;
}

/*!
 * @brief This function returns the value of member timestamp_sample_
 * @return Value of member timestamp_sample_
 */
uint64_t vehicle_mocap_odometry::timestamp_sample_() const
{
    return m_timestamp_sample_;
}

/*!
 * @brief This function returns a reference to member timestamp_sample_
 * @return Reference to member timestamp_sample_
 */
uint64_t& vehicle_mocap_odometry::timestamp_sample_()
{
    return m_timestamp_sample_;
}

/*!
 * @brief This function sets a value in member local_frame_
 * @param _local_frame_ New value for member local_frame_
 */
void vehicle_mocap_odometry::local_frame_(uint8_t _local_frame_)
{
m_local_frame_ = _local_frame_;
}

/*!
 * @brief This function returns the value of member local_frame_
 * @return Value of member local_frame_
 */
uint8_t vehicle_mocap_odometry::local_frame_() const
{
    return m_local_frame_;
}

/*!
 * @brief This function returns a reference to member local_frame_
 * @return Reference to member local_frame_
 */
uint8_t& vehicle_mocap_odometry::local_frame_()
{
    return m_local_frame_;
}

/*!
 * @brief This function sets a value in member x_
 * @param _x_ New value for member x_
 */
void vehicle_mocap_odometry::x_(float _x_)
{
m_x_ = _x_;
}

/*!
 * @brief This function returns the value of member x_
 * @return Value of member x_
 */
float vehicle_mocap_odometry::x_() const
{
    return m_x_;
}

/*!
 * @brief This function returns a reference to member x_
 * @return Reference to member x_
 */
float& vehicle_mocap_odometry::x_()
{
    return m_x_;
}

/*!
 * @brief This function sets a value in member y_
 * @param _y_ New value for member y_
 */
void vehicle_mocap_odometry::y_(float _y_)
{
m_y_ = _y_;
}

/*!
 * @brief This function returns the value of member y_
 * @return Value of member y_
 */
float vehicle_mocap_odometry::y_() const
{
    return m_y_;
}

/*!
 * @brief This function returns a reference to member y_
 * @return Reference to member y_
 */
float& vehicle_mocap_odometry::y_()
{
    return m_y_;
}

/*!
 * @brief This function sets a value in member z_
 * @param _z_ New value for member z_
 */
void vehicle_mocap_odometry::z_(float _z_)
{
m_z_ = _z_;
}

/*!
 * @brief This function returns the value of member z_
 * @return Value of member z_
 */
float vehicle_mocap_odometry::z_() const
{
    return m_z_;
}

/*!
 * @brief This function returns a reference to member z_
 * @return Reference to member z_
 */
float& vehicle_mocap_odometry::z_()
{
    return m_z_;
}

/*!
 * @brief This function copies the value in member q
 * @param _q New value to be copied in member q
 */
void vehicle_mocap_odometry::q(const vehicle_mocap_odometry__float_array_4 &_q)
{
m_q = _q;
}

/*!
 * @brief This function moves the value in member q
 * @param _q New value to be moved in member q
 */
void vehicle_mocap_odometry::q(vehicle_mocap_odometry__float_array_4 &&_q)
{
m_q = std::move(_q);
}

/*!
 * @brief This function returns a constant reference to member q
 * @return Constant reference to member q
 */
const vehicle_mocap_odometry__float_array_4& vehicle_mocap_odometry::q() const
{
    return m_q;
}

/*!
 * @brief This function returns a reference to member q
 * @return Reference to member q
 */
vehicle_mocap_odometry__float_array_4& vehicle_mocap_odometry::q()
{
    return m_q;
}
/*!
 * @brief This function copies the value in member q_offset
 * @param _q_offset New value to be copied in member q_offset
 */
void vehicle_mocap_odometry::q_offset(const vehicle_mocap_odometry__float_array_4 &_q_offset)
{
m_q_offset = _q_offset;
}

/*!
 * @brief This function moves the value in member q_offset
 * @param _q_offset New value to be moved in member q_offset
 */
void vehicle_mocap_odometry::q_offset(vehicle_mocap_odometry__float_array_4 &&_q_offset)
{
m_q_offset = std::move(_q_offset);
}

/*!
 * @brief This function returns a constant reference to member q_offset
 * @return Constant reference to member q_offset
 */
const vehicle_mocap_odometry__float_array_4& vehicle_mocap_odometry::q_offset() const
{
    return m_q_offset;
}

/*!
 * @brief This function returns a reference to member q_offset
 * @return Reference to member q_offset
 */
vehicle_mocap_odometry__float_array_4& vehicle_mocap_odometry::q_offset()
{
    return m_q_offset;
}
/*!
 * @brief This function copies the value in member pose_covariance
 * @param _pose_covariance New value to be copied in member pose_covariance
 */
void vehicle_mocap_odometry::pose_covariance(const vehicle_mocap_odometry__float_array_21 &_pose_covariance)
{
m_pose_covariance = _pose_covariance;
}

/*!
 * @brief This function moves the value in member pose_covariance
 * @param _pose_covariance New value to be moved in member pose_covariance
 */
void vehicle_mocap_odometry::pose_covariance(vehicle_mocap_odometry__float_array_21 &&_pose_covariance)
{
m_pose_covariance = std::move(_pose_covariance);
}

/*!
 * @brief This function returns a constant reference to member pose_covariance
 * @return Constant reference to member pose_covariance
 */
const vehicle_mocap_odometry__float_array_21& vehicle_mocap_odometry::pose_covariance() const
{
    return m_pose_covariance;
}

/*!
 * @brief This function returns a reference to member pose_covariance
 * @return Reference to member pose_covariance
 */
vehicle_mocap_odometry__float_array_21& vehicle_mocap_odometry::pose_covariance()
{
    return m_pose_covariance;
}
/*!
 * @brief This function sets a value in member velocity_frame_
 * @param _velocity_frame_ New value for member velocity_frame_
 */
void vehicle_mocap_odometry::velocity_frame_(uint8_t _velocity_frame_)
{
m_velocity_frame_ = _velocity_frame_;
}

/*!
 * @brief This function returns the value of member velocity_frame_
 * @return Value of member velocity_frame_
 */
uint8_t vehicle_mocap_odometry::velocity_frame_() const
{
    return m_velocity_frame_;
}

/*!
 * @brief This function returns a reference to member velocity_frame_
 * @return Reference to member velocity_frame_
 */
uint8_t& vehicle_mocap_odometry::velocity_frame_()
{
    return m_velocity_frame_;
}

/*!
 * @brief This function sets a value in member vx_
 * @param _vx_ New value for member vx_
 */
void vehicle_mocap_odometry::vx_(float _vx_)
{
m_vx_ = _vx_;
}

/*!
 * @brief This function returns the value of member vx_
 * @return Value of member vx_
 */
float vehicle_mocap_odometry::vx_() const
{
    return m_vx_;
}

/*!
 * @brief This function returns a reference to member vx_
 * @return Reference to member vx_
 */
float& vehicle_mocap_odometry::vx_()
{
    return m_vx_;
}

/*!
 * @brief This function sets a value in member vy_
 * @param _vy_ New value for member vy_
 */
void vehicle_mocap_odometry::vy_(float _vy_)
{
m_vy_ = _vy_;
}

/*!
 * @brief This function returns the value of member vy_
 * @return Value of member vy_
 */
float vehicle_mocap_odometry::vy_() const
{
    return m_vy_;
}

/*!
 * @brief This function returns a reference to member vy_
 * @return Reference to member vy_
 */
float& vehicle_mocap_odometry::vy_()
{
    return m_vy_;
}

/*!
 * @brief This function sets a value in member vz_
 * @param _vz_ New value for member vz_
 */
void vehicle_mocap_odometry::vz_(float _vz_)
{
m_vz_ = _vz_;
}

/*!
 * @brief This function returns the value of member vz_
 * @return Value of member vz_
 */
float vehicle_mocap_odometry::vz_() const
{
    return m_vz_;
}

/*!
 * @brief This function returns a reference to member vz_
 * @return Reference to member vz_
 */
float& vehicle_mocap_odometry::vz_()
{
    return m_vz_;
}

/*!
 * @brief This function sets a value in member rollspeed_
 * @param _rollspeed_ New value for member rollspeed_
 */
void vehicle_mocap_odometry::rollspeed_(float _rollspeed_)
{
m_rollspeed_ = _rollspeed_;
}

/*!
 * @brief This function returns the value of member rollspeed_
 * @return Value of member rollspeed_
 */
float vehicle_mocap_odometry::rollspeed_() const
{
    return m_rollspeed_;
}

/*!
 * @brief This function returns a reference to member rollspeed_
 * @return Reference to member rollspeed_
 */
float& vehicle_mocap_odometry::rollspeed_()
{
    return m_rollspeed_;
}

/*!
 * @brief This function sets a value in member pitchspeed_
 * @param _pitchspeed_ New value for member pitchspeed_
 */
void vehicle_mocap_odometry::pitchspeed_(float _pitchspeed_)
{
m_pitchspeed_ = _pitchspeed_;
}

/*!
 * @brief This function returns the value of member pitchspeed_
 * @return Value of member pitchspeed_
 */
float vehicle_mocap_odometry::pitchspeed_() const
{
    return m_pitchspeed_;
}

/*!
 * @brief This function returns a reference to member pitchspeed_
 * @return Reference to member pitchspeed_
 */
float& vehicle_mocap_odometry::pitchspeed_()
{
    return m_pitchspeed_;
}

/*!
 * @brief This function sets a value in member yawspeed_
 * @param _yawspeed_ New value for member yawspeed_
 */
void vehicle_mocap_odometry::yawspeed_(float _yawspeed_)
{
m_yawspeed_ = _yawspeed_;
}

/*!
 * @brief This function returns the value of member yawspeed_
 * @return Value of member yawspeed_
 */
float vehicle_mocap_odometry::yawspeed_() const
{
    return m_yawspeed_;
}

/*!
 * @brief This function returns a reference to member yawspeed_
 * @return Reference to member yawspeed_
 */
float& vehicle_mocap_odometry::yawspeed_()
{
    return m_yawspeed_;
}

/*!
 * @brief This function copies the value in member velocity_covariance
 * @param _velocity_covariance New value to be copied in member velocity_covariance
 */
void vehicle_mocap_odometry::velocity_covariance(const vehicle_mocap_odometry__float_array_21 &_velocity_covariance)
{
m_velocity_covariance = _velocity_covariance;
}

/*!
 * @brief This function moves the value in member velocity_covariance
 * @param _velocity_covariance New value to be moved in member velocity_covariance
 */
void vehicle_mocap_odometry::velocity_covariance(vehicle_mocap_odometry__float_array_21 &&_velocity_covariance)
{
m_velocity_covariance = std::move(_velocity_covariance);
}

/*!
 * @brief This function returns a constant reference to member velocity_covariance
 * @return Constant reference to member velocity_covariance
 */
const vehicle_mocap_odometry__float_array_21& vehicle_mocap_odometry::velocity_covariance() const
{
    return m_velocity_covariance;
}

/*!
 * @brief This function returns a reference to member velocity_covariance
 * @return Reference to member velocity_covariance
 */
vehicle_mocap_odometry__float_array_21& vehicle_mocap_odometry::velocity_covariance()
{
    return m_velocity_covariance;
}
/*!
 * @brief This function sets a value in member reset_counter_
 * @param _reset_counter_ New value for member reset_counter_
 */
void vehicle_mocap_odometry::reset_counter_(uint8_t _reset_counter_)
{
m_reset_counter_ = _reset_counter_;
}

/*!
 * @brief This function returns the value of member reset_counter_
 * @return Value of member reset_counter_
 */
uint8_t vehicle_mocap_odometry::reset_counter_() const
{
    return m_reset_counter_;
}

/*!
 * @brief This function returns a reference to member reset_counter_
 * @return Reference to member reset_counter_
 */
uint8_t& vehicle_mocap_odometry::reset_counter_()
{
    return m_reset_counter_;
}


size_t vehicle_mocap_odometry::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;





















    return current_align;
}

bool vehicle_mocap_odometry::isKeyDefined()
{
   return false;
}

void vehicle_mocap_odometry::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}
