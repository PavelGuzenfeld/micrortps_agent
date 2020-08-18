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
 * @file camera_capture.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _CAMERA_CAPTURE_H_
#define _CAMERA_CAPTURE_H_

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
#if defined(camera_capture_SOURCE)
#define camera_capture_DllAPI __declspec( dllexport )
#else
#define camera_capture_DllAPI __declspec( dllimport )
#endif // camera_capture_SOURCE
#else
#define camera_capture_DllAPI
#endif
#else
#define camera_capture_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


typedef std::array<float, 4> camera_capture__float_array_4;
/*!
 * @brief This class represents the structure camera_capture defined by the user in the IDL file.
 * @ingroup CAMERA_CAPTURE
 */
class camera_capture
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport camera_capture();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~camera_capture();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object camera_capture that will be copied.
     */
    eProsima_user_DllExport camera_capture(const camera_capture &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object camera_capture that will be copied.
     */
    eProsima_user_DllExport camera_capture(camera_capture &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object camera_capture that will be copied.
     */
    eProsima_user_DllExport camera_capture& operator=(const camera_capture &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object camera_capture that will be copied.
     */
    eProsima_user_DllExport camera_capture& operator=(camera_capture &&x);

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
     * @brief This function sets a value in member timestamp_utc_
     * @param _timestamp_utc_ New value for member timestamp_utc_
     */
    eProsima_user_DllExport void timestamp_utc_(uint64_t _timestamp_utc_);

    /*!
     * @brief This function returns the value of member timestamp_utc_
     * @return Value of member timestamp_utc_
     */
    eProsima_user_DllExport uint64_t timestamp_utc_() const;

    /*!
     * @brief This function returns a reference to member timestamp_utc_
     * @return Reference to member timestamp_utc_
     */
    eProsima_user_DllExport uint64_t& timestamp_utc_();

    /*!
     * @brief This function sets a value in member seq_
     * @param _seq_ New value for member seq_
     */
    eProsima_user_DllExport void seq_(uint32_t _seq_);

    /*!
     * @brief This function returns the value of member seq_
     * @return Value of member seq_
     */
    eProsima_user_DllExport uint32_t seq_() const;

    /*!
     * @brief This function returns a reference to member seq_
     * @return Reference to member seq_
     */
    eProsima_user_DllExport uint32_t& seq_();

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
     * @brief This function sets a value in member ground_distance_
     * @param _ground_distance_ New value for member ground_distance_
     */
    eProsima_user_DllExport void ground_distance_(float _ground_distance_);

    /*!
     * @brief This function returns the value of member ground_distance_
     * @return Value of member ground_distance_
     */
    eProsima_user_DllExport float ground_distance_() const;

    /*!
     * @brief This function returns a reference to member ground_distance_
     * @return Reference to member ground_distance_
     */
    eProsima_user_DllExport float& ground_distance_();

    /*!
     * @brief This function copies the value in member q
     * @param _q New value to be copied in member q
     */
    eProsima_user_DllExport void q(const camera_capture__float_array_4 &_q);

    /*!
     * @brief This function moves the value in member q
     * @param _q New value to be moved in member q
     */
    eProsima_user_DllExport void q(camera_capture__float_array_4 &&_q);

    /*!
     * @brief This function returns a constant reference to member q
     * @return Constant reference to member q
     */
    eProsima_user_DllExport const camera_capture__float_array_4& q() const;

    /*!
     * @brief This function returns a reference to member q
     * @return Reference to member q
     */
    eProsima_user_DllExport camera_capture__float_array_4& q();
    /*!
     * @brief This function sets a value in member result_
     * @param _result_ New value for member result_
     */
    eProsima_user_DllExport void result_(uint8_t _result_);

    /*!
     * @brief This function returns the value of member result_
     * @return Value of member result_
     */
    eProsima_user_DllExport uint8_t result_() const;

    /*!
     * @brief This function returns a reference to member result_
     * @return Reference to member result_
     */
    eProsima_user_DllExport uint8_t& result_();


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
    eProsima_user_DllExport static size_t getCdrSerializedSize(const camera_capture& data, size_t current_alignment = 0);


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
    uint64_t m_timestamp_utc_;
    uint32_t m_seq_;
    double m_lat_;
    double m_lon_;
    float m_alt_;
    float m_ground_distance_;
    camera_capture__float_array_4 m_q;
    uint8_t m_result_;
};

#endif // _CAMERA_CAPTURE_H_