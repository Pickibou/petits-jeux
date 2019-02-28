/* main.c
Par Basilou
Permet de choisir entre l'éditeur et le jeu lui-même*/
#include<stdlib.h>
#include<stdio.h>
#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL.h>
#include<SDL_image.h>
#include"constantes.h"
#include"jeu.h"
#include"editeur.h"

int main(int argc, char *argv[])

{

    SDL_Surface *ecran = NULL, *menu = NULL;

    SDL_Rect positionMenu;

    SDL_Event event;


    int continuer = 1;


    SDL_Init(SDL_INIT_VIDEO);


    SDL_WM_SetIcon(IMG_Load("caisse.jpg"), NULL); // L'icône doit être chargée avant SDL_SetVideoMode

    ecran = SDL_SetVideoMode(LARGEUR_FENETRE, HAUTEUR_FENETRE, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    SDL_WM_SetCaption("Mario Sokoban", NULL);


    menu = IMG_Load("menu.jpg");

    positionMenu.x = 0;

    positionMenu.y = 0;


    while (continuer)

    {

        SDL_WaitEvent(&event);

        switch(event.type)

        {

            case SDL_QUIT:

                continuer = 0;

                break;

            case SDL_KEYDOWN:

                switch(event.key.keysym.sym)

                {

                    case SDLK_ESCAPE: // Veut arrêter le jeu

                        continuer = 0;

                        break;

                    case SDLK_KP1: // Demande à jouer

                        jouer(ecran);

                        break;

                    case SDLK_KP2: // Demande l'éditeur de niveaux

                        editeur(ecran);

                        break;

                }

                break;

        }


        // Effacement de l'écran

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));

        SDL_BlitSurface(menu, NULL, ecran, &positionMenu);

        SDL_Flip(ecran);

    }


    SDL_FreeSurface(menu);

    SDL_Quit();


    return EXIT_SUCCESS;

}/*
int main ( int argc, char** argv )
{
    // initialize SDL video
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "Unable to init SDL: %s\n", SDL_GetError() );
        return 1;
    }

    // make sure SDL cleans up before exit
    atexit(SDL_Quit);

    // create a new window
    SDL_Surface* screen = SDL_SetVideoMode(640, 480, 16,
                                           SDL_HWSURFACE|SDL_DOUBLEBUF);
    if ( !screen )
    {
        printf("Unable to set 640x480 video: %s\n", SDL_GetError());
        return 1;
    }

    // load an image
    SDL_Surface* bmp = SDL_LoadBMP("cb.bmp");
    if (!bmp)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }

    // centre the bitmap on screen
    SDL_Rect dstrect;
    dstrect.x = (screen->w - bmp->w) / 2;
    dstrect.y = (screen->h - bmp->h) / 2;

    // program main loop
    bool done = false;
    while (!done)
    {
        // message processing loop
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            // check for messages
            switch (event.type)
            {
                // exit if the window is closed
            case SDL_QUIT:
                done = true;
                break;

                // check for keypresses
            case SDL_KEYDOWN:
                {
                    // exit if ESCAPE is pressed
                    if (event.key.keysym.sym == SDLK_ESCAPE)
                        done = true;
                    break;
                }
            } // end switch
        } // end of message processing

        // DRAWING STARTS HERE

        // clear screen
        SDL_FillRect(screen, 0, SDL_MapRGB(screen->format, 0, 0, 0));

        // draw bitmap
        SDL_BlitSurface(bmp, 0, screen, &dstrect);

        // DRAWING ENDS HERE

        // finally, update the screen :)
        SDL_Flip(screen);
    } // end main loop

    // free loaded bitmap
    SDL_FreeSurface(bmp);

    // all is well ;)
    printf("Exited cleanly\n");
    return 0;
}*/
