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
 * @file vehicle_mocap_odometry.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _VEHICLE_MOCAP_ODOMETRY_H_
#define _VEHICLE_MOCAP_ODOMETRY_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(vehicle_mocap_odometry_SOURCE)
#define vehicle_mocap_odometry_DllAPI __declspec( dllexport )
#else
#define vehicle_mocap_odometry_DllAPI __declspec( dllimport )
#endif // vehicle_mocap_odometry_SOURCE
#else
#define vehicle_mocap_odometry_DllAPI
#endif
#else
#define vehicle_mocap_odometry_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_X_VARIANCE = 0;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_Y_VARIANCE = 6;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_Z_VARIANCE = 11;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_ROLL_VARIANCE = 15;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_PITCH_VARIANCE = 18;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_YAW_VARIANCE = 20;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_VX_VARIANCE = 0;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_VY_VARIANCE = 6;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_VZ_VARIANCE = 11;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_ROLLRATE_VARIANCE = 15;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_PITCHRATE_VARIANCE = 18;
const uint8_t vehicle_mocap_odometry__COVARIANCE_MATRIX_YAWRATE_VARIANCE = 20;
const uint8_t vehicle_mocap_odometry__LOCAL_FRAME_NED = 0;
const uint8_t vehicle_mocap_odometry__LOCAL_FRAME_FRD = 1;
const uint8_t vehicle_mocap_odometry__LOCAL_FRAME_OTHER = 2;
const uint8_t vehicle_mocap_odometry__BODY_FRAME_FRD = 3;
typedef std::array<float, 21> vehicle_mocap_odometry__float_array_21;
typedef std::array<float, 4> vehicle_mocap_odometry__float_array_4;
/*!
 * @brief This class represents the structure vehicle_mocap_odometry defined by the user in the IDL file.
 * @ingroup VEHICLE_MOCAP_ODOMETRY
 */
class vehicle_mocap_odometry
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport vehicle_mocap_odometry();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~vehicle_mocap_odometry();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object vehicle_mocap_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_mocap_odometry(const vehicle_mocap_odometry &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object vehicle_mocap_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_mocap_odometry(vehicle_mocap_odometry &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object vehicle_mocap_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_mocap_odometry& operator=(const vehicle_mocap_odometry &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object vehicle_mocap_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_mocap_odometry& operator=(vehicle_mocap_odometry &&x);

    /*!
     * @brief This function sets a value in member timestamp_
     * @param _timestamp_ New value for member timestamp_
     */
    eProsima_user_DllExport void timestamp_(uint64_t _timestamp_);

    /*!
     * @brief This function returns the value of member timestamp_
     * @return Value of member timestamp_
     */
    eProsima_user_DllExport uint64_t timestamp_() const;

    /*!
     * @brief This function returns a reference to member timestamp_
     * @return Reference to member timestamp_
     */
    eProsima_user_DllExport uint64_t& timestamp_();

    /*!
     * @brief This function sets a value in member timestamp_sample_
     * @param _timestamp_sample_ New value for member timestamp_sample_
     */
    eProsima_user_DllExport void timestamp_sample_(uint64_t _timestamp_sample_);

    /*!
     * @brief This function returns the value of member timestamp_sample_
     * @return Value of member timestamp_sample_
     */
    eProsima_user_DllExport uint64_t timestamp_sample_() const;

    /*!
     * @brief This function returns a reference to member timestamp_sample_
     * @return Reference to member timestamp_sample_
     */
    eProsima_user_DllExport uint64_t& timestamp_sample_();

    /*!
     * @brief This function sets a value in member local_frame_
     * @param _local_frame_ New value for member local_frame_
     */
    eProsima_user_DllExport void local_frame_(uint8_t _local_frame_);

    /*!
     * @brief This function returns the value of member local_frame_
     * @return Value of member local_frame_
     */
    eProsima_user_DllExport uint8_t local_frame_() const;

    /*!
     * @brief This function returns a reference to member local_frame_
     * @return Reference to member local_frame_
     */
    eProsima_user_DllExport uint8_t& local_frame_();

    /*!
     * @brief This function sets a value in member x_
     * @param _x_ New value for member x_
     */
    eProsima_user_DllExport void x_(float _x_);

    /*!
     * @brief This function returns the value of member x_
     * @return Value of member x_
     */
    eProsima_user_DllExport float x_() const;

    /*!
     * @brief This function returns a reference to member x_
     * @return Reference to member x_
     */
    eProsima_user_DllExport float& x_();

    /*!
     * @brief This function sets a value in member y_
     * @param _y_ New value for member y_
     */
    eProsima_user_DllExport void y_(float _y_);

    /*!
     * @brief This function returns the value of member y_
     * @return Value of member y_
     */
    eProsima_user_DllExport float y_() const;

    /*!
     * @brief This function returns a reference to member y_
     * @return Reference to member y_
     */
    eProsima_user_DllExport float& y_();

    /*!
     * @brief This function sets a value in member z_
     * @param _z_ New value for member z_
     */
    eProsima_user_DllExport void z_(float _z_);

    /*!
     * @brief This function returns the value of member z_
     * @return Value of member z_
     */
    eProsima_user_DllExport float z_() const;

    /*!
     * @brief This function returns a reference to member z_
     * @return Reference to member z_
     */
    eProsima_user_DllExport float& z_();

    /*!
     * @brief This function copies the value in member q
     * @param _q New value to be copied in member q
     */
    eProsima_user_DllExport void q(const vehicle_mocap_odometry__float_array_4 &_q);

    /*!
     * @brief This function moves the value in member q
     * @param _q New value to be moved in member q
     */
    eProsima_user_DllExport void q(vehicle_mocap_odometry__float_array_4 &&_q);

    /*!
     * @brief This function returns a constant reference to member q
     * @return Constant reference to member q
     */
    eProsima_user_DllExport const vehicle_mocap_odometry__float_array_4& q() const;

    /*!
     * @brief This function returns a reference to member q
     * @return Reference to member q
     */
    eProsima_user_DllExport vehicle_mocap_odometry__float_array_4& q();
    /*!
     * @brief This function copies the value in member q_offset
     * @param _q_offset New value to be copied in member q_offset
     */
    eProsima_user_DllExport void q_offset(const vehicle_mocap_odometry__float_array_4 &_q_offset);

    /*!
     * @brief This function moves the value in member q_offset
     * @param _q_offset New value to be moved in member q_offset
     */
    eProsima_user_DllExport void q_offset(vehicle_mocap_odometry__float_array_4 &&_q_offset);

    /*!
     * @brief This function returns a constant reference to member q_offset
     * @return Constant reference to member q_offset
     */
    eProsima_user_DllExport const vehicle_mocap_odometry__float_array_4& q_offset() const;

    /*!
     * @brief This function returns a reference to member q_offset
     * @return Reference to member q_offset
     */
    eProsima_user_DllExport vehicle_mocap_odometry__float_array_4& q_offset();
    /*!
     * @brief This function copies the value in member pose_covariance
     * @param _pose_covariance New value to be copied in member pose_covariance
     */
    eProsima_user_DllExport void pose_covariance(const vehicle_mocap_odometry__float_array_21 &_pose_covariance);

    /*!
     * @brief This function moves the value in member pose_covariance
     * @param _pose_covariance New value to be moved in member pose_covariance
     */
    eProsima_user_DllExport void pose_covariance(vehicle_mocap_odometry__float_array_21 &&_pose_covariance);

    /*!
     * @brief This function returns a constant reference to member pose_covariance
     * @return Constant reference to member pose_covariance
     */
    eProsima_user_DllExport const vehicle_mocap_odometry__float_array_21& pose_covariance() const;

    /*!
     * @brief This function returns a reference to member pose_covariance
     * @return Reference to member pose_covariance
     */
    eProsima_user_DllExport vehicle_mocap_odometry__float_array_21& pose_covariance();
    /*!
     * @brief This function sets a value in member velocity_frame_
     * @param _velocity_frame_ New value for member velocity_frame_
     */
    eProsima_user_DllExport void velocity_frame_(uint8_t _velocity_frame_);

    /*!
     * @brief This function returns the value of member velocity_frame_
     * @return Value of member velocity_frame_
     */
    eProsima_user_DllExport uint8_t velocity_frame_() const;

    /*!
     * @brief This function returns a reference to member velocity_frame_
     * @return Reference to member velocity_frame_
     */
    eProsima_user_DllExport uint8_t& velocity_frame_();

    /*!
     * @brief This function sets a value in member vx_
     * @param _vx_ New value for member vx_
     */
    eProsima_user_DllExport void vx_(float _vx_);

    /*!
     * @brief This function returns the value of member vx_
     * @return Value of member vx_
     */
    eProsima_user_DllExport float vx_() const;

    /*!
     * @brief This function returns a reference to member vx_
     * @return Reference to member vx_
     */
    eProsima_user_DllExport float& vx_();

    /*!
     * @brief This function sets a value in member vy_
     * @param _vy_ New value for member vy_
     */
    eProsima_user_DllExport void vy_(float _vy_);

    /*!
     * @brief This function returns the value of member vy_
     * @return Value of member vy_
     */
    eProsima_user_DllExport float vy_() const;

    /*!
     * @brief This function returns a reference to member vy_
     * @return Reference to member vy_
     */
    eProsima_user_DllExport float& vy_();

    /*!
     * @brief This function sets a value in member vz_
     * @param _vz_ New value for member vz_
     */
    eProsima_user_DllExport void vz_(float _vz_);

    /*!
     * @brief This function returns the value of member vz_
     * @return Value of member vz_
     */
    eProsima_user_DllExport float vz_() const;

    /*!
     * @brief This function returns a reference to member vz_
     * @return Reference to member vz_
     */
    eProsima_user_DllExport float& vz_();

    /*!
     * @brief This function sets a value in member rollspeed_
     * @param _rollspeed_ New value for member rollspeed_
     */
    eProsima_user_DllExport void rollspeed_(float _rollspeed_);

    /*!
     * @brief This function returns the value of member rollspeed_
     * @return Value of member rollspeed_
     */
    eProsima_user_DllExport float rollspeed_() const;

    /*!
     * @brief This function returns a reference to member rollspeed_
     * @return Reference to member rollspeed_
     */
    eProsima_user_DllExport float& rollspeed_();

    /*!
     * @brief This function sets a value in member pitchspeed_
     * @param _pitchspeed_ New value for member pitchspeed_
     */
    eProsima_user_DllExport void pitchspeed_(float _pitchspeed_);

    /*!
     * @brief This function returns the value of member pitchspeed_
     * @return Value of member pitchspeed_
     */
    eProsima_user_DllExport float pitchspeed_() const;

    /*!
     * @brief This function returns a reference to member pitchspeed_
     * @return Reference to member pitchspeed_
     */
    eProsima_user_DllExport float& pitchspeed_();

    /*!
     * @brief This function sets a value in member yawspeed_
     * @param _yawspeed_ New value for member yawspeed_
     */
    eProsima_user_DllExport void yawspeed_(float _yawspeed_);

    /*!
     * @brief This function returns the value of member yawspeed_
     * @return Value of member yawspeed_
     */
    eProsima_user_DllExport float yawspeed_() const;

    /*!
     * @brief This function returns a reference to member yawspeed_
     * @return Reference to member yawspeed_
     */
    eProsima_user_DllExport float& yawspeed_();

    /*!
     * @brief This function copies the value in member velocity_covariance
     * @param _velocity_covariance New value to be copied in member velocity_covariance
     */
    eProsima_user_DllExport void velocity_covariance(const vehicle_mocap_odometry__float_array_21 &_velocity_covariance);

    /*!
     * @brief This function moves the value in member velocity_covariance
     * @param _velocity_covariance New value to be moved in member velocity_covariance
     */
    eProsima_user_DllExport void velocity_covariance(vehicle_mocap_odometry__float_array_21 &&_velocity_covariance);

    /*!
     * @brief This function returns a constant reference to member velocity_covariance
     * @return Constant reference to member velocity_covariance
     */
    eProsima_user_DllExport const vehicle_mocap_odometry__float_array_21& velocity_covariance() const;

    /*!
     * @brief This function returns a reference to member velocity_covariance
     * @return Reference to member velocity_covariance
     */
    eProsima_user_DllExport vehicle_mocap_odometry__float_array_21& velocity_covariance();
    /*!
     * @brief This function sets a value in member reset_counter_
     * @param _reset_counter_ New value for member reset_counter_
     */
    eProsima_user_DllExport void reset_counter_(uint8_t _reset_counter_);

    /*!
     * @brief This function returns the value of member reset_counter_
     * @return Value of member reset_counter_
     */
    eProsima_user_DllExport uint8_t reset_counter_() const;

    /*!
     * @brief This function returns a reference to member reset_counter_
     * @return Reference to member reset_counter_
     */
    eProsima_user_DllExport uint8_t& reset_counter_();


    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(const vehicle_mocap_odometry& data, size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

private:
    uint64_t m_timestamp_;
    uint64_t m_timestamp_sample_;
    uint8_t m_local_frame_;
    float m_x_;
    float m_y_;
    float m_z_;
    vehicle_mocap_odometry__float_array_4 m_q;
    vehicle_mocap_odometry__float_array_4 m_q_offset;
    vehicle_mocap_odometry__float_array_21 m_pose_covariance;
    uint8_t m_velocity_frame_;
    float m_vx_;
    float m_vy_;
    float m_vz_;
    float m_rollspeed_;
    float m_pitchspeed_;
    float m_yawspeed_;
    vehicle_mocap_odometry__float_array_21 m_velocity_covariance;
    uint8_t m_reset_counter_;
};

#endif // _VEHICLE_MOCAP_ODOMETRY_H_