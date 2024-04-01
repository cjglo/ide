#pragma once

#include "../raylib/include/raylib.h"
#include <sstream>
#include <fstream>
#include "RuleOfFive.hpp"

namespace file_system {

    /*
     * Specific instance to handle File R/W Operations
     */
    class FileEditor : public virtual ruleOfFive::RuleOfFive {
    public:
        explicit FileEditor(std::string fileName);

        bool initFile();
        std::string readFile();
        bool writeFile(const std::string& content);

    private:
        std::string fileName;
    };

}