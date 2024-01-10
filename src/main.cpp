#include <raylib.h>

#include "WindowConstants.hpp"

int main() {

    InitWindow(windowConstants::WINDOW_LENGTH, windowConstants::WINDOW_HEIGHT, windowConstants::title);
    SetTargetFPS(100);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }

    return 0;
}