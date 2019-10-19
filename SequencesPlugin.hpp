

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sequences.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SequencesPlugin_94599174_h
#define SequencesPlugin_94599174_h

#include "Sequences.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "PrimitivesPlugin.hpp"
#include "EnumPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define SequencesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SequencesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SequencesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SequencesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SequencesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Sequences*
SequencesPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Sequences*
SequencesPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Sequences*
SequencesPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SequencesPluginSupport_copy_data(
    Sequences *out,
    const Sequences *in);

NDDSUSERDllExport extern void 
SequencesPluginSupport_destroy_data_w_params(
    Sequences *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SequencesPluginSupport_destroy_data_ex(
    Sequences *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequencesPluginSupport_destroy_data(
    Sequences *sample);

NDDSUSERDllExport extern void 
SequencesPluginSupport_print_data(
    const Sequences *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SequencesPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SequencesPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
SequencesPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SequencesPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
SequencesPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Sequences *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
SequencesPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Sequences *out,
    const Sequences *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SequencesPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Sequences *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequencesPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Sequences *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SequencesPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Sequences *sample); 

NDDSUSERDllExport extern RTIBool 
SequencesPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Sequences **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SequencesPlugin_deserialize_from_cdr_buffer(
    Sequences *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
SequencesPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SequencesPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
SequencesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequencesPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SequencesPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Sequences * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
SequencesPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SequencesPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequencesPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SequencesPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Sequences *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequencesPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Sequences * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequencesPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Sequences ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SequencesPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Sequences *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SequencesPlugin_new(void);

NDDSUSERDllExport extern void
SequencesPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SequencesPlugin_94599174_h */

