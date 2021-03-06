//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeAppend.h
//
// Identification: src/include/parser/executor/nodeAppend.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeAppend.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeAppend.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEAPPEND_H
#define NODEAPPEND_H

#include "parser/nodes/execnodes.h"

extern AppendState *ExecInitAppend(Append *node, EState *estate, int eflags);
extern TupleTableSlot *ExecAppend(AppendState *node);
extern void ExecEndAppend(AppendState *node);
extern void ExecReScanAppend(AppendState *node);

#endif   /* NODEAPPEND_H */
