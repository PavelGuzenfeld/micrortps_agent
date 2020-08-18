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
 * @file position_setpoint_triplet.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _POSITION_SETPOINT_TRIPLET_H_
#define _POSITION_SETPOINT_TRIPLET_H_

// TODO Poner en el contexto.
#include "position_setpoint.h"

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
#if defined(position_setpoint_triplet_SOURCE)
#define position_setpoint_triplet_DllAPI __declspec( dllexport )
#else
#define position_setpoint_triplet_DllAPI __declspec( dllimport )
#endif // position_setpoint_triplet_SOURCE
#else
#define position_setpoint_triplet_DllAPI
#endif
#else
#define position_setpoint_triplet_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}












/*!
 * @brief This class represents the structure position_setpoint_triplet defined by the user in the IDL file.
 * @ingroup POSITION_SETPOINT_TRIPLET
 */
class position_setpoint_triplet
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport position_setpoint_triplet();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~position_setpoint_triplet();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object position_setpoint_triplet that will be copied.
     */
    eProsima_user_DllExport position_setpoint_triplet(const position_setpoint_triplet &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object position_setpoint_triplet that will be copied.
     */
    eProsima_user_DllExport position_setpoint_triplet(position_setpoint_triplet &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object position_setpoint_triplet that will be copied.
     */
    eProsima_user_DllExport position_setpoint_triplet& operator=(const position_setpoint_triplet &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object position_setpoint_triplet that will be copied.
     */
    eProsima_user_DllExport position_setpoint_triplet& operator=(position_setpoint_triplet &&x);

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
     * @brief This function copies the value in member previous_
     * @param _previous_ New value to be copied in member previous_
     */
    eProsima_user_DllExport void previous_(const position_setpoint &_previous_);

    /*!
     * @brief This function moves the value in member previous_
     * @param _previous_ New value to be moved in member previous_
     */
    eProsima_user_DllExport void previous_(position_setpoint &&_previous_);

    /*!
     * @brief This function returns a constant reference to member previous_
     * @return Constant reference to member previous_
     */
    eProsima_user_DllExport const position_setpoint& previous_() const;

    /*!
     * @brief This function returns a reference to member previous_
     * @return Reference to member previous_
     */
    eProsima_user_DllExport position_setpoint& previous_();
    /*!
     * @brief This function copies the value in member current_
     * @param _current_ New value to be copied in member current_
     */
    eProsima_user_DllExport void current_(const position_setpoint &_current_);

    /*!
     * @brief This function moves the value in member current_
     * @param _current_ New value to be moved in member current_
     */
    eProsima_user_DllExport void current_(position_setpoint &&_current_);

    /*!
     * @brief This function returns a constant reference to member current_
     * @return Constant reference to member current_
     */
    eProsima_user_DllExport const position_setpoint& current_() const;

    /*!
     * @brief This function returns a reference to member current_
     * @return Reference to member current_
     */
    eProsima_user_DllExport position_setpoint& current_();
    /*!
     * @brief This function copies the value in member next_
     * @param _next_ New value to be copied in member next_
     */
    eProsima_user_DllExport void next_(const position_setpoint &_next_);

    /*!
     * @brief This function moves the value in member next_
     * @param _next_ New value to be moved in member next_
     */
    eProsima_user_DllExport void next_(position_setpoint &&_next_);

    /*!
     * @brief This function returns a constant reference to member next_
     * @return Constant reference to member next_
     */
    eProsima_user_DllExport const position_setpoint& next_() const;

    /*!
     * @brief This function returns a reference to member next_
     * @return Reference to member next_
     */
    eProsima_user_DllExport position_setpoint& next_();

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
    eProsima_user_DllExport static size_t getCdrSerializedSize(const position_setpoint_triplet& data, size_t current_alignment = 0);


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
    position_setpoint m_previous_;
    position_setpoint m_current_;
    position_setpoint m_next_;
};

#endif // _POSITION_SETPOINT_TRIPLET_H_