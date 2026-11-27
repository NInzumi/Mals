#include "raylib.h"
#include "GLFW/glfw3.h"
#include <stdio.h>
int main() {
  SetConfigFlags(FLAG_WINDOW_TOPMOST | FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_TRANSPARENT | FLAG_WINDOW_MOUSE_PASSTHROUGH);
  InitWindow(200, 200, "food");
  GLFWwindow* w = glfwGetCurrentContext();
  SetTargetFPS(60);
  int z = GetScreenWidth();
  while (!WindowShouldClose()) {
    BeginDrawing();
    printf("%d", z);
    ClearBackground(BLANK);
    EndDrawing();
  }
}
