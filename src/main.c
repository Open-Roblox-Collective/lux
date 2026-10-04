#include <raylib.h>

int main(void)
{
    InitWindow(1280, 720, "Lux");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Lux", 50, 50, 40, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}