/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "../../../libacars.asn1/fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "FANSTimeSpeed.h"

static asn_TYPE_member_t asn_MBR_FANSTimeSpeed_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimeSpeed, time),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"time"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimeSpeed, speed),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSSpeed,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speed"
		},
};
static const ber_tlv_tag_t asn_DEF_FANSTimeSpeed_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSTimeSpeed_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* time */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* speedIndicated */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* speedIndicatedMetric */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* speedTrue */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* speedTrueMetric */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* speedGround */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 }, /* speedGroundMetric */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 0 }, /* speedMach */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 1, 0, 0 } /* speedMachLarge */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSTimeSpeed_specs_1 = {
	sizeof(struct FANSTimeSpeed),
	offsetof(struct FANSTimeSpeed, _asn_ctx),
	asn_MAP_FANSTimeSpeed_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FANSTimeSpeed = {
	"FANSTimeSpeed",
	"FANSTimeSpeed",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FANSTimeSpeed_tags_1,
	sizeof(asn_DEF_FANSTimeSpeed_tags_1)
		/sizeof(asn_DEF_FANSTimeSpeed_tags_1[0]), /* 1 */
	asn_DEF_FANSTimeSpeed_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSTimeSpeed_tags_1)
		/sizeof(asn_DEF_FANSTimeSpeed_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FANSTimeSpeed_1,
	2,	/* Elements count */
	&asn_SPC_FANSTimeSpeed_specs_1	/* Additional specs */
};

