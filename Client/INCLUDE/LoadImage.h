#ifndef LOADIMAGE_H
#define LOADIMAGE_H

#include <SDL2/SDL_image.h>

void load_image(const char * TableauNomImage[], SDL_Surface * Image[], const int NombreImage);
void free_image(SDL_Surface * Image[], const int NombreImage);

#endif