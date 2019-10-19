

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sequences.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Sequences.hpp"
#include "SequencesPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- Sequences: 

Sequences::Sequences()  {
}   

Sequences::Sequences (
    const rti::core::bounded_sequence<BasicEnum, 10>& basic,
    const dds::core::array<PrimitiveStruct, 20>& primitiveArray)
    :
        m_basic_( basic ),
        m_primitiveArray_( primitiveArray ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
Sequences::Sequences(Sequences&& other_) OMG_NOEXCEPT  :m_basic_ (std::move(other_.m_basic_))
,
m_primitiveArray_ (std::move(other_.m_primitiveArray_))
{
} 

Sequences& Sequences::operator=(Sequences&&  other_) OMG_NOEXCEPT {
    Sequences tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void Sequences::swap(Sequences& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_basic_, other_.m_basic_);
    swap(m_primitiveArray_, other_.m_primitiveArray_);
}  

bool Sequences::operator == (const Sequences& other_) const {
    if (m_basic_ != other_.m_basic_) {
        return false;
    }
    if (m_primitiveArray_ != other_.m_primitiveArray_) {
        return false;
    }
    return true;
}
bool Sequences::operator != (const Sequences& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
rti::core::bounded_sequence<BasicEnum, 10>& Sequences::basic() OMG_NOEXCEPT {
    return m_basic_;
}

const rti::core::bounded_sequence<BasicEnum, 10>& Sequences::basic() const OMG_NOEXCEPT {
    return m_basic_;
}

void Sequences::basic(const rti::core::bounded_sequence<BasicEnum, 10>& value) {
    m_basic_ = value;
}

dds::core::array<PrimitiveStruct, 20>& Sequences::primitiveArray() OMG_NOEXCEPT {
    return m_primitiveArray_;
}

const dds::core::array<PrimitiveStruct, 20>& Sequences::primitiveArray() const OMG_NOEXCEPT {
    return m_primitiveArray_;
}

void Sequences::primitiveArray(const dds::core::array<PrimitiveStruct, 20>& value) {
    m_primitiveArray_ = value;
}

std::ostream& operator << (std::ostream& o,const Sequences& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "basic: " << sample.basic()<<", ";
    o << "primitiveArray: " << sample.primitiveArray() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<Sequences> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Sequences_g_tc_basic_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((10),NULL);
                static DDS_TypeCode Sequences_g_tc_primitiveArray_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,20, NULL,NULL);
                static DDS_TypeCode_Member Sequences_g_tc_members[2]=
                {

                    {
                        (char *)"basic",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"primitiveArray",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Sequences_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Sequences", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Sequences_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Sequences*/

                if (is_initialized) {
                    return &Sequences_g_tc;
                }

                Sequences_g_tc_basic_sequence._data._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< BasicEnum>::get().native();

                Sequences_g_tc_primitiveArray_array._data._typeCode =(RTICdrTypeCode *)&rti::topic::dynamic_type< PrimitiveStruct>::get().native();

                Sequences_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Sequences_g_tc_basic_sequence;
                Sequences_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Sequences_g_tc_primitiveArray_array;

                is_initialized = RTI_TRUE;

                return &Sequences_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<Sequences>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<Sequences>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<Sequences>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                SequencesPlugin_new,
                SequencesPlugin_delete);
        }

        std::vector<char>& topic_type_support<Sequences>::to_cdr_buffer(
            std::vector<char>& buffer, const Sequences& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SequencesPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SequencesPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<Sequences>::from_cdr_buffer(Sequences& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SequencesPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create Sequences from cdr buffer");
        }

        void topic_type_support<Sequences>::reset_sample(Sequences& sample) 
        {
            rti::topic::reset_sample(sample.basic());
            rti::topic::reset_sample(sample.primitiveArray());
        }

        void topic_type_support<Sequences>::allocate_sample(Sequences& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.basic(),  10, -1);
            rti::topic::allocate_sample(sample.primitiveArray(),  -1, -1);
        }

    }
}  

