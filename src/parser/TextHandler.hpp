#pragma once
#include <raylib.h>
#include <sstream>
#include "RuleOfFive.hpp"

namespace parser {

    struct TextHandlerFlags {
        
    };

    /*
     * Specific instance to handle the text input from stdin
     */
class TextHandler : public virtual ruleOfFive::RuleOfFive {
        public:
        explicit TextHandler(TextHandlerFlags flags);

        [[nodiscard]] std::string readKeyboard();


        private:
        std::string current_text;
        TextHandlerFlags flags;
    };

}