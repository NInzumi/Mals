#include "raylib.h"
#include "GLFW/glfw3.h"
#include <stdio.h>
int main() {
  SetConfigFlags(FLAG_WINDOW_TOPMOST | FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_TRANSPARENT);
  InitWindow(200, 200, "food");
  GLFWwindow* w = glfwGetCurrentContext();
  SetTargetFPS(60);
  Vector2 DisplayScale = GetWindowScaleDPI();
  int z = GetScreenWidth();
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RED);
    DrawTriangle((Vector2){0,0},(Vector2){0,GetScreenHeight()}, (Vector2){DisplayScale.x * GetScreenWidth() / 2,DisplayScale.y * GetScreenHeight() / 2}, YELLOW);
    DrawRectangle(0, 0, 50, 50, BLUE);
    DrawRectangle(60, 60, 50 * DisplayScale.x, 50 * DisplayScale.y, PURPLE);
    EndDrawing();
  }
}
