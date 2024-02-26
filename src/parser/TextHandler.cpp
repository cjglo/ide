#include "TextHandler.hpp"
#include <iostream>

namespace parser {


TextHandler::TextHandler(TextHandlerFlags flags) : current_text(), flags(std::move(flags)) {}

std::string TextHandler::readKeyboard() {
    auto ss = std::ostringstream{};
    ss << current_text;
    if(IsKeyPressed(KEY_BACKSPACE) && !ss.str().empty()) {
        auto text = ss.str();
        text.pop_back();
        ss.str("");
        ss << text;
    }
    while(auto key = GetCharPressed()) {
            ss << (char)key;
    }
    current_text = ss.str();
    return current_text;
}

}
