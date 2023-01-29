#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>


void Jeu(SDL_Window** Window, SDL_Renderer** Renderer){

        // Initialisation des booléen 

    SDL_bool FonctProg = SDL_TRUE;
    SDL_bool FonctWindow = SDL_TRUE;
    
    // Initialisation de la boucle qui servira à quitter le programme !

    while(FonctProg == SDL_TRUE){
        // Création de l'évènement Event. //

        SDL_Event Event;

        // Boucle qui permet d'écouter les évènements entrants ! //
        while(SDL_PollEvent(&Event)){
            switch (Event.type){

                    // Cette case est le cas d'arrêt de la boucle qui écoute les évènements ! //

                case SDL_QUIT:
                    FonctProg = SDL_FALSE;
                    break;

                case SDL_MOUSEMOTION:
                    break;
                case SDL_KEYDOWN:
                    
                    switch(Event.key.keysym.sym){

                            // Cette case permet d'offrir à l'utilisateur 2 types d'interface de fenêtre (Full Screen ou en 1280x720) //

                        case SDLK_F12:
                            if(FonctWindow == SDL_TRUE){
                                SDL_SetWindowFullscreen( *Window, SDL_WINDOW_FULLSCREEN );
                                FonctWindow = SDL_FALSE;
                            }else{
                                SDL_SetWindowFullscreen( *Window, 0 );
                                FonctWindow = SDL_TRUE;

                            }
                            continue;

                        default:
                            break;
                    }
 
                // Ignore les autres touches //

            default:
                break;
            }
        }
        SDL_RenderClear(*Renderer);
        SDL_RenderPresent(*Renderer);

    }

}

