/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "../../../libacars.asn1/fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "FANSSpeed.h"

static asn_per_constraints_t asn_PER_type_FANSSpeed_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_FANSSpeed_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedIndicated),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedIndicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedIndicated"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedIndicatedMetric),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedIndicatedMetric,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedIndicatedMetric"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedTrue),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedTrue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedTrue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedTrueMetric),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedTrueMetric,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedTrueMetric"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedGround),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedGround,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedGround"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedGroundMetric),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedGroundMetric,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedGroundMetric"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedMach),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedMach,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedMach"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSSpeed, choice.speedMachLarge),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSSpeedMachLarge,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedMachLarge"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_FANSSpeed_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* speedIndicated */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* speedIndicatedMetric */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* speedTrue */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* speedTrueMetric */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* speedGround */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* speedGroundMetric */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* speedMach */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* speedMachLarge */
};
static asn_CHOICE_specifics_t asn_SPC_FANSSpeed_specs_1 = {
	sizeof(struct FANSSpeed),
	offsetof(struct FANSSpeed, _asn_ctx),
	offsetof(struct FANSSpeed, present),
	sizeof(((struct FANSSpeed *)0)->present),
	asn_MAP_FANSSpeed_tag2el_1,
	8,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_FANSSpeed = {
	"FANSSpeed",
	"FANSSpeed",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_FANSSpeed_constr_1,
	asn_MBR_FANSSpeed_1,
	8,	/* Elements count */
	&asn_SPC_FANSSpeed_specs_1	/* Additional specs */
};

