/****************************************************************
 *								*
 *	Copyright 2001, 2003 Sanchez Computer Associates, Inc.	*
 *								*
 *	This source code contains the intellectual property	*
 *	of its copyright holder(s), and is made available	*
 *	under a license.  If you do not know the terms of	*
 *	the license, please stop and do not read further.	*
 *								*
 ****************************************************************/

/* a few of the following VIEWTAB entries (be it VIEW command related or $VIEW function related) are not documented
 * in the programmer's guide. the reason behind the non-documentation is indicated across each such entry with a "nodoc :" prefix.
 */
VIEWTAB("0",		VTP_NULL, 		VTK_GDSCERT0, 	MV_STR),
VIEWTAB("1",		VTP_NULL, 		VTK_GDSCERT1, 	MV_STR),
VIEWTAB("BREAKMSG",	VTP_NULL | VTP_VALUE, 	VTK_BREAKMSG, 	MV_NM),
VIEWTAB("DEBUG1",	VTP_VALUE | VTP_NULL, 	VTK_DEBUG1, 	MV_STR),
VIEWTAB("DEBUG2",	VTP_VALUE | VTP_NULL, 	VTK_DEBUG2, 	MV_STR),
VIEWTAB("DEBUG3",	VTP_VALUE | VTP_NULL, 	VTK_DEBUG3, 	MV_STR),
VIEWTAB("DEBUG4",	VTP_VALUE | VTP_NULL, 	VTK_DEBUG4, 	MV_STR),
VIEWTAB("FREEBLOCKS",	VTP_DBREGION, 		VTK_BLFREE, 	MV_NM),
VIEWTAB("FREEZE",	VTP_DBREGION, 		VTK_FREEZE, 	MV_NM),
VIEWTAB("GDSCERT",	VTP_NULL | VTP_VALUE, 	VTK_GDSCERT, 	MV_STR),
VIEWTAB("GVACCESS_METHOD", VTP_DBREGION, 	VTK_GVACC_METH, MV_STR),
VIEWTAB("GVFILE", 	VTP_DBREGION, 		VTK_GVFILE, 	MV_STR),
VIEWTAB("GVFIRST", 	VTP_NULL, 		VTK_GVFIRST, 	MV_STR), /* nodoc : archaic and deprecated. use GVNEXT instead */
VIEWTAB("GVNEXT",	VTP_DBREGION, 		VTK_GVNEXT, 	MV_STR),
VIEWTAB("GVSTATS",	VTP_DBREGION, 		VTK_GVSTATS, 	MV_STR),
VIEWTAB("ICHITS",	VTP_NULL, 		VTK_ICHITS, 	MV_NM),
VIEWTAB("ICMISS",	VTP_NULL, 		VTK_ICMISS, 	MV_NM),
VIEWTAB("ICSIZE",	VTP_NULL, 		VTK_ICSIZE, 	MV_NM),
VIEWTAB("JNLACTIVE",	VTP_DBREGION, 		VTK_JNLACTIVE, 	MV_NM),
VIEWTAB("JNLFILE",	VTP_DBREGION, 		VTK_JNLFILE, 	MV_STR),
VIEWTAB("JNLFLUSH",	VTP_DBREGION | VTP_NULL, VTK_JNLFLUSH, 	MV_STR),
VIEWTAB("JNLTRANSACTION", VTP_NULL, 		VTK_JNLTRANSACTION, MV_NM),
VIEWTAB("JNLWAIT",	VTP_NULL, 		VTK_JNLWAIT, 	MV_STR),
VIEWTAB("JOBPID",	VTP_VALUE | VTP_NULL, 	VTK_JOBPID, 	MV_STR),
VIEWTAB("LABELS",	VTP_VALUE | VTP_NULL, 	VTK_LABELS, 	MV_NM),
VIEWTAB("LVDUPCHECK",	VTP_NULL | VTP_VALUE, 	VTK_LVDUPCHECK, MV_STR), /* nodoc : felt unnecessary in all known cases */
VIEWTAB("LVNULLSUBS",	VTP_NULL, 		VTK_LVNULLSUBS, MV_NM),
VIEWTAB("NOISOLATION",	VTP_NULL | VTP_DBKEYLIST, VTK_NOISOLATION, MV_NM),
VIEWTAB("NOLVNULLSUBS", VTP_NULL, 		VTK_NOLVNULLSUBS, MV_NM),
VIEWTAB("NOUNDEF",	VTP_NULL, 		VTK_NOUNDEF, 	MV_NM),
VIEWTAB("PATCODE",	VTP_VALUE | VTP_NULL, 	VTK_PATCODE, 	MV_STR),
VIEWTAB("PATLOAD",	VTP_VALUE, 		VTK_PATLOAD, 	MV_NM),
VIEWTAB("RCHITS",	VTP_NULL, 		VTK_RCHITS, 	MV_NM),
VIEWTAB("RCMISSES",	VTP_NULL, 		VTK_RCMISSES, 	MV_NM),
VIEWTAB("RCSIZE",	VTP_NULL, 		VTK_RCSIZE, 	MV_NM),
VIEWTAB("REGION",	VTP_DBKEY, 		VTK_REGION, 	MV_STR),
VIEWTAB("RTNNEXT",	VTP_RTNAME, 		VTK_RTNEXT, 	MV_STR),
VIEWTAB("SPSIZE",	VTP_NULL, 		VTK_SPSIZE, 	MV_NM),
VIEWTAB("STKSIZ",	VTP_NULL, 		VTK_STKSIZ, 	MV_NM),
VIEWTAB("TESTPOINT",	VTP_VALUE, 		VTK_TESTPOINT, 	MV_NM),
VIEWTAB("TOTALBLOCKS",	VTP_DBREGION, 		VTK_BLTOTAL, 	MV_NM),
VIEWTAB("TRACE", 	VTP_VALUE, 		VTK_TRACE, 	MV_NM),
VIEWTAB("TRANSACTIONID", VTP_VALUE | VTP_NULL, 	VTK_TID, 	MV_STR),
VIEWTAB("UNDEF",	VTP_NULL, 		VTK_UNDEF, 	MV_NM),
VIEWTAB("YCOLLATE",	VTP_VALUE, 		VTK_YCOLLATE, 	MV_NM),  /* nodoc : collation related undocumented feature */
VIEWTAB("YDIRTREE",	VTP_VALUE, 		VTK_YDIRTREE, 	MV_STR), /* nodoc : collation related undocumented feature */
VIEWTAB("YDIRTVAL",	VTP_VALUE, 		VTK_YDIRTVAL, 	MV_STR), /* nodoc : collation related undocumented feature */
VIEWTAB("YLCT",		VTP_NULL | VTP_VALUE, 	VTK_YLCT, 	MV_NM),  /* nodoc : collation related undocumented feature */
VIEWTAB("ZDEFBUFFER",	VTP_DBREGION, 		VTK_ZDEFBUFF, 	MV_NM),	/* nodoc : seems to be an archaic feature of GT.CM GNP */
VIEWTAB("ZDEFCOUNT",	VTP_DBREGION, 		VTK_ZDEFCNT, 	MV_NM),	/* nodoc : seems to be an archaic feature of GT.CM GNP */
VIEWTAB("ZDEFER",	VTP_NULL | VTP_VALUE, 	VTK_ZDEFER, 	MV_NM),	/* nodoc : seems to be an archaic feature of GT.CM GNP */
VIEWTAB("ZDEFSIZE",	VTP_DBREGION, 		VTK_ZDEFSIZE, 	MV_NM),	/* nodoc : seems to be an archaic feature of GT.CM GNP */
VIEWTAB("ZDIR_FORM",	VTP_NULL | VTP_VALUE, 	VTK_ZDIR_FORM, 	MV_NM),
VIEWTAB("ZFLUSH",	VTP_NULL, 		VTK_ZFLUSH, 	MV_NM)
