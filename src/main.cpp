#include "raylib.h"

int main() {
	InitWindow(800, 600, "Shitty Geometry Dash");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Hello!", 190, 200, 20, RED);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}