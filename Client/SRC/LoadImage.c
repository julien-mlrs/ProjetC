#include <SDL2/SDL_image.h>
#include "../INCLUDE/LoadImage.h"

void load_image(const char * TableauNomImage[], SDL_Surface * Image[], const int NombreImage){
    if(IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG){
        // A remplir //
    }
    for(int i = 0; i < NombreImage; i++){
        Image[i] = IMG_Load(TableauNomImage[i]);
        if(Image[i] == NULL){
            printf("Error lors du chargement de l' image  \"%s\" : %s\n", TableauNomImage[i], IMG_GetError());
        }
    }
}

void free_image(SDL_Surface * Image[], const int NombreImage){
    for(int i = 0; i < NombreImage; i++){
        SDL_FreeSurface(Image[i]);
    }
}