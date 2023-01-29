#ifndef InitGame_h
#define InitGame_h

#include <SDL2/SDL.h> 

int init_Window(int WIDTH, int HEIGHT, SDL_Window** Window, SDL_Renderer** Renderer);
int Destroy_Window(SDL_Window** Window, SDL_Renderer** Renderer);
int Init_All_SDL();
int Quit_All_SDL();


#endif