/*
constantes.h
Par Basilou
Pour le TP Mario Sokoban
Définit toutes les constantes pour tout le proramme*/

#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED
 #define TAILLE_BLOC         34 // Taille d'un bloc (carré) en pixels

    #define NB_BLOCS_LARGEUR    12

    #define NB_BLOCS_HAUTEUR    12

    #define LARGEUR_FENETRE     TAILLE_BLOC * NB_BLOCS_LARGEUR

    #define HAUTEUR_FENETRE     TAILLE_BLOC * NB_BLOCS_HAUTEUR


    enum {HAUT, BAS, GAUCHE, DROITE};

    enum {VIDE, MUR, CAISSE, OBJECTIF, MARIO, CAISSE_OK};


#endif // CONSTANTES_H_INCLUDED
