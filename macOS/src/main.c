#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <raylib.h>


int main(int argc, const char * argv[]) {
	
    // init variables
    InitWindow(800, 600, "game");
	// SetTargetFPS(61); // FPS cap
	int time = 0;

    // game variables
    Rectangle rect = {20,40,20,20};
    
    
    // main loop
    while (!WindowShouldClose()) {
		
		// randomizer setup
		srand(time);
		time++;
		
		// delta time setup
		float dt = GetFrameTime()*60;

		// Display setup
        BeginDrawing();
        ClearBackground(BLACK); 

		// Logic
		rect.x += 2*dt;

		// Drawing 
		DrawRectangle(rect.x,rect.y,rect.width,rect.height,BLUE);
        
        DrawFPS(2, 2); // Drawing FPS on to the screen
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
