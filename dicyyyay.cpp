#include <iostream>
#include "raylib.h"
#include <ctime>
#include <cstdlib>


class Dice {
private:
    int sides;
public:
    Dice(int sides = 6) : sides(sides) {}
    int roll() const { return rand() % sides + 1; }
};


int main() {
    const int screenWidth = 800, screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Dice Roller");
    SetTargetFPS(60);


    Dice dice;
    srand(time(0));
    int result = 1;


    Texture2D diceTextures[6];
    for (int i = 0; i < 6; i++) {
        diceTextures[i] = LoadTexture(TextFormat("all_sides_of_dice/Dice-%d.png", i + 1));
     }



    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_SPACE)) result = dice.roll();


        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Press SPACE to roll the dice.", 250, 50, 20, BLACK);
        DrawTexture(diceTextures[result - 1], (screenWidth - diceTextures[result - 1].width) / 2, (screenHeight - diceTextures[result - 1].height) / 2, WHITE);
        EndDrawing();
    }


    for (int i = 0; i < 6; i++) UnloadTexture(diceTextures[i]);
    CloseWindow();
    return 0;
}
