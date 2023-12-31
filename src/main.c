#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_events.h>

int main(int argc, char ** argv) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *win = SDL_CreateWindow("title", 30, 30, 600, 500, SDL_WINDOW_SHOWN);
    SDL_Surface * screen = SDL_GetWindowSurface(win);
    bool run = true;
    while(run) {
        SDL_Event ev;
        while(SDL_PollEvent(&ev)) {
            switch(ev.type) {
                case SDL_QUIT:
                    run = false;
                    break;
            }
        }
    }
    SDL_DestroyWindow(win);
    SDL_Quit();
}
