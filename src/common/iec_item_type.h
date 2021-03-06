/*
 * This file was generated by orte-idl - DO NOT EDIT!
 */

#ifndef iec_item_type_H
#define iec_item_type_H 1

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef EXCLUDE_ORTE_H
#include <orte.h>
#endif /* EXCLUDE_ORTE_H */

/** typedefs **/
#if !defined(_iec_item_type_defined)
#define _iec_item_type_defined 1
typedef struct iec_item_type_type iec_item_type;
struct iec_item_type_type {
CORBA_octet iec_type;
CORBA_octet iec_obj;
CORBA_octet iec_obj_byte2;
CORBA_octet iec_obj_byte3;
CORBA_octet iec_obj_byte4;
CORBA_octet iec_obj_byte5;
CORBA_octet iec_obj_byte6;
CORBA_octet iec_obj_byte7;
CORBA_octet iec_obj_byte8;
CORBA_octet iec_obj_byte9;
CORBA_octet iec_obj_byte10;
CORBA_octet iec_obj_byte11;
CORBA_octet iec_obj_byte12;
CORBA_octet iec_obj_byte13;
CORBA_octet iec_obj_byte14;
CORBA_octet iec_obj_byte15;
CORBA_octet iec_obj_byte16;
CORBA_octet iec_obj_byte17;
CORBA_octet iec_obj_byte18;
CORBA_octet iec_obj_byte19;
CORBA_octet iec_obj_byte20;
CORBA_octet iec_obj_byte21;
CORBA_octet cause;
CORBA_unsigned_long msg_id;
CORBA_long ioa_control_center;
CORBA_unsigned_short casdu;
CORBA_octet is_neg;
CORBA_octet checksum;
};

#endif

/** impls declarations **/
void iec_item_type_serialize(CDR_Codec *cdrCodec,iec_item_type *object);
void iec_item_type_deserialize(CDR_Codec *cdrCodec,iec_item_type *object);
int iec_item_type_get_max_size(ORTEGetMaxSizeParam *gms);
Boolean iec_item_type_type_register(ORTEDomain *d);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
