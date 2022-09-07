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
 * @file vehicle_command.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _VEHICLE_COMMAND_H_
#define _VEHICLE_COMMAND_H_

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
#if defined(vehicle_command_SOURCE)
#define vehicle_command_DllAPI __declspec( dllexport )
#else
#define vehicle_command_DllAPI __declspec( dllimport )
#endif // vehicle_command_SOURCE
#else
#define vehicle_command_DllAPI
#endif
#else
#define vehicle_command_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


const uint32_t vehicle_command__VEHICLE_CMD_PX4_INTERNAL_START = 65537;
const uint32_t vehicle_command__VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN = 100000;
const uint16_t vehicle_command__VEHICLE_CMD_CUSTOM_0 = 0;
const uint16_t vehicle_command__VEHICLE_CMD_CUSTOM_1 = 1;
const uint16_t vehicle_command__VEHICLE_CMD_CUSTOM_2 = 2;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_WAYPOINT = 16;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_LOITER_UNLIM = 17;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_LOITER_TURNS = 18;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_LOITER_TIME = 19;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_RETURN_TO_LAUNCH = 20;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_LAND = 21;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_TAKEOFF = 22;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_PRECLAND = 23;
const uint16_t vehicle_command__VEHICLE_CMD_DO_ORBIT = 34;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_ROI = 80;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_PATHPLANNING = 81;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_VTOL_TAKEOFF = 84;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_VTOL_LAND = 85;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_GUIDED_LIMITS = 90;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_GUIDED_MASTER = 91;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_DELAY = 93;
const uint16_t vehicle_command__VEHICLE_CMD_NAV_LAST = 95;
const uint16_t vehicle_command__VEHICLE_CMD_CONDITION_DELAY = 112;
const uint16_t vehicle_command__VEHICLE_CMD_CONDITION_CHANGE_ALT = 113;
const uint16_t vehicle_command__VEHICLE_CMD_CONDITION_DISTANCE = 114;
const uint16_t vehicle_command__VEHICLE_CMD_CONDITION_YAW = 115;
const uint16_t vehicle_command__VEHICLE_CMD_CONDITION_LAST = 159;
const uint16_t vehicle_command__VEHICLE_CMD_CONDITION_GATE = 4501;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_MODE = 176;
const uint16_t vehicle_command__VEHICLE_CMD_DO_JUMP = 177;
const uint16_t vehicle_command__VEHICLE_CMD_DO_CHANGE_SPEED = 178;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_HOME = 179;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_PARAMETER = 180;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_RELAY = 181;
const uint16_t vehicle_command__VEHICLE_CMD_DO_REPEAT_RELAY = 182;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_SERVO = 183;
const uint16_t vehicle_command__VEHICLE_CMD_DO_REPEAT_SERVO = 184;
const uint16_t vehicle_command__VEHICLE_CMD_DO_FLIGHTTERMINATION = 185;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_ACTUATOR = 187;
const uint16_t vehicle_command__VEHICLE_CMD_DO_LAND_START = 189;
const uint16_t vehicle_command__VEHICLE_CMD_DO_GO_AROUND = 191;
const uint16_t vehicle_command__VEHICLE_CMD_DO_REPOSITION = 192;
const uint16_t vehicle_command__VEHICLE_CMD_DO_PAUSE_CONTINUE = 193;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_ROI_LOCATION = 195;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET = 196;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_ROI_NONE = 197;
const uint16_t vehicle_command__VEHICLE_CMD_DO_CONTROL_VIDEO = 200;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_ROI = 201;
const uint16_t vehicle_command__VEHICLE_CMD_DO_DIGICAM_CONTROL = 203;
const uint16_t vehicle_command__VEHICLE_CMD_DO_MOUNT_CONFIGURE = 204;
const uint16_t vehicle_command__VEHICLE_CMD_DO_MOUNT_CONTROL = 205;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST = 206;
const uint16_t vehicle_command__VEHICLE_CMD_DO_FENCE_ENABLE = 207;
const uint16_t vehicle_command__VEHICLE_CMD_DO_PARACHUTE = 208;
const uint16_t vehicle_command__VEHICLE_CMD_DO_MOTOR_TEST = 209;
const uint16_t vehicle_command__VEHICLE_CMD_DO_INVERTED_FLIGHT = 210;
const uint16_t vehicle_command__VEHICLE_CMD_DO_GRIPPER = 211;
const uint16_t vehicle_command__VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL = 214;
const uint16_t vehicle_command__VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT = 220;
const uint16_t vehicle_command__VEHICLE_CMD_DO_GUIDED_MASTER = 221;
const uint16_t vehicle_command__VEHICLE_CMD_DO_GUIDED_LIMITS = 222;
const uint16_t vehicle_command__VEHICLE_CMD_DO_LAST = 240;
const uint16_t vehicle_command__VEHICLE_CMD_PREFLIGHT_CALIBRATION = 241;
const uint16_t vehicle_command__PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION = 3;
const uint16_t vehicle_command__VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS = 242;
const uint16_t vehicle_command__VEHICLE_CMD_PREFLIGHT_UAVCAN = 243;
const uint16_t vehicle_command__VEHICLE_CMD_PREFLIGHT_STORAGE = 245;
const uint16_t vehicle_command__VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN = 246;
const uint16_t vehicle_command__VEHICLE_CMD_OBLIQUE_SURVEY = 260;
const uint16_t vehicle_command__VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION = 283;
const uint16_t vehicle_command__VEHICLE_CMD_MISSION_START = 300;
const uint16_t vehicle_command__VEHICLE_CMD_ACTUATOR_TEST = 310;
const uint16_t vehicle_command__VEHICLE_CMD_CONFIGURE_ACTUATOR = 311;
const uint16_t vehicle_command__VEHICLE_CMD_COMPONENT_ARM_DISARM = 400;
const uint16_t vehicle_command__VEHICLE_CMD_RUN_PREARM_CHECKS = 401;
const uint16_t vehicle_command__VEHICLE_CMD_INJECT_FAILURE = 420;
const uint16_t vehicle_command__VEHICLE_CMD_START_RX_PAIR = 500;
const uint16_t vehicle_command__VEHICLE_CMD_REQUEST_MESSAGE = 512;
const uint16_t vehicle_command__VEHICLE_CMD_SET_CAMERA_MODE = 530;
const uint16_t vehicle_command__VEHICLE_CMD_SET_CAMERA_ZOOM = 531;
const uint16_t vehicle_command__VEHICLE_CMD_SET_CAMERA_FOCUS = 532;
const uint16_t vehicle_command__VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW = 1000;
const uint16_t vehicle_command__VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE = 1001;
const uint16_t vehicle_command__VEHICLE_CMD_IMAGE_START_CAPTURE = 2000;
const uint16_t vehicle_command__VEHICLE_CMD_DO_TRIGGER_CONTROL = 2003;
const uint16_t vehicle_command__VEHICLE_CMD_VIDEO_START_CAPTURE = 2500;
const uint16_t vehicle_command__VEHICLE_CMD_VIDEO_STOP_CAPTURE = 2501;
const uint16_t vehicle_command__VEHICLE_CMD_LOGGING_START = 2510;
const uint16_t vehicle_command__VEHICLE_CMD_LOGGING_STOP = 2511;
const uint16_t vehicle_command__VEHICLE_CMD_CONTROL_HIGH_LATENCY = 2600;
const uint16_t vehicle_command__VEHICLE_CMD_DO_VTOL_TRANSITION = 3000;
const uint16_t vehicle_command__VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST = 3001;
const uint16_t vehicle_command__VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY = 30001;
const uint16_t vehicle_command__VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY = 30002;
const uint16_t vehicle_command__VEHICLE_CMD_FIXED_MAG_CAL_YAW = 42006;
const uint16_t vehicle_command__VEHICLE_CMD_DO_WINCH = 42600;
const uint8_t vehicle_command__VEHICLE_MOUNT_MODE_RETRACT = 0;
const uint8_t vehicle_command__VEHICLE_MOUNT_MODE_NEUTRAL = 1;
const uint8_t vehicle_command__VEHICLE_MOUNT_MODE_MAVLINK_TARGETING = 2;
const uint8_t vehicle_command__VEHICLE_MOUNT_MODE_RC_TARGETING = 3;
const uint8_t vehicle_command__VEHICLE_MOUNT_MODE_GPS_POINT = 4;
const uint8_t vehicle_command__VEHICLE_MOUNT_MODE_ENUM_END = 5;
const uint8_t vehicle_command__VEHICLE_ROI_NONE = 0;
const uint8_t vehicle_command__VEHICLE_ROI_WPNEXT = 1;
const uint8_t vehicle_command__VEHICLE_ROI_WPINDEX = 2;
const uint8_t vehicle_command__VEHICLE_ROI_LOCATION = 3;
const uint8_t vehicle_command__VEHICLE_ROI_TARGET = 4;
const uint8_t vehicle_command__VEHICLE_ROI_ENUM_END = 5;
const uint8_t vehicle_command__VEHICLE_CAMERA_ZOOM_TYPE_STEP = 0;
const uint8_t vehicle_command__VEHICLE_CAMERA_ZOOM_TYPE_CONTINUOUS = 1;
const uint8_t vehicle_command__VEHICLE_CAMERA_ZOOM_TYPE_RANGE = 2;
const uint8_t vehicle_command__VEHICLE_CAMERA_ZOOM_TYPE_FOCAL_LENGTH = 3;
const uint8_t vehicle_command__PARACHUTE_ACTION_DISABLE = 0;
const uint8_t vehicle_command__PARACHUTE_ACTION_ENABLE = 1;
const uint8_t vehicle_command__PARACHUTE_ACTION_RELEASE = 2;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_GYRO = 0;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_ACCEL = 1;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_MAG = 2;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_BARO = 3;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_GPS = 4;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_OPTICAL_FLOW = 5;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_VIO = 6;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_DISTANCE_SENSOR = 7;
const uint8_t vehicle_command__FAILURE_UNIT_SENSOR_AIRSPEED = 8;
const uint8_t vehicle_command__FAILURE_UNIT_SYSTEM_BATTERY = 100;
const uint8_t vehicle_command__FAILURE_UNIT_SYSTEM_MOTOR = 101;
const uint8_t vehicle_command__FAILURE_UNIT_SYSTEM_SERVO = 102;
const uint8_t vehicle_command__FAILURE_UNIT_SYSTEM_AVOIDANCE = 103;
const uint8_t vehicle_command__FAILURE_UNIT_SYSTEM_RC_SIGNAL = 104;
const uint8_t vehicle_command__FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL = 105;
const uint8_t vehicle_command__FAILURE_TYPE_OK = 0;
const uint8_t vehicle_command__FAILURE_TYPE_OFF = 1;
const uint8_t vehicle_command__FAILURE_TYPE_STUCK = 2;
const uint8_t vehicle_command__FAILURE_TYPE_GARBAGE = 3;
const uint8_t vehicle_command__FAILURE_TYPE_WRONG = 4;
const uint8_t vehicle_command__FAILURE_TYPE_SLOW = 5;
const uint8_t vehicle_command__FAILURE_TYPE_DELAYED = 6;
const uint8_t vehicle_command__FAILURE_TYPE_INTERMITTENT = 7;
const uint8_t vehicle_command__SPEED_TYPE_AIRSPEED = 0;
const uint8_t vehicle_command__SPEED_TYPE_GROUNDSPEED = 1;
const uint8_t vehicle_command__SPEED_TYPE_CLIMB_SPEED = 2;
const uint8_t vehicle_command__SPEED_TYPE_DESCEND_SPEED = 3;
const uint8_t vehicle_command__ARMING_ACTION_DISARM = 0;
const uint8_t vehicle_command__ARMING_ACTION_ARM = 1;
const uint8_t vehicle_command__GRIPPER_ACTION_RELEASE = 0;
const uint8_t vehicle_command__GRIPPER_ACTION_GRAB = 1;
const uint8_t vehicle_command__ORB_QUEUE_LENGTH = 8;
/*!
 * @brief This class represents the structure vehicle_command defined by the user in the IDL file.
 * @ingroup VEHICLE_COMMAND
 */
class vehicle_command
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport vehicle_command();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~vehicle_command();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object vehicle_command that will be copied.
     */
    eProsima_user_DllExport vehicle_command(const vehicle_command &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object vehicle_command that will be copied.
     */
    eProsima_user_DllExport vehicle_command(vehicle_command &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object vehicle_command that will be copied.
     */
    eProsima_user_DllExport vehicle_command& operator=(const vehicle_command &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object vehicle_command that will be copied.
     */
    eProsima_user_DllExport vehicle_command& operator=(vehicle_command &&x);

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
     * @brief This function sets a value in member param1_
     * @param _param1_ New value for member param1_
     */
    eProsima_user_DllExport void param1_(float _param1_);

    /*!
     * @brief This function returns the value of member param1_
     * @return Value of member param1_
     */
    eProsima_user_DllExport float param1_() const;

    /*!
     * @brief This function returns a reference to member param1_
     * @return Reference to member param1_
     */
    eProsima_user_DllExport float& param1_();

    /*!
     * @brief This function sets a value in member param2_
     * @param _param2_ New value for member param2_
     */
    eProsima_user_DllExport void param2_(float _param2_);

    /*!
     * @brief This function returns the value of member param2_
     * @return Value of member param2_
     */
    eProsima_user_DllExport float param2_() const;

    /*!
     * @brief This function returns a reference to member param2_
     * @return Reference to member param2_
     */
    eProsima_user_DllExport float& param2_();

    /*!
     * @brief This function sets a value in member param3_
     * @param _param3_ New value for member param3_
     */
    eProsima_user_DllExport void param3_(float _param3_);

    /*!
     * @brief This function returns the value of member param3_
     * @return Value of member param3_
     */
    eProsima_user_DllExport float param3_() const;

    /*!
     * @brief This function returns a reference to member param3_
     * @return Reference to member param3_
     */
    eProsima_user_DllExport float& param3_();

    /*!
     * @brief This function sets a value in member param4_
     * @param _param4_ New value for member param4_
     */
    eProsima_user_DllExport void param4_(float _param4_);

    /*!
     * @brief This function returns the value of member param4_
     * @return Value of member param4_
     */
    eProsima_user_DllExport float param4_() const;

    /*!
     * @brief This function returns a reference to member param4_
     * @return Reference to member param4_
     */
    eProsima_user_DllExport float& param4_();

    /*!
     * @brief This function sets a value in member param5_
     * @param _param5_ New value for member param5_
     */
    eProsima_user_DllExport void param5_(double _param5_);

    /*!
     * @brief This function returns the value of member param5_
     * @return Value of member param5_
     */
    eProsima_user_DllExport double param5_() const;

    /*!
     * @brief This function returns a reference to member param5_
     * @return Reference to member param5_
     */
    eProsima_user_DllExport double& param5_();

    /*!
     * @brief This function sets a value in member param6_
     * @param _param6_ New value for member param6_
     */
    eProsima_user_DllExport void param6_(double _param6_);

    /*!
     * @brief This function returns the value of member param6_
     * @return Value of member param6_
     */
    eProsima_user_DllExport double param6_() const;

    /*!
     * @brief This function returns a reference to member param6_
     * @return Reference to member param6_
     */
    eProsima_user_DllExport double& param6_();

    /*!
     * @brief This function sets a value in member param7_
     * @param _param7_ New value for member param7_
     */
    eProsima_user_DllExport void param7_(float _param7_);

    /*!
     * @brief This function returns the value of member param7_
     * @return Value of member param7_
     */
    eProsima_user_DllExport float param7_() const;

    /*!
     * @brief This function returns a reference to member param7_
     * @return Reference to member param7_
     */
    eProsima_user_DllExport float& param7_();

    /*!
     * @brief This function sets a value in member command_
     * @param _command_ New value for member command_
     */
    eProsima_user_DllExport void command_(uint32_t _command_);

    /*!
     * @brief This function returns the value of member command_
     * @return Value of member command_
     */
    eProsima_user_DllExport uint32_t command_() const;

    /*!
     * @brief This function returns a reference to member command_
     * @return Reference to member command_
     */
    eProsima_user_DllExport uint32_t& command_();

    /*!
     * @brief This function sets a value in member target_system_
     * @param _target_system_ New value for member target_system_
     */
    eProsima_user_DllExport void target_system_(uint8_t _target_system_);

    /*!
     * @brief This function returns the value of member target_system_
     * @return Value of member target_system_
     */
    eProsima_user_DllExport uint8_t target_system_() const;

    /*!
     * @brief This function returns a reference to member target_system_
     * @return Reference to member target_system_
     */
    eProsima_user_DllExport uint8_t& target_system_();

    /*!
     * @brief This function sets a value in member target_component_
     * @param _target_component_ New value for member target_component_
     */
    eProsima_user_DllExport void target_component_(uint8_t _target_component_);

    /*!
     * @brief This function returns the value of member target_component_
     * @return Value of member target_component_
     */
    eProsima_user_DllExport uint8_t target_component_() const;

    /*!
     * @brief This function returns a reference to member target_component_
     * @return Reference to member target_component_
     */
    eProsima_user_DllExport uint8_t& target_component_();

    /*!
     * @brief This function sets a value in member source_system_
     * @param _source_system_ New value for member source_system_
     */
    eProsima_user_DllExport void source_system_(uint8_t _source_system_);

    /*!
     * @brief This function returns the value of member source_system_
     * @return Value of member source_system_
     */
    eProsima_user_DllExport uint8_t source_system_() const;

    /*!
     * @brief This function returns a reference to member source_system_
     * @return Reference to member source_system_
     */
    eProsima_user_DllExport uint8_t& source_system_();

    /*!
     * @brief This function sets a value in member source_component_
     * @param _source_component_ New value for member source_component_
     */
    eProsima_user_DllExport void source_component_(uint8_t _source_component_);

    /*!
     * @brief This function returns the value of member source_component_
     * @return Value of member source_component_
     */
    eProsima_user_DllExport uint8_t source_component_() const;

    /*!
     * @brief This function returns a reference to member source_component_
     * @return Reference to member source_component_
     */
    eProsima_user_DllExport uint8_t& source_component_();

    /*!
     * @brief This function sets a value in member confirmation_
     * @param _confirmation_ New value for member confirmation_
     */
    eProsima_user_DllExport void confirmation_(uint8_t _confirmation_);

    /*!
     * @brief This function returns the value of member confirmation_
     * @return Value of member confirmation_
     */
    eProsima_user_DllExport uint8_t confirmation_() const;

    /*!
     * @brief This function returns a reference to member confirmation_
     * @return Reference to member confirmation_
     */
    eProsima_user_DllExport uint8_t& confirmation_();

    /*!
     * @brief This function sets a value in member from_external_
     * @param _from_external_ New value for member from_external_
     */
    eProsima_user_DllExport void from_external_(bool _from_external_);

    /*!
     * @brief This function returns the value of member from_external_
     * @return Value of member from_external_
     */
    eProsima_user_DllExport bool from_external_() const;

    /*!
     * @brief This function returns a reference to member from_external_
     * @return Reference to member from_external_
     */
    eProsima_user_DllExport bool& from_external_();


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
    eProsima_user_DllExport static size_t getCdrSerializedSize(const vehicle_command& data, size_t current_alignment = 0);


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
    float m_param1_;
    float m_param2_;
    float m_param3_;
    float m_param4_;
    double m_param5_;
    double m_param6_;
    float m_param7_;
    uint32_t m_command_;
    uint8_t m_target_system_;
    uint8_t m_target_component_;
    uint8_t m_source_system_;
    uint8_t m_source_component_;
    uint8_t m_confirmation_;
    bool m_from_external_;
};

#endif // _VEHICLE_COMMAND_H_