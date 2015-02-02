/*****************************************************************************

 @(#) src/snmp/ieee8021srpmib.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef __LOCAL_IEEE8021SRPMIB_H__
#define __LOCAL_IEEE8021SRPMIB_H__

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */

extern const char sa_program[];
extern int sa_fclose;			/* default close files between requests */
extern int sa_changed;			/* indication to reread MIB configuration */
extern int sa_stats_refresh;		/* indications that statistics, the mib or its tables need to be refreshed */
extern int sa_request;			/* request number for per-request actions */

/* our storage structure(s) */
struct ieee8021SrpMib_data {
	struct ieee8021SrpMib_data *ieee8021SrpMib_old;
	uint ieee8021SrpMib_rsvs;
	uint ieee8021SrpMib_tsts;
	uint ieee8021SrpMib_sets;
	uint ieee8021SrpMib_request;
};
struct ieee8021SrpBridgeBaseTable_data {
	struct ieee8021SrpBridgeBaseTable_data *ieee8021SrpBridgeBaseTable_old;
	uint ieee8021SrpBridgeBaseTable_rsvs;
	uint ieee8021SrpBridgeBaseTable_tsts;
	uint ieee8021SrpBridgeBaseTable_sets;
	uint ieee8021SrpBridgeBaseTable_request;
	uint ieee8021SrpBridgeBaseTable_refs;
	uint ieee8021SrpBridgeBaseTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	long ieee8021SrpBridgeBaseMsrpEnabledStatus;	/* Create */
	long ieee8021SrpBridgeBaseMsrpTalkerPruning;	/* Create */
	ulong ieee8021SrpBridgeBaseMsrpMaxFanInPorts;	/* Create */
	ulong ieee8021SrpBridgeBaseMsrpLatencyMaxFrameSize;	/* Create */
};
struct ieee8021SrpBridgePortTable_data {
	struct ieee8021SrpBridgePortTable_data *ieee8021SrpBridgePortTable_old;
	uint ieee8021SrpBridgePortTable_rsvs;
	uint ieee8021SrpBridgePortTable_tsts;
	uint ieee8021SrpBridgePortTable_sets;
	uint ieee8021SrpBridgePortTable_request;
	uint ieee8021SrpBridgePortTable_refs;
	uint ieee8021SrpBridgePortTable_id;
	ulong ieee8021BridgeBasePortComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	long ieee8021SrpBridgePortMsrpEnabledStatus;	/* Create */
	struct counter64 ieee8021SrpBridgePortMsrpFailedRegistrations;	/* ReadOnly */
	uint8_t *ieee8021SrpBridgePortMsrpLastPduOrigin;	/* ReadOnly */
	size_t ieee8021SrpBridgePortMsrpLastPduOriginLen;
	ulong ieee8021SrpBridgePortSrPvid;	/* Create */
};
struct ieee8021SrpLatencyTable_data {
	struct ieee8021SrpLatencyTable_data *ieee8021SrpLatencyTable_old;
	uint ieee8021SrpLatencyTable_rsvs;
	uint ieee8021SrpLatencyTable_tsts;
	uint ieee8021SrpLatencyTable_sets;
	uint ieee8021SrpLatencyTable_request;
	uint ieee8021SrpLatencyTable_refs;
	uint ieee8021SrpLatencyTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021SrpTrafficClass;	/* NoAccess */
	ulong ieee8021SrpPortTcLatency;	/* ReadOnly */
};
struct ieee8021SrpStreamTable_data {
	struct ieee8021SrpStreamTable_data *ieee8021SrpStreamTable_old;
	uint ieee8021SrpStreamTable_rsvs;
	uint ieee8021SrpStreamTable_tsts;
	uint ieee8021SrpStreamTable_sets;
	uint ieee8021SrpStreamTable_request;
	uint ieee8021SrpStreamTable_refs;
	uint ieee8021SrpStreamTable_id;
	uint8_t *ieee8021SrpStreamId;	/* NoAccess */
	size_t ieee8021SrpStreamIdLen;
	uint8_t *ieee8021SrpStreamDestinationAddress;	/* ReadOnly */
	size_t ieee8021SrpStreamDestinationAddressLen;
	ulong ieee8021SrpStreamVlanId;	/* ReadOnly */
	ulong ieee8021SrpStreamTspecMaxFrameSize;	/* ReadOnly */
	ulong ieee8021SrpStreamTspecMaxIntervalFrames;	/* ReadOnly */
	long ieee8021SrpStreamDataFramePriority;	/* ReadOnly */
	long ieee8021SrpStreamRank;	/* ReadOnly */
};
struct ieee8021SrpReservationsTable_data {
	struct ieee8021SrpReservationsTable_data *ieee8021SrpReservationsTable_old;
	uint ieee8021SrpReservationsTable_rsvs;
	uint ieee8021SrpReservationsTable_tsts;
	uint ieee8021SrpReservationsTable_sets;
	uint ieee8021SrpReservationsTable_request;
	uint ieee8021SrpReservationsTable_refs;
	uint ieee8021SrpReservationsTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	uint8_t *ieee8021SrpReservationStreamId;	/* NoAccess */
	size_t ieee8021SrpReservationStreamIdLen;
	long ieee8021SrpReservationDirection;	/* NoAccess */
	long ieee8021SrpReservationDeclarationType;	/* ReadOnly */
	ulong ieee8021SrpReservationAccumulatedLatency;	/* ReadOnly */
	uint8_t *ieee8021SrpReservationFailureBridgeId;	/* ReadOnly */
	size_t ieee8021SrpReservationFailureBridgeIdLen;
	long ieee8021SrpReservationFailureCode;	/* ReadOnly */
	struct counter64 ieee8021SrpReservationDroppedStreamFrames;	/* ReadOnly */
	ulong ieee8021SrpReservationStreamAge;	/* ReadOnly */
};

/* storage declarations */
extern struct ieee8021SrpMib_data *ieee8021SrpMibStorage;
extern struct header_complex_index *ieee8021SrpBridgeBaseTableStorage;
extern struct header_complex_index *ieee8021SrpBridgePortTableStorage;
extern struct header_complex_index *ieee8021SrpLatencyTableStorage;
extern struct header_complex_index *ieee8021SrpStreamTableStorage;
extern struct header_complex_index *ieee8021SrpReservationsTableStorage;

/* enum definitions from the covered mib sections */

#define IEEE8021SRPBRIDGEBASEMSRPENABLEDSTATUS_TRUE 1
#define IEEE8021SRPBRIDGEBASEMSRPENABLEDSTATUS_FALSE 2

#define IEEE8021SRPBRIDGEBASEMSRPTALKERPRUNING_TRUE 1
#define IEEE8021SRPBRIDGEBASEMSRPTALKERPRUNING_FALSE 2

#define IEEE8021SRPBRIDGEPORTMSRPENABLEDSTATUS_TRUE 1
#define IEEE8021SRPBRIDGEPORTMSRPENABLEDSTATUS_FALSE 2

#define IEEE8021SRPSTREAMDATAFRAMEPRIORITY_CODEPOINT8P0D 1
#define IEEE8021SRPSTREAMDATAFRAMEPRIORITY_CODEPOINT7P1D 2
#define IEEE8021SRPSTREAMDATAFRAMEPRIORITY_CODEPOINT6P2D 3
#define IEEE8021SRPSTREAMDATAFRAMEPRIORITY_CODEPOINT5P3D 4

#define IEEE8021SRPSTREAMRANK_EMERGENCY          0
#define IEEE8021SRPSTREAMRANK_NONEMERGENCY       1

#define IEEE8021SRPRESERVATIONDIRECTION_TALKERREGISTRATIONS 0
#define IEEE8021SRPRESERVATIONDIRECTION_LISTENERREGISTRATIONS 1

#define IEEE8021SRPRESERVATIONDECLARATIONTYPE_TALKERADVERTISE 0
#define IEEE8021SRPRESERVATIONDECLARATIONTYPE_TALKERFAILED 1
#define IEEE8021SRPRESERVATIONDECLARATIONTYPE_LISTENERASKINGFAILED 2
#define IEEE8021SRPRESERVATIONDECLARATIONTYPE_LISTENERREADY 3
#define IEEE8021SRPRESERVATIONDECLARATIONTYPE_LISTENERREADYFAILED 4

#define IEEE8021SRPRESERVATIONFAILURECODE_NOFAILURE 0
#define IEEE8021SRPRESERVATIONFAILURECODE_INSUFFICIENTBANDWIDTH 1
#define IEEE8021SRPRESERVATIONFAILURECODE_INSUFFICIENTRESOURCES 2
#define IEEE8021SRPRESERVATIONFAILURECODE_INSUFFICIENTTRAFFICCLASSBANDWIDTH 3
#define IEEE8021SRPRESERVATIONFAILURECODE_STREAMIDINUSE 4
#define IEEE8021SRPRESERVATIONFAILURECODE_STREAMDESTINATIONADDRESSINUSE 5
#define IEEE8021SRPRESERVATIONFAILURECODE_STREAMPREEMPTEDBYHIGHERRANK 6
#define IEEE8021SRPRESERVATIONFAILURECODE_LATENCYHASCHANGED 7
#define IEEE8021SRPRESERVATIONFAILURECODE_EGRESSPORTNOTAVBCAPABLE 8
#define IEEE8021SRPRESERVATIONFAILURECODE_USEDIFFERENTDESTINATIONADDRESS 9
#define IEEE8021SRPRESERVATIONFAILURECODE_OUTOFMSRPRESOURCES 10
#define IEEE8021SRPRESERVATIONFAILURECODE_OUTOFMMRPRESOURCES 11
#define IEEE8021SRPRESERVATIONFAILURECODE_CANNOTSTOREDESTINATIONADDRESS 12
#define IEEE8021SRPRESERVATIONFAILURECODE_PRIORITYISNOANSRCLASS 13
#define IEEE8021SRPRESERVATIONFAILURECODE_MAXFRAMESIZETOOLARGE 14
#define IEEE8021SRPRESERVATIONFAILURECODE_MAXFANINPORTSLIMITREACHED 15
#define IEEE8021SRPRESERVATIONFAILURECODE_FIRSTVALUECHANGEDFORSTREAMID 16
#define IEEE8021SRPRESERVATIONFAILURECODE_VLANBLOCKEDONEGRESS 17
#define IEEE8021SRPRESERVATIONFAILURECODE_VLANTAGGINGDISABLEDONEGRESS 18
#define IEEE8021SRPRESERVATIONFAILURECODE_SRCLASSPRIORITYMISMATCH 19

/* notifications */

/* scalars accessible only for notify */

/* object id definitions */
extern oid ieee8021SrpCompliance_oid[11];
extern oid ieee8021SrpConfigurationGroup_oid[11];
extern oid ieee8021SrpLatencyGroup_oid[11];
extern oid ieee8021SrpStreamsGroup_oid[11];
extern oid ieee8021SrpReservationsGroup_oid[11];

/* function prototypes */
/* trap function prototypes */

/* variable function prototypes */
void init_ieee8021SrpMib(void);
void deinit_ieee8021SrpMib(void);
int term_ieee8021SrpMib(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ieee8021SrpMib;
struct ieee8021SrpMib_data *ieee8021SrpMib_create(void);
struct ieee8021SrpMib_data *ieee8021SrpMib_duplicate(struct ieee8021SrpMib_data *);
int ieee8021SrpMib_destroy(struct ieee8021SrpMib_data **);
int ieee8021SrpMib_add(struct ieee8021SrpMib_data *);
void parse_ieee8021SrpMib(const char *, char *);
SNMPCallback store_ieee8021SrpMib;
void refresh_ieee8021SrpMib(int);
FindVarMethod var_ieee8021SrpBridgeBaseTable;
struct ieee8021SrpBridgeBaseTable_data *ieee8021SrpBridgeBaseTable_create(void);
struct ieee8021SrpBridgeBaseTable_data *ieee8021SrpBridgeBaseTable_duplicate(struct ieee8021SrpBridgeBaseTable_data *);
int ieee8021SrpBridgeBaseTable_destroy(struct ieee8021SrpBridgeBaseTable_data **);
int ieee8021SrpBridgeBaseTable_add(struct ieee8021SrpBridgeBaseTable_data *);
int ieee8021SrpBridgeBaseTable_del(struct ieee8021SrpBridgeBaseTable_data *);
void parse_ieee8021SrpBridgeBaseTable(const char *, char *);
SNMPCallback store_ieee8021SrpBridgeBaseTable;
void refresh_ieee8021SrpBridgeBaseTable(int);
FindVarMethod var_ieee8021SrpBridgePortTable;
struct ieee8021SrpBridgePortTable_data *ieee8021SrpBridgePortTable_create(void);
struct ieee8021SrpBridgePortTable_data *ieee8021SrpBridgePortTable_duplicate(struct ieee8021SrpBridgePortTable_data *);
int ieee8021SrpBridgePortTable_destroy(struct ieee8021SrpBridgePortTable_data **);
int ieee8021SrpBridgePortTable_add(struct ieee8021SrpBridgePortTable_data *);
int ieee8021SrpBridgePortTable_del(struct ieee8021SrpBridgePortTable_data *);
void parse_ieee8021SrpBridgePortTable(const char *, char *);
SNMPCallback store_ieee8021SrpBridgePortTable;
void refresh_ieee8021SrpBridgePortTable(int);
FindVarMethod var_ieee8021SrpLatencyTable;
struct ieee8021SrpLatencyTable_data *ieee8021SrpLatencyTable_create(void);
struct ieee8021SrpLatencyTable_data *ieee8021SrpLatencyTable_duplicate(struct ieee8021SrpLatencyTable_data *);
int ieee8021SrpLatencyTable_destroy(struct ieee8021SrpLatencyTable_data **);
int ieee8021SrpLatencyTable_add(struct ieee8021SrpLatencyTable_data *);
int ieee8021SrpLatencyTable_del(struct ieee8021SrpLatencyTable_data *);
void parse_ieee8021SrpLatencyTable(const char *, char *);
SNMPCallback store_ieee8021SrpLatencyTable;
void refresh_ieee8021SrpLatencyTable(int);
FindVarMethod var_ieee8021SrpStreamTable;
struct ieee8021SrpStreamTable_data *ieee8021SrpStreamTable_create(void);
struct ieee8021SrpStreamTable_data *ieee8021SrpStreamTable_duplicate(struct ieee8021SrpStreamTable_data *);
int ieee8021SrpStreamTable_destroy(struct ieee8021SrpStreamTable_data **);
int ieee8021SrpStreamTable_add(struct ieee8021SrpStreamTable_data *);
int ieee8021SrpStreamTable_del(struct ieee8021SrpStreamTable_data *);
void parse_ieee8021SrpStreamTable(const char *, char *);
SNMPCallback store_ieee8021SrpStreamTable;
void refresh_ieee8021SrpStreamTable(int);
FindVarMethod var_ieee8021SrpReservationsTable;
struct ieee8021SrpReservationsTable_data *ieee8021SrpReservationsTable_create(void);
struct ieee8021SrpReservationsTable_data *ieee8021SrpReservationsTable_duplicate(struct ieee8021SrpReservationsTable_data *);
int ieee8021SrpReservationsTable_destroy(struct ieee8021SrpReservationsTable_data **);
int ieee8021SrpReservationsTable_add(struct ieee8021SrpReservationsTable_data *);
int ieee8021SrpReservationsTable_del(struct ieee8021SrpReservationsTable_data *);
void parse_ieee8021SrpReservationsTable(const char *, char *);
SNMPCallback store_ieee8021SrpReservationsTable;
void refresh_ieee8021SrpReservationsTable(int);

WriteMethod write_ieee8021SrpBridgeBaseMsrpEnabledStatus;
WriteMethod write_ieee8021SrpBridgeBaseMsrpTalkerPruning;
WriteMethod write_ieee8021SrpBridgeBaseMsrpMaxFanInPorts;
WriteMethod write_ieee8021SrpBridgeBaseMsrpLatencyMaxFrameSize;
WriteMethod write_ieee8021SrpBridgePortMsrpEnabledStatus;
WriteMethod write_ieee8021SrpBridgePortSrPvid;
#endif				/* __LOCAL_IEEE8021SRPMIB_H__ */