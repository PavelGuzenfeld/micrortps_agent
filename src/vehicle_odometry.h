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
 * @file vehicle_odometry.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _VEHICLE_ODOMETRY_H_
#define _VEHICLE_ODOMETRY_H_

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
#if defined(vehicle_odometry_SOURCE)
#define vehicle_odometry_DllAPI __declspec( dllexport )
#else
#define vehicle_odometry_DllAPI __declspec( dllimport )
#endif // vehicle_odometry_SOURCE
#else
#define vehicle_odometry_DllAPI
#endif
#else
#define vehicle_odometry_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


const uint8_t vehicle_odometry__POSE_FRAME_UNKNOWN = 0;
const uint8_t vehicle_odometry__POSE_FRAME_NED = 1;
const uint8_t vehicle_odometry__POSE_FRAME_FRD = 2;
const uint8_t vehicle_odometry__VELOCITY_FRAME_UNKNOWN = 0;
const uint8_t vehicle_odometry__VELOCITY_FRAME_NED = 1;
const uint8_t vehicle_odometry__VELOCITY_FRAME_FRD = 2;
const uint8_t vehicle_odometry__VELOCITY_FRAME_BODY_FRD = 3;
typedef std::array<float, 3> vehicle_odometry__float_array_3;
typedef std::array<float, 4> vehicle_odometry__float_array_4;
/*!
 * @brief This class represents the structure vehicle_odometry defined by the user in the IDL file.
 * @ingroup VEHICLE_ODOMETRY
 */
class vehicle_odometry
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport vehicle_odometry();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~vehicle_odometry();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object vehicle_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_odometry(const vehicle_odometry &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object vehicle_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_odometry(vehicle_odometry &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object vehicle_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_odometry& operator=(const vehicle_odometry &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object vehicle_odometry that will be copied.
     */
    eProsima_user_DllExport vehicle_odometry& operator=(vehicle_odometry &&x);

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
     * @brief This function sets a value in member pose_frame_
     * @param _pose_frame_ New value for member pose_frame_
     */
    eProsima_user_DllExport void pose_frame_(uint8_t _pose_frame_);

    /*!
     * @brief This function returns the value of member pose_frame_
     * @return Value of member pose_frame_
     */
    eProsima_user_DllExport uint8_t pose_frame_() const;

    /*!
     * @brief This function returns a reference to member pose_frame_
     * @return Reference to member pose_frame_
     */
    eProsima_user_DllExport uint8_t& pose_frame_();

    /*!
     * @brief This function copies the value in member position
     * @param _position New value to be copied in member position
     */
    eProsima_user_DllExport void position(const vehicle_odometry__float_array_3 &_position);

    /*!
     * @brief This function moves the value in member position
     * @param _position New value to be moved in member position
     */
    eProsima_user_DllExport void position(vehicle_odometry__float_array_3 &&_position);

    /*!
     * @brief This function returns a constant reference to member position
     * @return Constant reference to member position
     */
    eProsima_user_DllExport const vehicle_odometry__float_array_3& position() const;

    /*!
     * @brief This function returns a reference to member position
     * @return Reference to member position
     */
    eProsima_user_DllExport vehicle_odometry__float_array_3& position();
    /*!
     * @brief This function copies the value in member q
     * @param _q New value to be copied in member q
     */
    eProsima_user_DllExport void q(const vehicle_odometry__float_array_4 &_q);

    /*!
     * @brief This function moves the value in member q
     * @param _q New value to be moved in member q
     */
    eProsima_user_DllExport void q(vehicle_odometry__float_array_4 &&_q);

    /*!
     * @brief This function returns a constant reference to member q
     * @return Constant reference to member q
     */
    eProsima_user_DllExport const vehicle_odometry__float_array_4& q() const;

    /*!
     * @brief This function returns a reference to member q
     * @return Reference to member q
     */
    eProsima_user_DllExport vehicle_odometry__float_array_4& q();
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
     * @brief This function copies the value in member velocity
     * @param _velocity New value to be copied in member velocity
     */
    eProsima_user_DllExport void velocity(const vehicle_odometry__float_array_3 &_velocity);

    /*!
     * @brief This function moves the value in member velocity
     * @param _velocity New value to be moved in member velocity
     */
    eProsima_user_DllExport void velocity(vehicle_odometry__float_array_3 &&_velocity);

    /*!
     * @brief This function returns a constant reference to member velocity
     * @return Constant reference to member velocity
     */
    eProsima_user_DllExport const vehicle_odometry__float_array_3& velocity() const;

    /*!
     * @brief This function returns a reference to member velocity
     * @return Reference to member velocity
     */
    eProsima_user_DllExport vehicle_odometry__float_array_3& velocity();
    /*!
     * @brief This function copies the value in member angular_velocity
     * @param _angular_velocity New value to be copied in member angular_velocity
     */
    eProsima_user_DllExport void angular_velocity(const vehicle_odometry__float_array_3 &_angular_velocity);

    /*!
     * @brief This function moves the value in member angular_velocity
     * @param _angular_velocity New value to be moved in member angular_velocity
     */
    eProsima_user_DllExport void angular_velocity(vehicle_odometry__float_array_3 &&_angular_velocity);

    /*!
     * @brief This function returns a constant reference to member angular_velocity
     * @return Constant reference to member angular_velocity
     */
    eProsima_user_DllExport const vehicle_odometry__float_array_3& angular_velocity() const;

    /*!
     * @brief This function returns a reference to member angular_velocity
     * @return Reference to member angular_velocity
     */
    eProsima_user_DllExport vehicle_odometry__float_array_3& angular_velocity();
    /*!
     * @brief This function copies the value in member position_variance
     * @param _position_variance New value to be copied in member position_variance
     */
    eProsima_user_DllExport void position_variance(const vehicle_odometry__float_array_3 &_position_variance);

    /*!
     * @brief This function moves the value in member position_variance
     * @param _position_variance New value to be moved in member position_variance
     */
    eProsima_user_DllExport void position_variance(vehicle_odometry__float_array_3 &&_position_variance);

    /*!
     * @brief This function returns a constant reference to member position_variance
     * @return Constant reference to member position_variance
     */
    eProsima_user_DllExport const vehicle_odometry__float_array_3& position_variance() const;

    /*!
     * @brief This function returns a reference to member position_variance
     * @return Reference to member position_variance
     */
    eProsima_user_DllExport vehicle_odometry__float_array_3& position_variance();
    /*!
     * @brief This function copies the value in member orientation_variance
     * @param _orientation_variance New value to be copied in member orientation_variance
     */
    eProsima_user_DllExport void orientation_variance(const vehicle_odometry__float_array_3 &_orientation_variance);

    /*!
     * @brief This function moves the value in member orientation_variance
     * @param _orientation_variance New value to be moved in member orientation_variance
     */
    eProsima_user_DllExport void orientation_variance(vehicle_odometry__float_array_3 &&_orientation_variance);

    /*!
     * @brief This function returns a constant reference to member orientation_variance
     * @return Constant reference to member orientation_variance
     */
    eProsima_user_DllExport const vehicle_odometry__float_array_3& orientation_variance() const;

    /*!
     * @brief This function returns a reference to member orientation_variance
     * @return Reference to member orientation_variance
     */
    eProsima_user_DllExport vehicle_odometry__float_array_3& orientation_variance();
    /*!
     * @brief This function copies the value in member velocity_variance
     * @param _velocity_variance New value to be copied in member velocity_variance
     */
    eProsima_user_DllExport void velocity_variance(const vehicle_odometry__float_array_3 &_velocity_variance);

    /*!
     * @brief This function moves the value in member velocity_variance
     * @param _velocity_variance New value to be moved in member velocity_variance
     */
    eProsima_user_DllExport void velocity_variance(vehicle_odometry__float_array_3 &&_velocity_variance);

    /*!
     * @brief This function returns a constant reference to member velocity_variance
     * @return Constant reference to member velocity_variance
     */
    eProsima_user_DllExport const vehicle_odometry__float_array_3& velocity_variance() const;

    /*!
     * @brief This function returns a reference to member velocity_variance
     * @return Reference to member velocity_variance
     */
    eProsima_user_DllExport vehicle_odometry__float_array_3& velocity_variance();
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
     * @brief This function sets a value in member quality_
     * @param _quality_ New value for member quality_
     */
    eProsima_user_DllExport void quality_(uint8_t _quality_);

    /*!
     * @brief This function returns the value of member quality_
     * @return Value of member quality_
     */
    eProsima_user_DllExport uint8_t quality_() const;

    /*!
     * @brief This function returns a reference to member quality_
     * @return Reference to member quality_
     */
    eProsima_user_DllExport uint8_t& quality_();


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
    eProsima_user_DllExport static size_t getCdrSerializedSize(const vehicle_odometry& data, size_t current_alignment = 0);


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
    uint8_t m_pose_frame_;
    vehicle_odometry__float_array_3 m_position;
    vehicle_odometry__float_array_4 m_q;
    uint8_t m_velocity_frame_;
    vehicle_odometry__float_array_3 m_velocity;
    vehicle_odometry__float_array_3 m_angular_velocity;
    vehicle_odometry__float_array_3 m_position_variance;
    vehicle_odometry__float_array_3 m_orientation_variance;
    vehicle_odometry__float_array_3 m_velocity_variance;
    uint8_t m_reset_counter_;
    uint8_t m_quality_;
};

#endif // _VEHICLE_ODOMETRY_H_