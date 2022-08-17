#include "struct.h"

void essai_joueur()
{
    Personnes joueur[Max];
    int compteur = 1;

    do
    {
        printf("veuillez entrer le nom du joueur numero %d\n", compteur);
        scanf("%s", joueur[compteur-1].nom);
        printf("veuillez entrer le prenom du joueur numero %d\n", compteur);
        scanf("%s", joueur[compteur-1].prenom);
        printf("bonjour a vous %s %s\n", joueur[compteur-1].nom, joueur[compteur-1].prenom);
        printf("veuillez entrer l'age du joueur numero %d\n", compteur);
        scanf("%d", &joueur[compteur-1].age);
        printf("veuillez entrer le sexe du joueur numero %d\n", compteur);
        scanf("%c", &joueur[compteur-1].sexe);
        compteur++;
    } while(compteur < Max);

    int i;
    for( i = 1; i<= Max; i++)
    {
        printf("Vous vous appelez %s %s; vous avez %d ans et vous etes de sexe %c", joueur[compteur].prenom, joueur[compteur].nom, joueur[compteur].age, joueur[compteur].sexe);

    }
}


void initialiserCoordonnees(Coordonnees* point)
{
    (*point).x = 0;
    (*point).y = 0;
}
