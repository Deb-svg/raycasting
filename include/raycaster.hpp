#ifndef RAYCASTER_HPP
#define RAYCASTER_HPP

#include <SDL2/SDL.h>

// Screen dimensions
const int screenWidth = 640;
const int screenHeight = 480;

// Map dimensions
const int mapWidth = 24;
const int mapHeight = 24;

// Player properties
extern double posX, posY; // Player's position
extern double dirX, dirY; // Player's direction
extern double planeX, planeY; // Camera plane

// World map
extern int worldMap[mapWidth][mapHeight];

// Function declarations
void handleInput(bool& running);
void render(SDL_Renderer* renderer);

#endif // RAYCASTER_HPP
