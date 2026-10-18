#include <raylib.h>

#define windowWidth 800
#define windowHeight 600

typedef struct{
    int posx;
    int posy;
    int griping;
} hand;

int main()
{
    InitWindow(windowWidth, windowHeight, "Candy Distribution");

    hand handy = {0, 0, 0};

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World!", windowWidth/3, windowHeight/3, 16, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
