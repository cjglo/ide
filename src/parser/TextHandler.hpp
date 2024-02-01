#pragma once
#include <raylib.h>
#include <sstream>

namespace parser {

    struct TextHandlerFlags {
        
    };

    /*
     * Specific instance to handle the text input from stdin
     */
    class TextHandler {
        public:
        explicit TextHandler(TextHandlerFlags flags);

        [[nodiscard]] std::string readKeyboard();


        private:
        TextHandlerFlags flags;
    };

}