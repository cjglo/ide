#include "../raylib/include/raylib.h"
#include <memory>

#include "WindowConstants.hpp"
#include "parser/TextHandler.hpp"
#include "file_system/FileEditor.hpp"

int main(int argc, char* argv[]) {

    auto fileName = std::string{"defaultFileName.txt"};
    if(argc > 0) {
        fileName = std::string{argv[0]};
    }
    auto fileEditor = file_system::FileEditor{fileName};
    if(!fileEditor.initFile()) {
        // TODO add log
        return 1;
    }

    InitWindow(windowConstants::WINDOW_LENGTH, windowConstants::WINDOW_HEIGHT, windowConstants::title);
    SetTargetFPS(100);
    auto textHandler = std::make_unique<parser::TextHandler>(parser::TextHandlerFlags{});
    auto text = fileEditor.readFile();
    auto cursor = std::pair<int32_t , int32_t>{10,10};


    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        text = textHandler->readKeyboard();
        DrawText(text.c_str(), cursor.first, cursor.second, 14, BLACK);

        EndDrawing();
    }

    if(!fileEditor.writeFile(text)) {
        // TODO add severe log and dump contents
    }

    return 0;
}