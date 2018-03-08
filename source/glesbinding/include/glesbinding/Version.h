
#pragma once


#include <iosfwd>
#include <string>
#include <set>
#include <utility>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>


namespace glesbinding
{


/**
*  @brief
*    The Version class represents an OpenGL feature, consisting of majow version and minor version, excluding the profile information.
*
*    This instance can represent both any officially released OpenGL feature and other combinations of major and minar version and provides methods for validity checking and comparison
*
*  Example code:
*  \code{.cpp}
*  const glesbinding::Version currentVersion = glesbinding::ContextInfo::version();
*
*  if (currentVersion >= glesbinding::Version(3, 2))
*  {
*      // do something
*  }
*  \endcode
*/
class Version
{
public:
    /**
    *  @brief
    *    Default constructor, resulting in an invalid Version object
    */
    GLESBINDING_CONSTEXPR inline Version();

    /**
    *  @brief
    *    Constructor for a Version object with the given major and minor version
    *
    *  @param[in] majorVersion
    *    The major version
    *  @param[in] minorVersion
    *    The minor version
    */
    GLESBINDING_CONSTEXPR inline Version(unsigned char majorVersion, unsigned char minorVersion);

    /**
    *  @brief
    *    Copy constructor
    *
    *  @param[in] version
    *    The Version the data is used from
    */
    GLESBINDING_CONSTEXPR inline Version(const Version & version);

    /**
    *  @brief
    *    Move constructor
    *
    *  @param[in] version
    *    The Version the data is moved from
    */
    inline Version(Version && version);

    /**
    *  @brief
    *    The assignment operator of another Version
    *
    *  @param[in] version
    *    The version the data is used from
    *
    *  @return
    *    The reference to this Version
    */
    inline Version & operator=(const Version & version);

    /**
    *  @brief
    *    The assignment operator of another Version that is moved from
    *
    *  @param[in] version
    *    The version the data is moved from
    *
    *  @return
    *    The reference to this Version
    */
    inline Version & operator=(Version && version);

    /**
    *  @brief
    *    Operator for lesser comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is lesser than the other Version, else 'false'
    */
    GLESBINDING_CONSTEXPR inline bool operator<(const Version & version) const;

    /**
    *  @brief
    *    Operator for greater comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is greater than the other Version, else 'false'
    */
    GLESBINDING_CONSTEXPR inline bool operator>(const Version & version) const;

    /**
    *  @brief
    *    Operator for equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is equal to the other Version, else 'false'
    */
    GLESBINDING_CONSTEXPR inline bool operator==(const Version & version) const;

    /**
    *  @brief
    *    Operator for unequal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is not equal to the other Version, else 'false'
    */
    GLESBINDING_CONSTEXPR inline bool operator!=(const Version & version) const;

    /**
    *  @brief
    *    Operator for greater equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is greater or equal than the other Version, else 'false'
    */
    GLESBINDING_CONSTEXPR inline bool operator>=(const Version & version) const;

    /**
    *  @brief
    *    Operator for lesser equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is lesser or equal than the other Version, else 'false'
    */
    GLESBINDING_CONSTEXPR inline bool operator<=(const Version & version) const;

    /**
    *  @brief
    *    Accessor for the major version
    *
    *  @return
    *    the major version
    */
    GLESBINDING_CONSTEXPR inline unsigned char majorVersion() const;

    /**
    *  @brief
    *    Accessor for the minor version
    *
    *  @return
    *    the minor version
    */
    GLESBINDING_CONSTEXPR inline unsigned char minorVersion() const;

    /**
    *  @brief
    *    Cast operator for a std::pair cast of type unsigned char
    */
    inline operator std::pair<unsigned char, unsigned char>() const;

    /**
    *  @brief
    *    Cast operator for a std::pair cast of type unsigned short
    */
    inline operator std::pair<unsigned short, unsigned short>() const;

    /**
    *  @brief
    *    Cast operator for a std::pair cast of type unsigned int
    */
    inline operator std::pair<unsigned int, unsigned int>() const;

    /**
    *  @brief
    *    Create a string representing the Version using the scheme "<majorVersion>.<minorVersion>"
    *
    *  @return
    *    The version as string, "-.-" iff the string is invalid
    */
    GLESBINDING_API std::string toString() const;

    /**
    *  @brief
    *    Check for validity of this Version, based on the list of all valid OpenGL feautures
    *
    *  @return
    *    true iff the version is valid (i.e., if this version is present in the set of valid versions)
    */
    GLESBINDING_API bool isValid() const;

    /**
    *  @brief
    *    Check if the Version was constructed using the default constructor
    *
    *  @return
    *    'true' if the major version is 0, else 'false'
    *
    *  @remarks
    *    This method can be used to check if this Version was constructed using the default constructor or is otherwise malformed
    */
    GLESBINDING_CONSTEXPR inline bool isNull() const;

    /**
    *  @brief
    *    Returns the nearest valid Version to this Version
    *
    *  @return
    *    The nearest valid Version that is either equal or lower than this Version
    */
    GLESBINDING_API const Version & nearest() const;

    /**
    *  @brief
    *    Accessor for the list of all valid Versions (OpenGL features)
    *
    *  @return
    *    The set of all valid Versions (= released OpenGL Features)
    */
    GLESBINDING_API static const std::set<Version> & versions();

    /**
    * @brief
    *   Returns the list of all valid, previous Versions (Features) known by the gl.xml
    *
    * @return
    *   The list of all valid Versions (Features) with a version number below the provided one
    */
    GLESBINDING_API static const std::set<Version> preceeding(const Version & version);

    /**
    * @brief
    *   Returns the list of all valid, subsequent Versions (Features) known by the gl.xml
    *
    * @return
    *   The list of all valid Versions (Features) with a version number above the provided one
    */
    GLESBINDING_API static const std::set<Version> succeeding(const Version & version);

    /**
    *  @brief
    *    Return the most current valid Version
    *
    *  @return
    *    The most current Version from the set of all valid versions
    */
    GLESBINDING_API static const Version & latest();


protected:
    unsigned char m_major; ///< The major version
    unsigned char m_minor; ///< The minor version

    static const std::set<Version> s_validVersions; ///< The set of all valid versions
    static const Version           s_latest;        ///< The most current version
};


} // namespace glesbinding


/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const glesbinding::Version & version);


#include <glesbinding/Version.inl>