#include <raylib.h>
#include <memory>

#include "WindowConstants.hpp"
#include "parser/TextHandler.hpp"
#include "file_system/FileEditor.hpp"

using namespace windowConstants;

int main(int argc, char* argv[]) {

    /* Code left from when IDE, will use in future, but not currently essential
     *
        auto fileName = std::string{"defaultFileName.txt"};
        if(argc > 0) {
            fileName = std::string{argv[0]};
        }
        auto fileEditor = file_system::FileEditor{fileName};
        if(!fileEditor.initFile()) {
            // TODO add log
            return 1;
        }

     */

    InitWindow(WINDOW_LENGTH, WINDOW_HEIGHT, title);
    SetTargetFPS(100);
    auto textHandler = std::make_unique<parser::TextHandler>(parser::TextHandlerFlags{});
    auto text = std::string{};
    auto cursor = std::pair<int32_t , int32_t>{CURSOR_START_X,CURSOR_START_Y};


    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        text = textHandler->readKeyboard();
        auto textConsoleStart = CURSOR_START_Y-DEFAULT_WNINDOW_SPACING;
        DrawLine(0, textConsoleStart, WINDOW_LENGTH, textConsoleStart, WHITE);
        DrawText(text.c_str(), cursor.first, cursor.second, 14, WHITE);

        EndDrawing();
    }

    return 0;
}