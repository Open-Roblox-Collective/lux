#include <raylib.h>

int fps = 60; // variable fps idk

int main(void)
{
    InitWindow(1280, 720, "Lux");

    SetTargetFPS(fps);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("orc presents: the fucking lux project", 50, 50, 40, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}