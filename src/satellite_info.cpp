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
 * @file satellite_info.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "satellite_info.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>



satellite_info::satellite_info()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@23d2a7e8
    m_timestamp_ = 0;
    // m_count_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7a9273a8
    m_count_ = 0;
    // m_svid com.eprosima.idl.parser.typecode.AliasTypeCode@26a7b76d
    memset(&m_svid, 0, (20) * 1);
    // m_used com.eprosima.idl.parser.typecode.AliasTypeCode@26a7b76d
    memset(&m_used, 0, (20) * 1);
    // m_elevation com.eprosima.idl.parser.typecode.AliasTypeCode@26a7b76d
    memset(&m_elevation, 0, (20) * 1);
    // m_azimuth com.eprosima.idl.parser.typecode.AliasTypeCode@26a7b76d
    memset(&m_azimuth, 0, (20) * 1);
    // m_snr com.eprosima.idl.parser.typecode.AliasTypeCode@26a7b76d
    memset(&m_snr, 0, (20) * 1);
    // m_prn com.eprosima.idl.parser.typecode.AliasTypeCode@26a7b76d
    memset(&m_prn, 0, (20) * 1);

}

satellite_info::~satellite_info()
{








}

satellite_info::satellite_info(const satellite_info &x)
{
    m_timestamp_ = x.m_timestamp_;
    m_count_ = x.m_count_;
    m_svid = x.m_svid;
    m_used = x.m_used;
    m_elevation = x.m_elevation;
    m_azimuth = x.m_azimuth;
    m_snr = x.m_snr;
    m_prn = x.m_prn;
}

satellite_info::satellite_info(satellite_info &&x)
{
    m_timestamp_ = x.m_timestamp_;
    m_count_ = x.m_count_;
    m_svid = std::move(x.m_svid);
    m_used = std::move(x.m_used);
    m_elevation = std::move(x.m_elevation);
    m_azimuth = std::move(x.m_azimuth);
    m_snr = std::move(x.m_snr);
    m_prn = std::move(x.m_prn);
}

satellite_info& satellite_info::operator=(const satellite_info &x)
{

    m_timestamp_ = x.m_timestamp_;
    m_count_ = x.m_count_;
    m_svid = x.m_svid;
    m_used = x.m_used;
    m_elevation = x.m_elevation;
    m_azimuth = x.m_azimuth;
    m_snr = x.m_snr;
    m_prn = x.m_prn;

    return *this;
}

satellite_info& satellite_info::operator=(satellite_info &&x)
{

    m_timestamp_ = x.m_timestamp_;
    m_count_ = x.m_count_;
    m_svid = std::move(x.m_svid);
    m_used = std::move(x.m_used);
    m_elevation = std::move(x.m_elevation);
    m_azimuth = std::move(x.m_azimuth);
    m_snr = std::move(x.m_snr);
    m_prn = std::move(x.m_prn);

    return *this;
}

size_t satellite_info::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t satellite_info::getCdrSerializedSize(const satellite_info& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    if ((20) > 0)
    {
        current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((20) > 0)
    {
        current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((20) > 0)
    {
        current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((20) > 0)
    {
        current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((20) > 0)
    {
        current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((20) > 0)
    {
        current_alignment += ((20) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }


    return current_alignment - initial_alignment;
}

void satellite_info::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp_;
    scdr << m_count_;
    scdr << m_svid;

    scdr << m_used;

    scdr << m_elevation;

    scdr << m_azimuth;

    scdr << m_snr;

    scdr << m_prn;

}

void satellite_info::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_count_;
    dcdr >> m_svid;

    dcdr >> m_used;

    dcdr >> m_elevation;

    dcdr >> m_azimuth;

    dcdr >> m_snr;

    dcdr >> m_prn;

}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void satellite_info::timestamp_(uint64_t _timestamp_)
{
m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t satellite_info::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& satellite_info::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function sets a value in member count_
 * @param _count_ New value for member count_
 */
void satellite_info::count_(uint8_t _count_)
{
m_count_ = _count_;
}

/*!
 * @brief This function returns the value of member count_
 * @return Value of member count_
 */
uint8_t satellite_info::count_() const
{
    return m_count_;
}

/*!
 * @brief This function returns a reference to member count_
 * @return Reference to member count_
 */
uint8_t& satellite_info::count_()
{
    return m_count_;
}

/*!
 * @brief This function copies the value in member svid
 * @param _svid New value to be copied in member svid
 */
void satellite_info::svid(const satellite_info__octet_array_20 &_svid)
{
m_svid = _svid;
}

/*!
 * @brief This function moves the value in member svid
 * @param _svid New value to be moved in member svid
 */
void satellite_info::svid(satellite_info__octet_array_20 &&_svid)
{
m_svid = std::move(_svid);
}

/*!
 * @brief This function returns a constant reference to member svid
 * @return Constant reference to member svid
 */
const satellite_info__octet_array_20& satellite_info::svid() const
{
    return m_svid;
}

/*!
 * @brief This function returns a reference to member svid
 * @return Reference to member svid
 */
satellite_info__octet_array_20& satellite_info::svid()
{
    return m_svid;
}
/*!
 * @brief This function copies the value in member used
 * @param _used New value to be copied in member used
 */
void satellite_info::used(const satellite_info__octet_array_20 &_used)
{
m_used = _used;
}

/*!
 * @brief This function moves the value in member used
 * @param _used New value to be moved in member used
 */
void satellite_info::used(satellite_info__octet_array_20 &&_used)
{
m_used = std::move(_used);
}

/*!
 * @brief This function returns a constant reference to member used
 * @return Constant reference to member used
 */
const satellite_info__octet_array_20& satellite_info::used() const
{
    return m_used;
}

/*!
 * @brief This function returns a reference to member used
 * @return Reference to member used
 */
satellite_info__octet_array_20& satellite_info::used()
{
    return m_used;
}
/*!
 * @brief This function copies the value in member elevation
 * @param _elevation New value to be copied in member elevation
 */
void satellite_info::elevation(const satellite_info__octet_array_20 &_elevation)
{
m_elevation = _elevation;
}

/*!
 * @brief This function moves the value in member elevation
 * @param _elevation New value to be moved in member elevation
 */
void satellite_info::elevation(satellite_info__octet_array_20 &&_elevation)
{
m_elevation = std::move(_elevation);
}

/*!
 * @brief This function returns a constant reference to member elevation
 * @return Constant reference to member elevation
 */
const satellite_info__octet_array_20& satellite_info::elevation() const
{
    return m_elevation;
}

/*!
 * @brief This function returns a reference to member elevation
 * @return Reference to member elevation
 */
satellite_info__octet_array_20& satellite_info::elevation()
{
    return m_elevation;
}
/*!
 * @brief This function copies the value in member azimuth
 * @param _azimuth New value to be copied in member azimuth
 */
void satellite_info::azimuth(const satellite_info__octet_array_20 &_azimuth)
{
m_azimuth = _azimuth;
}

/*!
 * @brief This function moves the value in member azimuth
 * @param _azimuth New value to be moved in member azimuth
 */
void satellite_info::azimuth(satellite_info__octet_array_20 &&_azimuth)
{
m_azimuth = std::move(_azimuth);
}

/*!
 * @brief This function returns a constant reference to member azimuth
 * @return Constant reference to member azimuth
 */
const satellite_info__octet_array_20& satellite_info::azimuth() const
{
    return m_azimuth;
}

/*!
 * @brief This function returns a reference to member azimuth
 * @return Reference to member azimuth
 */
satellite_info__octet_array_20& satellite_info::azimuth()
{
    return m_azimuth;
}
/*!
 * @brief This function copies the value in member snr
 * @param _snr New value to be copied in member snr
 */
void satellite_info::snr(const satellite_info__octet_array_20 &_snr)
{
m_snr = _snr;
}

/*!
 * @brief This function moves the value in member snr
 * @param _snr New value to be moved in member snr
 */
void satellite_info::snr(satellite_info__octet_array_20 &&_snr)
{
m_snr = std::move(_snr);
}

/*!
 * @brief This function returns a constant reference to member snr
 * @return Constant reference to member snr
 */
const satellite_info__octet_array_20& satellite_info::snr() const
{
    return m_snr;
}

/*!
 * @brief This function returns a reference to member snr
 * @return Reference to member snr
 */
satellite_info__octet_array_20& satellite_info::snr()
{
    return m_snr;
}
/*!
 * @brief This function copies the value in member prn
 * @param _prn New value to be copied in member prn
 */
void satellite_info::prn(const satellite_info__octet_array_20 &_prn)
{
m_prn = _prn;
}

/*!
 * @brief This function moves the value in member prn
 * @param _prn New value to be moved in member prn
 */
void satellite_info::prn(satellite_info__octet_array_20 &&_prn)
{
m_prn = std::move(_prn);
}

/*!
 * @brief This function returns a constant reference to member prn
 * @return Constant reference to member prn
 */
const satellite_info__octet_array_20& satellite_info::prn() const
{
    return m_prn;
}

/*!
 * @brief This function returns a reference to member prn
 * @return Reference to member prn
 */
satellite_info__octet_array_20& satellite_info::prn()
{
    return m_prn;
}

size_t satellite_info::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;











    return current_align;
}

bool satellite_info::isKeyDefined()
{
   return false;
}

void satellite_info::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
}
