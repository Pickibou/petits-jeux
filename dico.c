/*Jeu de Pendu
dico.c
-------
Ces fonctions piochent un mot dans le fichier dictionnaire pour le jeu du Pendu*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h
#include"dico.h"
int piocherMot(char* motPioche)
{
    FILE*dico=NULL;//pointeur de fichier allant contenir le fichier
    int nombreMot=0,numMotChoisi=0,i=0;
    int caractereLu=0;
    dico=fopen("dico.txt","r");//On ouvre le dictionnaire en lecture seule
    //v�rification de l'ouverture du dictionnaire
    if(dico==NULL)//hypoth�se n'�gative
    {
        printf("Impossible d'ouvrir le fichier!\n");
        return 0;//0 pour indiquer que la fonction a �chou�
        //la fonction s'arr�te imm�diatement
    }
        do//on compte le nombre de mots dans le fichier
        {
            caractereLu=fgetc(dico)
            if(caractereLu=='\n')
                nombreMot++;
        }while(caractereLu!=EOF);
        numMotChoisi=nombreAleatoire(nombreMot);//prise d'un mot au hasard
        //on lit le fichier depuis le d�but et on s'arr�te lorsque l'on est au bon mot
        rewind(dico);
        while numChoisi>0)
        caractereLu=fgetc(dico);
        if(caractereLu=='\n')
            numChoisi--;//sert � poser le curseur au bon endroit
        fgets(motPioche,100,dico);//pour lire le mot
        motPioche[strlen(motPioche)-1]='\0';//pour virer le\n � la fin
        fclose(dico);//pour fermer le fichier
        return 1;//retourne 1 quand tout s'est bien pass�
}
int nombreAleatoire(int nombreMax)
{
    rand(time(NULL));
    return(rand()%nombreMax);
}
