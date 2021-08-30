#include "raylib.h"
#include "Mover.h"

int main()
{
    InitWindow(800, 600, "Random Walker");
    ClearBackground(BLACK);

    Mover walker;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        walker.draw();
        walker.update();

        EndDrawing();
    }

    CloseWindow();
}