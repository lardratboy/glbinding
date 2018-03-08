
#pragma once


#include <sstream>
#include <string>
#include <set>


namespace glscbinding
{


GLSCBINDING_CONSTEXPR Version::Version()
: m_major(0)
, m_minor(0)
{
}

GLSCBINDING_CONSTEXPR Version::Version(unsigned char majorVersion, unsigned char minorVersion)
: m_major(majorVersion)
, m_minor(minorVersion)
{
}

GLSCBINDING_CONSTEXPR Version::Version(const Version & version)
: m_major(version.m_major)
, m_minor(version.m_minor)
{
}

Version::Version(Version && version)
: m_major(std::move(version.m_major))
, m_minor(std::move(version.m_minor))
{
}

Version & Version::operator=(const Version & version)
{
    m_major = version.m_major;
    m_minor = version.m_minor;

    return *this;
}

Version & Version::operator=(Version && version)
{
    m_major = std::move(version.m_major);
    m_minor = std::move(version.m_minor);

    return *this;
}

GLSCBINDING_CONSTEXPR bool Version::operator<(const Version & version) const
{
    return m_major < version.m_major
        || (m_major == version.m_major && m_minor < version.m_minor);
}

GLSCBINDING_CONSTEXPR bool Version::operator>(const Version & version) const
{
    return m_major > version.m_major
        || (m_major == version.m_major && m_minor > version.m_minor);
}

GLSCBINDING_CONSTEXPR bool Version::operator==(const Version & version) const
{
    return m_major == version.m_major
        && m_minor == version.m_minor;
}

GLSCBINDING_CONSTEXPR bool Version::operator!=(const Version & version) const
{
    return m_major != version.m_major
        || m_minor != version.m_minor;
}

GLSCBINDING_CONSTEXPR bool Version::operator>=(const Version & version) const
{
    return *this > version || *this == version;
}

GLSCBINDING_CONSTEXPR bool Version::operator<=(const Version & version) const
{
    return *this < version || *this == version;
}

GLSCBINDING_CONSTEXPR unsigned char Version::majorVersion() const
{
    return m_major;
}

GLSCBINDING_CONSTEXPR unsigned char Version::minorVersion() const
{
    return m_minor;
}

Version::operator std::pair<unsigned char, unsigned char>() const
{
    return std::pair<unsigned char, unsigned char>(m_major, m_minor);
}

Version::operator std::pair<unsigned short, unsigned short>() const
{
    return std::pair<unsigned short, unsigned short>(m_major, m_minor);
}

Version::operator std::pair<unsigned int, unsigned int>() const
{
    return std::pair<unsigned int, unsigned int>(m_major, m_minor);
}

GLSCBINDING_CONSTEXPR bool Version::isNull() const
{
    return m_major == 0;
}


} // namespace glscbinding
