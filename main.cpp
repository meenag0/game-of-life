#include <raylib.h>

int main() {
    const int WINDOW_WIDTH = 750;
    const int WINDOW_LENGTH = 750;
    int FPS = 12;

    Color grey = {29, 29, 29, 255};

    InitWindow(WINDOW_WIDTH, WINDOW_LENGTH, "gameOfLife");
    SetTargetFPS(FPS);  // ceiling is 12 fps for fpsß
    // simulation loop 
    // includes event handling, updating state & drawing objects


    while(WindowShouldClose() == false){

        // event handling



        // update state

        //drawing
        BeginDrawing();
        EndDrawing();
        ClearBackground(grey);

    };

    CloseWindow();


}