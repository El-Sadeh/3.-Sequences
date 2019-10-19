

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sequences.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Sequences_94599174_hpp
#define Sequences_94599174_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "Primitives.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "Enum.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator<BasicEnum>;
template class NDDSUSERDllExport std::vector<BasicEnum >;
#endif
class NDDSUSERDllExport Sequences {

  public:
    Sequences();

    Sequences(
        const rti::core::bounded_sequence<BasicEnum, 10>& basic,
        const dds::core::array<PrimitiveStruct, 20>& primitiveArray);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    Sequences (Sequences&&) = default;
    Sequences& operator=(Sequences&&) = default;
    Sequences& operator=(const Sequences&) = default;
    Sequences(const Sequences&) = default;
    #else
    Sequences(Sequences&& other_) OMG_NOEXCEPT;  
    Sequences& operator=(Sequences&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    rti::core::bounded_sequence<BasicEnum, 10>& basic() OMG_NOEXCEPT; 
    const rti::core::bounded_sequence<BasicEnum, 10>& basic() const OMG_NOEXCEPT;
    void basic(const rti::core::bounded_sequence<BasicEnum, 10>& value);

    dds::core::array<PrimitiveStruct, 20>& primitiveArray() OMG_NOEXCEPT; 
    const dds::core::array<PrimitiveStruct, 20>& primitiveArray() const OMG_NOEXCEPT;
    void primitiveArray(const dds::core::array<PrimitiveStruct, 20>& value);

    bool operator == (const Sequences& other_) const;
    bool operator != (const Sequences& other_) const;

    void swap(Sequences& other_) OMG_NOEXCEPT ;

  private:

    rti::core::bounded_sequence<BasicEnum, 10> m_basic_;
    dds::core::array<PrimitiveStruct, 20> m_primitiveArray_;

};

inline void swap(Sequences& a, Sequences& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const Sequences& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<Sequences> {
            NDDSUSERDllExport static std::string value() {
                return "Sequences";
            }
        };

        template<>
        struct is_topic_type<Sequences> : public dds::core::true_type {};

        template<>
        struct topic_type_support<Sequences> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const Sequences& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(Sequences& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(Sequences& sample);

            NDDSUSERDllExport 
            static void allocate_sample(Sequences& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type<Sequences> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<Sequences> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // Sequences_94599174_hpp

