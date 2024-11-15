#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    const int SCREEN_WIDTH = 1920;
    const int SCREEN_HEIGHT = 1080;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (WindowShouldClose() == false){
        BeginDrawing();
        
        DrawLine(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, PURPLE);

        EndDrawing();
    }

    CloseWindow();
}
