//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// delete_executor.h
//
// Identification: src/include/executor/drop_executor.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

#include "executor/abstract_executor.h"
#include "catalog/catalog.h"
#include "catalog/bootstrapper.h"
#include "planner/drop_plan.h"

#include <vector>

namespace peloton {

namespace storage {
class DataTable;
}

namespace executor {

class DropExecutor : public AbstractExecutor {
 public:
	DropExecutor(const DropExecutor &) = delete;
	DropExecutor &operator=(const DropExecutor &) = delete;
	DropExecutor(DropExecutor &&) = delete;
	DropExecutor &operator=(DropExecutor &&) = delete;

	DropExecutor(const planner::AbstractPlan *node,
                 ExecutorContext *executor_context);

  ~DropExecutor() {}

 protected:
  bool DInit();

  bool DExecute();

 private:
  catalog::Catalog* global_catalog;

};

}  // namespace executor
}  // namespace peloton
