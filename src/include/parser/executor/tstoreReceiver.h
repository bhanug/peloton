//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// tstoreReceiver.h
//
// Identification: src/include/parser/executor/tstoreReceiver.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * tstoreReceiver.h
 *	  prototypes for tstoreReceiver.c
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/tstoreReceiver.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef TSTORE_RECEIVER_H
#define TSTORE_RECEIVER_H

#include "parser/tcop/dest.h"
#include "parser/utils/tuplestore.h"


extern DestReceiver *CreateTuplestoreDestReceiver(void);

extern void SetTuplestoreDestReceiverParams(DestReceiver *self,
								Tuplestorestate *tStore,
								MemoryContext tContext,
								bool detoast);

#endif   /* TSTORE_RECEIVER_H */
