//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeIndexonlyscan.h
//
// Identification: src/include/parser/executor/nodeIndexonlyscan.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeIndexonlyscan.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeIndexonlyscan.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEINDEXONLYSCAN_H
#define NODEINDEXONLYSCAN_H

#include "parser/nodes/execnodes.h"

extern IndexOnlyScanState *ExecInitIndexOnlyScan(IndexOnlyScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecIndexOnlyScan(IndexOnlyScanState *node);
extern void ExecEndIndexOnlyScan(IndexOnlyScanState *node);
extern void ExecIndexOnlyMarkPos(IndexOnlyScanState *node);
extern void ExecIndexOnlyRestrPos(IndexOnlyScanState *node);
extern void ExecReScanIndexOnlyScan(IndexOnlyScanState *node);

#endif   /* NODEINDEXONLYSCAN_H */
