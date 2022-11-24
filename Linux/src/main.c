#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <raylib.h>


int main(int argc, const char * argv[]) {
	
	// Inintialization
    InitWindow(800, 600, "hello world");
    //SetTargetFPS(61); // FPS cap
	int time = 0;

	// game structures and variables
	Rectangle rect = {50,50,25,25};


	// event loop 
	while (!WindowShouldClose()) {
		
		// rand setup
		srand(time);
		time++;

		// delta time setup 
		float dt = GetFrameTime()*60;


		// GAME 
		BeginDrawing();
		
		// logic 
		rect.x += 2*dt;

		// Drawing 
		ClearBackground(BLACK); // Make the background black
		

		DrawRectangle(rect.x,rect.y,rect.width,rect.height,BLUE);
		

		DrawFPS(2,2);		
	
		EndDrawing();


	}

	CloseWindow();

    return 0;
}
