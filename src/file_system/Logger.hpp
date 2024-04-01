#pragma once

#include "../raylib/include/raylib.h"
#include <sstream>
#include <fstream>
#include "RuleOfFive.hpp"

namespace file_system {

    /*
     * Global logger
     */
    class Logger : public virtual ruleOfFive::RuleOfFive {
public:
    Logger(std::string fileName, const std::string& logFile);

    void logInfo();

    void logSevere();

private:
    std::string fileName;
    std::fstream logs;
};
}