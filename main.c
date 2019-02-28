#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int niveauDifficulte()
{

int choix=0;
while(choix < 1 || choix > 3)
{
  printf("Quel niveau de difficulté choisissez-vous?\n 1. Facile\n 2. Moyen\n 3. Dur\n");
  scanf("%d",&choix);
}
return choix;

}
int main(int argc,char*argv[])
{
    int nombreMystere, nombreDonne=0,compteur=0;
const int MIN=1;
 int nombreMax;
int continuerPartie=1;
while(continuerPartie)
{
 switch(niveauDifficulte())
{case 1:
    nombreMax=100;
    break;
    case 2:
        nombreMax=1000;
        break;
        case 3:
            nombreMax=10000;
            break;
}
srand(time(NULL));
nombreMystere=(rand()%(nombreMax-MIN+1))+MIN;
do
{compteur++;
    printf("Quel est le nombre-mystère?\n");
    scanf("%d",&nombreDonne);
    if(nombreDonne<nombreMystere)
    printf("C'est plus!\n");
    else if(nombreDonne>nombreMystere)
        printf("C'est moins!\n");
        else
 printf("Bravo, vous avez trouvez le nombre-mystère en %d coups!!\n",compteur);
}while(nombreDonne!=nombreMystere);
printf("Voulez-vous refaire une partie?\n Pour arrêter tapez 0\n Pour continuer tapez un autre nombre\n");
scanf("%d",&continuerPartie);

}
    return 0;
}
