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
 * @file UnboundedHelloWorld.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "UnboundedHelloWorld.h"

#if FASTCDR_VERSION_MAJOR == 1

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

namespace helper { namespace internal {

enum class Size {
    UInt8,
    UInt16,
    UInt32,
    UInt64,
};

constexpr Size get_size(int s) {
    return (s <= 8 ) ? Size::UInt8:
           (s <= 16) ? Size::UInt16:
           (s <= 32) ? Size::UInt32: Size::UInt64;
}

template<Size s>
struct FindTypeH;

template<>
struct FindTypeH<Size::UInt8> {
    using type = std::uint8_t;
};

template<>
struct FindTypeH<Size::UInt16> {
    using type = std::uint16_t;
};

template<>
struct FindTypeH<Size::UInt32> {
    using type = std::uint32_t;
};

template<>
struct FindTypeH<Size::UInt64> {
    using type = std::uint64_t;
};
}

template<int S>
struct FindType {
    using type = typename internal::FindTypeH<internal::get_size(S)>::type;
};
}

#define UnboundedHelloWorld_max_cdr_typesize 268ULL;




UnboundedHelloWorld::UnboundedHelloWorld()
{
    // unsigned short m_index
    m_index = 0;
    // /type_d() m_message


}

UnboundedHelloWorld::~UnboundedHelloWorld()
{
}

UnboundedHelloWorld::UnboundedHelloWorld(
        const UnboundedHelloWorld& x)
{
    m_index = x.m_index;


    m_message = x.m_message;

}

UnboundedHelloWorld::UnboundedHelloWorld(
        UnboundedHelloWorld&& x) noexcept
{
    m_index = x.m_index;


    m_message = std::move(x.m_message);

}

UnboundedHelloWorld& UnboundedHelloWorld::operator =(
        const UnboundedHelloWorld& x)
{
    m_index = x.m_index;


    m_message = x.m_message;

    return *this;
}

UnboundedHelloWorld& UnboundedHelloWorld::operator =(
        UnboundedHelloWorld&& x) noexcept
{
    m_index = x.m_index;


    m_message = std::move(x.m_message);

    return *this;
}

bool UnboundedHelloWorld::operator ==(
        const UnboundedHelloWorld& x) const
{
    return (m_index == x.m_index &&
           m_message == x.m_message);
}

bool UnboundedHelloWorld::operator !=(
        const UnboundedHelloWorld& x) const
{
    return !(*this == x);
}

size_t UnboundedHelloWorld::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return UnboundedHelloWorld_max_cdr_typesize;
}

size_t UnboundedHelloWorld::getCdrSerializedSize(
        const UnboundedHelloWorld& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;


    return current_alignment - initial_alignment;
}


void UnboundedHelloWorld::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_index;

    scdr << m_message.c_str();

}

void UnboundedHelloWorld::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_index;



    dcdr >> m_message;


}


bool UnboundedHelloWorld::isKeyDefined()
{
    return false;
}

void UnboundedHelloWorld::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void UnboundedHelloWorld::index(
        uint16_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint16_t UnboundedHelloWorld::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint16_t& UnboundedHelloWorld::index()
{
    return m_index;
}


/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void UnboundedHelloWorld::message(
        const std::string& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void UnboundedHelloWorld::message(
        std::string&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::string& UnboundedHelloWorld::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::string& UnboundedHelloWorld::message()
{
    return m_message;
}




#endif // FASTCDR_VERSION_MAJOR == 1