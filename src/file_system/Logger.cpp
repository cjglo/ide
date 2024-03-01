#include "Logger.hpp"

namespace file_system {

    Logger::Logger(std::string fileName, const std::string& logFile) : fileName(std::move(fileName)), logs(logFile)  {
        if(!logs.good()) {
            // need good way of handling this
        }
    }

    void Logger::logInfo();

    void Logger::logSevere();

    Logger::~Logger();

}