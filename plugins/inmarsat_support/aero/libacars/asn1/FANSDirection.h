/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "../../../libacars.asn1/fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSDirection_H_
#define	_FANSDirection_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSDirection {
	FANSDirection_left	= 0,
	FANSDirection_right	= 1,
	FANSDirection_eitherSide	= 2,
	FANSDirection_north	= 3,
	FANSDirection_south	= 4,
	FANSDirection_east	= 5,
	FANSDirection_west	= 6,
	FANSDirection_northEast	= 7,
	FANSDirection_northWest	= 8,
	FANSDirection_southEast	= 9,
	FANSDirection_southWest	= 10
} e_FANSDirection;

/* FANSDirection */
typedef long	 FANSDirection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSDirection;
asn_struct_free_f FANSDirection_free;
asn_struct_print_f FANSDirection_print;
asn_constr_check_f FANSDirection_constraint;
ber_type_decoder_f FANSDirection_decode_ber;
der_type_encoder_f FANSDirection_encode_der;
xer_type_decoder_f FANSDirection_decode_xer;
xer_type_encoder_f FANSDirection_encode_xer;
per_type_decoder_f FANSDirection_decode_uper;
per_type_encoder_f FANSDirection_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSDirection_H_ */
#include "asn_internal.h"