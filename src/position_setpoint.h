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
 * @file position_setpoint.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _POSITION_SETPOINT_H_
#define _POSITION_SETPOINT_H_

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
#if defined(position_setpoint_SOURCE)
#define position_setpoint_DllAPI __declspec( dllexport )
#else
#define position_setpoint_DllAPI __declspec( dllimport )
#endif // position_setpoint_SOURCE
#else
#define position_setpoint_DllAPI
#endif
#else
#define position_setpoint_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


const uint8_t position_setpoint__SETPOINT_TYPE_POSITION = 0;
const uint8_t position_setpoint__SETPOINT_TYPE_VELOCITY = 1;
const uint8_t position_setpoint__SETPOINT_TYPE_LOITER = 2;
const uint8_t position_setpoint__SETPOINT_TYPE_TAKEOFF = 3;
const uint8_t position_setpoint__SETPOINT_TYPE_LAND = 4;
const uint8_t position_setpoint__SETPOINT_TYPE_IDLE = 5;
const uint8_t position_setpoint__SETPOINT_TYPE_OFFBOARD = 6;
const uint8_t position_setpoint__SETPOINT_TYPE_FOLLOW_TARGET = 7;
const uint8_t position_setpoint__VELOCITY_FRAME_LOCAL_NED = 1;
const uint8_t position_setpoint__VELOCITY_FRAME_BODY_NED = 8;
/*!
 * @brief This class represents the structure position_setpoint defined by the user in the IDL file.
 * @ingroup POSITION_SETPOINT
 */
class position_setpoint
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport position_setpoint();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~position_setpoint();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object position_setpoint that will be copied.
     */
    eProsima_user_DllExport position_setpoint(const position_setpoint &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object position_setpoint that will be copied.
     */
    eProsima_user_DllExport position_setpoint(position_setpoint &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object position_setpoint that will be copied.
     */
    eProsima_user_DllExport position_setpoint& operator=(const position_setpoint &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object position_setpoint that will be copied.
     */
    eProsima_user_DllExport position_setpoint& operator=(position_setpoint &&x);

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
     * @brief This function sets a value in member valid_
     * @param _valid_ New value for member valid_
     */
    eProsima_user_DllExport void valid_(bool _valid_);

    /*!
     * @brief This function returns the value of member valid_
     * @return Value of member valid_
     */
    eProsima_user_DllExport bool valid_() const;

    /*!
     * @brief This function returns a reference to member valid_
     * @return Reference to member valid_
     */
    eProsima_user_DllExport bool& valid_();

    /*!
     * @brief This function sets a value in member type_
     * @param _type_ New value for member type_
     */
    eProsima_user_DllExport void type_(uint8_t _type_);

    /*!
     * @brief This function returns the value of member type_
     * @return Value of member type_
     */
    eProsima_user_DllExport uint8_t type_() const;

    /*!
     * @brief This function returns a reference to member type_
     * @return Reference to member type_
     */
    eProsima_user_DllExport uint8_t& type_();

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
     * @brief This function sets a value in member position_valid_
     * @param _position_valid_ New value for member position_valid_
     */
    eProsima_user_DllExport void position_valid_(bool _position_valid_);

    /*!
     * @brief This function returns the value of member position_valid_
     * @return Value of member position_valid_
     */
    eProsima_user_DllExport bool position_valid_() const;

    /*!
     * @brief This function returns a reference to member position_valid_
     * @return Reference to member position_valid_
     */
    eProsima_user_DllExport bool& position_valid_();

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
     * @brief This function sets a value in member velocity_valid_
     * @param _velocity_valid_ New value for member velocity_valid_
     */
    eProsima_user_DllExport void velocity_valid_(bool _velocity_valid_);

    /*!
     * @brief This function returns the value of member velocity_valid_
     * @return Value of member velocity_valid_
     */
    eProsima_user_DllExport bool velocity_valid_() const;

    /*!
     * @brief This function returns a reference to member velocity_valid_
     * @return Reference to member velocity_valid_
     */
    eProsima_user_DllExport bool& velocity_valid_();

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
     * @brief This function sets a value in member alt_valid_
     * @param _alt_valid_ New value for member alt_valid_
     */
    eProsima_user_DllExport void alt_valid_(bool _alt_valid_);

    /*!
     * @brief This function returns the value of member alt_valid_
     * @return Value of member alt_valid_
     */
    eProsima_user_DllExport bool alt_valid_() const;

    /*!
     * @brief This function returns a reference to member alt_valid_
     * @return Reference to member alt_valid_
     */
    eProsima_user_DllExport bool& alt_valid_();

    /*!
     * @brief This function sets a value in member lat_
     * @param _lat_ New value for member lat_
     */
    eProsima_user_DllExport void lat_(double _lat_);

    /*!
     * @brief This function returns the value of member lat_
     * @return Value of member lat_
     */
    eProsima_user_DllExport double lat_() const;

    /*!
     * @brief This function returns a reference to member lat_
     * @return Reference to member lat_
     */
    eProsima_user_DllExport double& lat_();

    /*!
     * @brief This function sets a value in member lon_
     * @param _lon_ New value for member lon_
     */
    eProsima_user_DllExport void lon_(double _lon_);

    /*!
     * @brief This function returns the value of member lon_
     * @return Value of member lon_
     */
    eProsima_user_DllExport double lon_() const;

    /*!
     * @brief This function returns a reference to member lon_
     * @return Reference to member lon_
     */
    eProsima_user_DllExport double& lon_();

    /*!
     * @brief This function sets a value in member alt_
     * @param _alt_ New value for member alt_
     */
    eProsima_user_DllExport void alt_(float _alt_);

    /*!
     * @brief This function returns the value of member alt_
     * @return Value of member alt_
     */
    eProsima_user_DllExport float alt_() const;

    /*!
     * @brief This function returns a reference to member alt_
     * @return Reference to member alt_
     */
    eProsima_user_DllExport float& alt_();

    /*!
     * @brief This function sets a value in member yaw_
     * @param _yaw_ New value for member yaw_
     */
    eProsima_user_DllExport void yaw_(float _yaw_);

    /*!
     * @brief This function returns the value of member yaw_
     * @return Value of member yaw_
     */
    eProsima_user_DllExport float yaw_() const;

    /*!
     * @brief This function returns a reference to member yaw_
     * @return Reference to member yaw_
     */
    eProsima_user_DllExport float& yaw_();

    /*!
     * @brief This function sets a value in member yaw_valid_
     * @param _yaw_valid_ New value for member yaw_valid_
     */
    eProsima_user_DllExport void yaw_valid_(bool _yaw_valid_);

    /*!
     * @brief This function returns the value of member yaw_valid_
     * @return Value of member yaw_valid_
     */
    eProsima_user_DllExport bool yaw_valid_() const;

    /*!
     * @brief This function returns a reference to member yaw_valid_
     * @return Reference to member yaw_valid_
     */
    eProsima_user_DllExport bool& yaw_valid_();

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
     * @brief This function sets a value in member yawspeed_valid_
     * @param _yawspeed_valid_ New value for member yawspeed_valid_
     */
    eProsima_user_DllExport void yawspeed_valid_(bool _yawspeed_valid_);

    /*!
     * @brief This function returns the value of member yawspeed_valid_
     * @return Value of member yawspeed_valid_
     */
    eProsima_user_DllExport bool yawspeed_valid_() const;

    /*!
     * @brief This function returns a reference to member yawspeed_valid_
     * @return Reference to member yawspeed_valid_
     */
    eProsima_user_DllExport bool& yawspeed_valid_();

    /*!
     * @brief This function sets a value in member landing_gear_
     * @param _landing_gear_ New value for member landing_gear_
     */
    eProsima_user_DllExport void landing_gear_(uint8_t _landing_gear_);

    /*!
     * @brief This function returns the value of member landing_gear_
     * @return Value of member landing_gear_
     */
    eProsima_user_DllExport uint8_t landing_gear_() const;

    /*!
     * @brief This function returns a reference to member landing_gear_
     * @return Reference to member landing_gear_
     */
    eProsima_user_DllExport uint8_t& landing_gear_();

    /*!
     * @brief This function sets a value in member loiter_radius_
     * @param _loiter_radius_ New value for member loiter_radius_
     */
    eProsima_user_DllExport void loiter_radius_(float _loiter_radius_);

    /*!
     * @brief This function returns the value of member loiter_radius_
     * @return Value of member loiter_radius_
     */
    eProsima_user_DllExport float loiter_radius_() const;

    /*!
     * @brief This function returns a reference to member loiter_radius_
     * @return Reference to member loiter_radius_
     */
    eProsima_user_DllExport float& loiter_radius_();

    /*!
     * @brief This function sets a value in member loiter_direction_
     * @param _loiter_direction_ New value for member loiter_direction_
     */
    eProsima_user_DllExport void loiter_direction_(uint8_t _loiter_direction_);

    /*!
     * @brief This function returns the value of member loiter_direction_
     * @return Value of member loiter_direction_
     */
    eProsima_user_DllExport uint8_t loiter_direction_() const;

    /*!
     * @brief This function returns a reference to member loiter_direction_
     * @return Reference to member loiter_direction_
     */
    eProsima_user_DllExport uint8_t& loiter_direction_();

    /*!
     * @brief This function sets a value in member pitch_min_
     * @param _pitch_min_ New value for member pitch_min_
     */
    eProsima_user_DllExport void pitch_min_(float _pitch_min_);

    /*!
     * @brief This function returns the value of member pitch_min_
     * @return Value of member pitch_min_
     */
    eProsima_user_DllExport float pitch_min_() const;

    /*!
     * @brief This function returns a reference to member pitch_min_
     * @return Reference to member pitch_min_
     */
    eProsima_user_DllExport float& pitch_min_();

    /*!
     * @brief This function sets a value in member a_x_
     * @param _a_x_ New value for member a_x_
     */
    eProsima_user_DllExport void a_x_(float _a_x_);

    /*!
     * @brief This function returns the value of member a_x_
     * @return Value of member a_x_
     */
    eProsima_user_DllExport float a_x_() const;

    /*!
     * @brief This function returns a reference to member a_x_
     * @return Reference to member a_x_
     */
    eProsima_user_DllExport float& a_x_();

    /*!
     * @brief This function sets a value in member a_y_
     * @param _a_y_ New value for member a_y_
     */
    eProsima_user_DllExport void a_y_(float _a_y_);

    /*!
     * @brief This function returns the value of member a_y_
     * @return Value of member a_y_
     */
    eProsima_user_DllExport float a_y_() const;

    /*!
     * @brief This function returns a reference to member a_y_
     * @return Reference to member a_y_
     */
    eProsima_user_DllExport float& a_y_();

    /*!
     * @brief This function sets a value in member a_z_
     * @param _a_z_ New value for member a_z_
     */
    eProsima_user_DllExport void a_z_(float _a_z_);

    /*!
     * @brief This function returns the value of member a_z_
     * @return Value of member a_z_
     */
    eProsima_user_DllExport float a_z_() const;

    /*!
     * @brief This function returns a reference to member a_z_
     * @return Reference to member a_z_
     */
    eProsima_user_DllExport float& a_z_();

    /*!
     * @brief This function sets a value in member acceleration_valid_
     * @param _acceleration_valid_ New value for member acceleration_valid_
     */
    eProsima_user_DllExport void acceleration_valid_(bool _acceleration_valid_);

    /*!
     * @brief This function returns the value of member acceleration_valid_
     * @return Value of member acceleration_valid_
     */
    eProsima_user_DllExport bool acceleration_valid_() const;

    /*!
     * @brief This function returns a reference to member acceleration_valid_
     * @return Reference to member acceleration_valid_
     */
    eProsima_user_DllExport bool& acceleration_valid_();

    /*!
     * @brief This function sets a value in member acceleration_is_force_
     * @param _acceleration_is_force_ New value for member acceleration_is_force_
     */
    eProsima_user_DllExport void acceleration_is_force_(bool _acceleration_is_force_);

    /*!
     * @brief This function returns the value of member acceleration_is_force_
     * @return Value of member acceleration_is_force_
     */
    eProsima_user_DllExport bool acceleration_is_force_() const;

    /*!
     * @brief This function returns a reference to member acceleration_is_force_
     * @return Reference to member acceleration_is_force_
     */
    eProsima_user_DllExport bool& acceleration_is_force_();

    /*!
     * @brief This function sets a value in member acceptance_radius_
     * @param _acceptance_radius_ New value for member acceptance_radius_
     */
    eProsima_user_DllExport void acceptance_radius_(float _acceptance_radius_);

    /*!
     * @brief This function returns the value of member acceptance_radius_
     * @return Value of member acceptance_radius_
     */
    eProsima_user_DllExport float acceptance_radius_() const;

    /*!
     * @brief This function returns a reference to member acceptance_radius_
     * @return Reference to member acceptance_radius_
     */
    eProsima_user_DllExport float& acceptance_radius_();

    /*!
     * @brief This function sets a value in member cruising_speed_
     * @param _cruising_speed_ New value for member cruising_speed_
     */
    eProsima_user_DllExport void cruising_speed_(float _cruising_speed_);

    /*!
     * @brief This function returns the value of member cruising_speed_
     * @return Value of member cruising_speed_
     */
    eProsima_user_DllExport float cruising_speed_() const;

    /*!
     * @brief This function returns a reference to member cruising_speed_
     * @return Reference to member cruising_speed_
     */
    eProsima_user_DllExport float& cruising_speed_();

    /*!
     * @brief This function sets a value in member cruising_throttle_
     * @param _cruising_throttle_ New value for member cruising_throttle_
     */
    eProsima_user_DllExport void cruising_throttle_(float _cruising_throttle_);

    /*!
     * @brief This function returns the value of member cruising_throttle_
     * @return Value of member cruising_throttle_
     */
    eProsima_user_DllExport float cruising_throttle_() const;

    /*!
     * @brief This function returns a reference to member cruising_throttle_
     * @return Reference to member cruising_throttle_
     */
    eProsima_user_DllExport float& cruising_throttle_();

    /*!
     * @brief This function sets a value in member disable_weather_vane_
     * @param _disable_weather_vane_ New value for member disable_weather_vane_
     */
    eProsima_user_DllExport void disable_weather_vane_(bool _disable_weather_vane_);

    /*!
     * @brief This function returns the value of member disable_weather_vane_
     * @return Value of member disable_weather_vane_
     */
    eProsima_user_DllExport bool disable_weather_vane_() const;

    /*!
     * @brief This function returns a reference to member disable_weather_vane_
     * @return Reference to member disable_weather_vane_
     */
    eProsima_user_DllExport bool& disable_weather_vane_();


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
    eProsima_user_DllExport static size_t getCdrSerializedSize(const position_setpoint& data, size_t current_alignment = 0);


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
    bool m_valid_;
    uint8_t m_type_;
    float m_x_;
    float m_y_;
    float m_z_;
    bool m_position_valid_;
    float m_vx_;
    float m_vy_;
    float m_vz_;
    bool m_velocity_valid_;
    uint8_t m_velocity_frame_;
    bool m_alt_valid_;
    double m_lat_;
    double m_lon_;
    float m_alt_;
    float m_yaw_;
    bool m_yaw_valid_;
    float m_yawspeed_;
    bool m_yawspeed_valid_;
    uint8_t m_landing_gear_;
    float m_loiter_radius_;
    uint8_t m_loiter_direction_;
    float m_pitch_min_;
    float m_a_x_;
    float m_a_y_;
    float m_a_z_;
    bool m_acceleration_valid_;
    bool m_acceleration_is_force_;
    float m_acceptance_radius_;
    float m_cruising_speed_;
    float m_cruising_throttle_;
    bool m_disable_weather_vane_;
};

#endif // _POSITION_SETPOINT_H_