/*-------------------------------------------------------------------------
 *
 * frontendlogger.cpp
 * file description
 *
 * Copyright(c) 2015, CMU
 *
 * /peloton/src/backend/logging/frontendlogger.cpp
 *
 *-------------------------------------------------------------------------
 */

#include "backend/logging/logger/frontendlogger.h"
#include "backend/logging/logger/stdoutfrontendlogger.h"

namespace peloton {
namespace logging {

/**
 * @brief Return the frontend logger based on logging type
 * @param logging type can be stdout(debug), aries, peloton
 */
FrontendLogger* FrontendLogger::GetFrontendLogger(LoggingType logging_type){
  FrontendLogger* frontendLogger;

  switch(logging_type){
    case LOGGING_TYPE_STDOUT:{
      frontendLogger = new StdoutFrontendLogger();
    }break;

//    case LOGGER_TYPE_ARIES:{
//      frontendLogger = new AriesFrontendLogger();
//    }break;
//
//    case LOGGER_TYPE_PELOTON:{
//      frontendLogger = new PelotonFrontendLogger();
//    }break;

    default:
    LOG_ERROR("Unsupported frontend logger type");
    break;
  }

  return frontendLogger;
}

}  // namespace logging
}
