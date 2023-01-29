#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

int Init_All_SDL(){

        // Initialisation de SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("Erreur d'initialisation de SDL : %s\n", SDL_GetError());
        return 1;
    }

    // Initialisation de SDL_image
    if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG) {
        printf("Erreur d'initialisation de SDL_image : %s\n", IMG_GetError());
        return 1;
    }

}

int init_Window(int WIDTH, int HEIGHT, SDL_Window** Window, SDL_Renderer** Renderer){

    // Initialisation de la fenêtre d'affichage du programme
    *Window = SDL_CreateWindow("Arcade Projet C", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    SDL_SetWindowSize(*Window, WIDTH, HEIGHT);
    if (*Window == NULL) {
        printf("Erreur de création de la fenêtre : %s\n", SDL_GetError());
        return 1;
    }

    *Renderer = SDL_CreateRenderer(*Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    // Effacer l'écran
    SDL_RenderClear(*Renderer);

    // Afficher l'image
    SDL_RenderPresent(*Renderer);

    return 0;
}

int Destroy_Window(SDL_Window** Window, SDL_Renderer** Renderer){

            // Fermeture du rendu SDL //
    SDL_DestroyRenderer(*Renderer);

        // Fermeture de la fenêtre //
    SDL_DestroyWindow(*Window);

}

int Quit_All_SDL(){

        // Fermeture de SDL_image //
    IMG_Quit();
    
        // Fermeture de SDL //
    SDL_Quit();
}
