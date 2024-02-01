#include "TextHandler.hpp"
#include <iostream>

namespace parser {


TextHandler::TextHandler(TextHandlerFlags flags) : flags(std::move(flags)) {}

std::string TextHandler::readKeyboard() {
    auto ss = std::ostringstream{};
    while(auto key = GetCharPressed()) {
        ss << (char)key;
    }
    return ss.str();
}

}
