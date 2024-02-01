#include <raylib.h>

#include "WindowConstants.hpp"
#include "parser/TextHandler.hpp"

int main() {

    InitWindow(windowConstants::WINDOW_LENGTH, windowConstants::WINDOW_HEIGHT, windowConstants::title);
    SetTargetFPS(100);
    auto textHandler = parser::TextHandler{{}};
    auto text = std::string{};
    auto cursor = std::pair<int32_t , int32_t>{10,10};

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        text += textHandler.readKeyboard();
        DrawText(text.c_str(), cursor.first, cursor.second, 14, BLACK);

        EndDrawing();
    }

    return 0;
}