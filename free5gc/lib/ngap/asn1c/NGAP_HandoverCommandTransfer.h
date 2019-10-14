/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_HandoverCommandTransfer_H_
#define	_NGAP_HandoverCommandTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosFlowToBeForwardedList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_UPTransportLayerInformation;
struct NGAP_DataForwardingResponseDRBList;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_HandoverCommandTransfer */
typedef struct NGAP_HandoverCommandTransfer {
	struct NGAP_UPTransportLayerInformation	*dLForwardingUP_TNLInformation;	/* OPTIONAL */
	NGAP_QosFlowToBeForwardedList_t	 qosFlowToBeForwardedList;
	struct NGAP_DataForwardingResponseDRBList	*dataForwardingResponseDRBList;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_HandoverCommandTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_HandoverCommandTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_HandoverCommandTransfer_H_ */
#include <asn_internal.h>