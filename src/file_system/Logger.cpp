#include "Logger.hpp"

namespace file_system {

    Logger::Logger(std::string fileName, const std::string& logFile) : fileName(std::move(fileName)), logs(logFile)  {
        if(!logs.good()) {
            // need good way of handling this
        }
    }

    void Logger::logInfo() {
        // TODO: This work is left in todo state, as debating switching to a Physics engine instead of IDE
    }

    void Logger::logSevere() {
        // TODO: This work is left in todo state, as debating switching to a Physics engine instead of IDE
    }

}