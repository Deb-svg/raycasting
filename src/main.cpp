#include <SDL2/SDL.h>
#include <cmath>
#include <iostream>
#include "../include/raycaster.hpp"

// Player properties initialization
double posX = 22, posY = 12; // Initial player position
double dirX = -1, dirY = 0; // Initial player direction
double planeX = 0, planeY = 0.66; // Camera plane

// World map definition
int worldMap[mapWidth][mapHeight] = {
    // [1s for walls, 0s for empty spaces]
};

void handleInput(bool& running) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            running = false;
        }
        // Add player movement controls here
    }
}

void render(SDL_Renderer* renderer) {
    // Clear screen
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Implement raycasting logic and rendering here

    // Present renderer
    SDL_RenderPresent(renderer);
}

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Raycaster", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    if (!window) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        return 1;
    }

    bool running = true;
    while (running) {
        handleInput(running);
        render(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
