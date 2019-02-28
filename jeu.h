/* Jeu.h
Par Basilou
définit la fonction jouer principale du jeu*/
#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include"constantes.h"

void jouer(SDL_Surface*ecran);
void deplacerJoueur(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect *pos, int direction);
void deplacerCaisse(int *premiereCase, int *secondeCase);


#endif // JEU_H_INCLUDED
