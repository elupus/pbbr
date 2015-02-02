/*****************************************************************************

 @(#) src/snmp/ieee8021fqtssmib.h

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

#ifndef __LOCAL_IEEE8021FQTSSMIB_H__
#define __LOCAL_IEEE8021FQTSSMIB_H__

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
struct ieee8021FqtssMib_data {
	struct ieee8021FqtssMib_data *ieee8021FqtssMib_old;
	uint ieee8021FqtssMib_rsvs;
	uint ieee8021FqtssMib_tsts;
	uint ieee8021FqtssMib_sets;
	uint ieee8021FqtssMib_request;
};
struct ieee8021FqtssBapTable_data {
	struct ieee8021FqtssBapTable_data *ieee8021FqtssBapTable_old;
	uint ieee8021FqtssBapTable_rsvs;
	uint ieee8021FqtssBapTable_tsts;
	uint ieee8021FqtssBapTable_sets;
	uint ieee8021FqtssBapTable_request;
	uint ieee8021FqtssBapTable_refs;
	uint ieee8021FqtssBapTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021FqtssBAPTrafficClass;	/* NoAccess */
	ulong ieee8021FqtssDeltaBandwidth;	/* Create */
	ulong ieee8021FqtssOperIdleSlopeMs;	/* ReadOnly */
	ulong ieee8021FqtssOperIdleSlopeLs;	/* ReadOnly */
	ulong ieee8021FqtssAdminIdleSlopeMs;	/* Create */
	ulong ieee8021FqtssAdminIdleSlopeLs;	/* Create */
	long ieee8021FqtssBapRowStatus;	/* Create */
};
struct ieee8021FqtssTxSelectionAlgorithmTable_data {
	struct ieee8021FqtssTxSelectionAlgorithmTable_data *ieee8021FqtssTxSelectionAlgorithmTable_old;
	uint ieee8021FqtssTxSelectionAlgorithmTable_rsvs;
	uint ieee8021FqtssTxSelectionAlgorithmTable_tsts;
	uint ieee8021FqtssTxSelectionAlgorithmTable_sets;
	uint ieee8021FqtssTxSelectionAlgorithmTable_request;
	uint ieee8021FqtssTxSelectionAlgorithmTable_refs;
	uint ieee8021FqtssTxSelectionAlgorithmTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021FqtssTrafficClass;	/* NoAccess */
	ulong ieee8021FqtssTxSelectionAlgorithmID;	/* ReadWrite */
};
struct ieee8021FqtssSrpRegenOverrideTable_data {
	struct ieee8021FqtssSrpRegenOverrideTable_data *ieee8021FqtssSrpRegenOverrideTable_old;
	uint ieee8021FqtssSrpRegenOverrideTable_rsvs;
	uint ieee8021FqtssSrpRegenOverrideTable_tsts;
	uint ieee8021FqtssSrpRegenOverrideTable_sets;
	uint ieee8021FqtssSrpRegenOverrideTable_request;
	uint ieee8021FqtssSrpRegenOverrideTable_refs;
	uint ieee8021FqtssSrpRegenOverrideTable_id;
	ulong ieee8021BridgeBaseComponentId;	/* NoAccess */
	ulong ieee8021BridgeBasePort;	/* NoAccess */
	ulong ieee8021FqtssSrClassPriority;	/* NoAccess */
	ulong ieee8021FqtssPriorityRegenOverride;	/* ReadWrite */
	long ieee8021FqtssSrpBoundaryPort;	/* ReadOnly */
};

/* storage declarations */
extern struct ieee8021FqtssMib_data *ieee8021FqtssMibStorage;
extern struct header_complex_index *ieee8021FqtssBapTableStorage;
extern struct header_complex_index *ieee8021FqtssTxSelectionAlgorithmTableStorage;
extern struct header_complex_index *ieee8021FqtssSrpRegenOverrideTableStorage;

/* enum definitions from the covered mib sections */

#define IEEE8021FQTSSSRPBOUNDARYPORT_TRUE        1
#define IEEE8021FQTSSSRPBOUNDARYPORT_FALSE       2

/* notifications */

/* scalars accessible only for notify */

/* object id definitions */
extern oid ieee8021FqtssCompliance_oid[11];
extern oid ieee8021FqtssBapGroup_oid[11];
extern oid ieee8021FqtssTxSelectionAlgorithmGroup_oid[11];
extern oid ieee8021FqtssBoundaryPortGroup_oid[11];

/* function prototypes */
/* trap function prototypes */

/* variable function prototypes */
void init_ieee8021FqtssMib(void);
void deinit_ieee8021FqtssMib(void);
int term_ieee8021FqtssMib(int majorID, int minorID, void *serverarg, void *clientarg);
FindVarMethod var_ieee8021FqtssMib;
struct ieee8021FqtssMib_data *ieee8021FqtssMib_create(void);
struct ieee8021FqtssMib_data *ieee8021FqtssMib_duplicate(struct ieee8021FqtssMib_data *);
int ieee8021FqtssMib_destroy(struct ieee8021FqtssMib_data **);
int ieee8021FqtssMib_add(struct ieee8021FqtssMib_data *);
void parse_ieee8021FqtssMib(const char *, char *);
SNMPCallback store_ieee8021FqtssMib;
void refresh_ieee8021FqtssMib(int);
FindVarMethod var_ieee8021FqtssBapTable;
struct ieee8021FqtssBapTable_data *ieee8021FqtssBapTable_create(void);
struct ieee8021FqtssBapTable_data *ieee8021FqtssBapTable_duplicate(struct ieee8021FqtssBapTable_data *);
int ieee8021FqtssBapTable_destroy(struct ieee8021FqtssBapTable_data **);
int ieee8021FqtssBapTable_add(struct ieee8021FqtssBapTable_data *);
int ieee8021FqtssBapTable_del(struct ieee8021FqtssBapTable_data *);
void parse_ieee8021FqtssBapTable(const char *, char *);
SNMPCallback store_ieee8021FqtssBapTable;
void refresh_ieee8021FqtssBapTable(int);
FindVarMethod var_ieee8021FqtssTxSelectionAlgorithmTable;
struct ieee8021FqtssTxSelectionAlgorithmTable_data *ieee8021FqtssTxSelectionAlgorithmTable_create(void);
struct ieee8021FqtssTxSelectionAlgorithmTable_data *ieee8021FqtssTxSelectionAlgorithmTable_duplicate(struct ieee8021FqtssTxSelectionAlgorithmTable_data *);
int ieee8021FqtssTxSelectionAlgorithmTable_destroy(struct ieee8021FqtssTxSelectionAlgorithmTable_data **);
int ieee8021FqtssTxSelectionAlgorithmTable_add(struct ieee8021FqtssTxSelectionAlgorithmTable_data *);
int ieee8021FqtssTxSelectionAlgorithmTable_del(struct ieee8021FqtssTxSelectionAlgorithmTable_data *);
void parse_ieee8021FqtssTxSelectionAlgorithmTable(const char *, char *);
SNMPCallback store_ieee8021FqtssTxSelectionAlgorithmTable;
void refresh_ieee8021FqtssTxSelectionAlgorithmTable(int);
FindVarMethod var_ieee8021FqtssSrpRegenOverrideTable;
struct ieee8021FqtssSrpRegenOverrideTable_data *ieee8021FqtssSrpRegenOverrideTable_create(void);
struct ieee8021FqtssSrpRegenOverrideTable_data *ieee8021FqtssSrpRegenOverrideTable_duplicate(struct ieee8021FqtssSrpRegenOverrideTable_data *);
int ieee8021FqtssSrpRegenOverrideTable_destroy(struct ieee8021FqtssSrpRegenOverrideTable_data **);
int ieee8021FqtssSrpRegenOverrideTable_add(struct ieee8021FqtssSrpRegenOverrideTable_data *);
int ieee8021FqtssSrpRegenOverrideTable_del(struct ieee8021FqtssSrpRegenOverrideTable_data *);
void parse_ieee8021FqtssSrpRegenOverrideTable(const char *, char *);
SNMPCallback store_ieee8021FqtssSrpRegenOverrideTable;
void refresh_ieee8021FqtssSrpRegenOverrideTable(int);

WriteMethod write_ieee8021FqtssDeltaBandwidth;
WriteMethod write_ieee8021FqtssAdminIdleSlopeMs;
WriteMethod write_ieee8021FqtssAdminIdleSlopeLs;
WriteMethod write_ieee8021FqtssBapRowStatus;
WriteMethod write_ieee8021FqtssTxSelectionAlgorithmID;
WriteMethod write_ieee8021FqtssPriorityRegenOverride;
#endif				/* __LOCAL_IEEE8021FQTSSMIB_H__ */
