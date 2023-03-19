<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "header.h"
#define coucou() printf("coucou");
#define RACONTER_SA_VIE() printf("Coucou, je m'appelle Brice\n"); \
printf("J'habite a Nice\n"); \
printf("J'aime la glisse\n");
#define MAJEUR(age) if (age >= 18) \
printf("Vous etes majeur\n");\
else printf("Vous etes mineur\n");


int triple(int nombre)
{
    return 3 * nombre;
}

double conversion(double euros)
{
    double francs = 0;
    francs = 655.957 * euros;
    return francs;
}

double conversionInverse(double francs)
{
    double euros = 0;
    euros = 655.957 / francs;
    return euros;
}

double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}

void punition(int nombreDeLignes)
{
    int i;
    for (i = 0 ; i < nombreDeLignes ; i++)
    {
        printf("Je ne dois pas recopier mon voisin\n");
    }
}

int menu()
{
    int choix = 0;
    while (choix < 1 || choix > 4)
    {
        printf("Menu :\n");
        printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
        printf("2 : Concombres sucres a la sauce de myrtilles enrobee de chocolat\n");
        printf("3 : Escalope de kangourou saignante et sa gelee aux fraises poivree\n");
        printf("4 : La surprise du Chef (j'en salive d'avance...)\n");
        printf("Votre choix ? ");
        scanf("%d", &choix);
    }
    return choix;
}




int main()
{
    /*printf("Bonjour Stephanie-Claude");
    return 0;
    */

    /*int nombreDeVies = 5; // Au départ, le joueur a 5 vies
    printf("Vous avez %d vies\n", nombreDeVies);
    printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
    nombreDeVies = 4; // Il vient de perdre une vie !
    printf("Ah desole, il ne vous reste plus que %d vies maintenant!\n\n", nombreDeVies);
    return 0;
    */

    /*int nombreDeVies = 5, niveau = 1;
    printf("Vous avez %d vies et vous etes au niveau n° %d\n",nombreDeVies, niveau);
    return 0;
    */

    /*int age = 0; // On initialise la variable à 0
    printf("Quel age avez-vous ? ");
    scanf("%d", &age); // On demande d'entrer l'âge avec scanf
    printf("Ah ! Vous avez donc %d ans !\n\n", age);
    return 0;
    */

    /*int resultat = 0;
    resultat = 5 + 3;
    printf("5 + 3 = %d", resultat);
    return 0;
    */

    /*int resultat = 0;
    resultat = 5 / 2;
    printf ("5 / 2 = %d", resultat);
    return 0;
    */

    /*double resultat = 0;
    resultat = 5.0 / 2.0;
    printf ("5 / 2 = %f", resultat);
    return 0;
    */

    /*int resultat = 0, nombre1 = 0, nombre2 = 0;
    // On demande les nombres 1 et 2 à l'utilisateur :
    printf("Entrez le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entrez le nombre 2 : ");
    scanf("%d", &nombre2);
    // On fait le calcul :
    resultat = nombre1 + nombre2;
    // Et on affiche l'addition à l'écran :
    printf ("%d + %d = %d\n", nombre1, nombre2, resultat);
    return 0;
    */

    /*double absolu = 0, nombre = -27;
    printf("Entrer une valeur positive ou negative");
    scanf("%Lf", &nombre);
    absolu = fabs(nombre); // absolu vaudra 27
    printf("La valeur absolu est %f", absolu);
    */

    /*double dessus = 0, nombre = 52.71;
    printf("Entrer une valeur positive ou negative");
    scanf("%Lf", &nombre);
    dessus = ceil(nombre); // dessus vaudra 53
    printf("La valeur arrondie est %f", dessus);
    */

    /*double resultat = 0, nombre = 2;
    resultat = pow(nombre, 3); // resultat vaudra 2^3 = 8
    printf("La valeur arrondie est %f", resultat);
    */

    /*double resultat = 0, nombre = 100;
    resultat = sqrt(nombre); // resultat vaudra 10
    printf("La valeur arrondie est %f", resultat);
    */

//    int age = 2;
//    if (age >= 18)
//    {
//        printf ("Vous etes majeur !\n");
//    }
//    else if ( age > 4 ) // Sinon, si l'âge est au moins supérieur à 4
//    {
//        printf ("Bon t'es pas trop jeune quand meme...");
//    }
//    else // Sinon...
//    {
//        printf ("Aga gaa aga gaaa"); // Langage bébé, vous pouvez pas comprendre
//    }

//    if (1)
//    {
//        printf("C'est vrai");
//    }
//    else
//    {
//        printf("C'est faux");
//    }
//
//    if (0)
//    {
//        printf("C'est vrai");
//    }
//    else
//    {
//        printf("C'est faux");
//    }

//    int age = 20;
//    int majeur = 0;
//    majeur = age >= 18;
//    printf("Majeur vaut : %d\n", majeur);


//    int numero = 0;
//    printf("=== MENU ===\n");
//    printf("1. Royal Cheese\n");
//    printf("2. Mc Deluxe\n");
//    printf("3. Mc Bacon\n");
//    printf("4. Big Mac\n");
//
//    printf("Votre choix ?\n\n");
//    scanf("%d", &numero);
//
//    switch(numero)
//    {
//        case 1:
//            printf("Vous allez etre servi le Royal Cheese");
//            break;
//        case 2:
//            printf("Vous gouterez a notre Mc Deluxe");
//            break;
//        case 3:
//            printf("Le Mc Bacon sera votre meilleur choix");
//            break;
//        case 4:
//            printf("Hola, le Big Mac !!! vous vous en mordrez les doigts");
//            break;
//        default:
//            printf("dommage alors");
//            break;
//    }
//

//    int autorisation = 0, age = 12;
//    autorisation = (age >= 18) ? 1 : 0;
//    printf("%d", autorisation);

//    int nombreEntre = 0;
//    while (nombreEntre != 47)
//    {
//        printf("\nTapez le nombre 47 ! ");
//        scanf("%d", &nombreEntre);
//    }

//    int compteur = 0;
//    while (compteur < 10)
//    {
//        printf("Salut les Zeros !\n");
//        printf("La variable compteur vaut %d\n", compteur);
//        compteur++;
//    }

//    int compteur = 0;
//    do
//    {
//        printf("Salut les Zeros !\n");
//        compteur++;
//    } while (compteur < 10);


//    int compteur;
//    for (compteur = 0 ; compteur < 10 ; compteur++)
//    {
//        printf("Salut les Zeros !\n");
//    }

   // PlusOuMoins();

//    int nombreEntre = 0, nombreTriple = 0;
//    printf("Entrez un nombre... ");
//    scanf("%d", &nombreEntre);
//
//    nombreTriple = triple(nombreEntre);
//    printf("Le triple de ce nombre est %d\n", nombreTriple);


//    printf("10 euros = %fF\n", conversion(10));
//    printf("50 euros = %fF\n", conversion(50));
//    printf("100 euros = %fF\n", conversion(100));
//    printf("200 euros = %fF\n", conversion(200));
//
//    printf("10 francs = %fF\n", conversionInverse(10));
//    printf("50 francs = %fF\n", conversionInverse(50));
//    printf("100 francs = %fF\n", conversionInverse(100));
//    printf("200 francs = %fF\n", conversionInverse(200));


//    punition(50);
//
//    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
//    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
//    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

//    switch (menu())
//    {
//        case 1:
//            printf("Vous avez pris le poulet\n");
//            break;
//        case 2:
//            printf("Vous avez pris les concombres\n");
//            break;
//        case 3:
//            printf("Vous avez pris l'escalope\n");
//            break;
//        case 4:
//            printf("Vous avez pris la surprise du Chef. Vous etes un sacre aventurier dites donc !\n");
//        break;
//    }
//
//    int heures = 0, minutes = 90;
//    decoupeMinutes(heures, minutes);
//    printf("%d heures et %d minutes \n", heures, minutes);
//
//    int age = 10;
//    printf("La variable age vaut : %d \n", age);
//    printf("L'adresse de la variable age est : %p \n", &age);
//
//    int *pointeurSurAge = &age;
//    printf("%d", *pointeurSurAge);

//    int nombre = 5;
//    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
//    printf("%d \n", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse
//
//    int heures = 0, minutes = 90;
//    // On envoie l'adresse de heures et minutes
//    decoupeMinutes(&heures, &minutes);
//    // Cette fois, les valeurs ont été modifiées !
//    printf("%d heures et %d minutes", heures, minutes);
//
//    int tableau[4], i = 0;
//    tableau[0] = 10;
//    tableau[1] = 23;
//    tableau[2] = 505;
//    tableau[3] = 8;
//    for (i = 0 ; i < 4 ; i++)
//    {
//        printf("%d\n", tableau[i]);
//    }

//    int tableau[4], i = 0;
//    // Initialisation du tableau
//    for (i = 0 ; i < 4 ; i++)
//    {
//        tableau[i] = 0;
//    }
//    // Affichage de ses valeurs pour vérifier
//    for (i = 0 ; i < 4 ; i++)
//    {
//        printf("%d\n", tableau[i]);
//    }
//
//    int pableau[4] = {0, 0, 0, 0};
//    for (i = 0 ; i < 4 ; i++)
//    {
//        printf("%d\n", pableau[i]);
//    }



//    int tableau[4] = {10, 15, 3};
//    // On affiche le contenu du tableau
//    affiche(tableau, 4);
//    printf("\n La somme des elements du tableau donne %d", sommeTableau(tableau,4));
//    printf("\n La moyenne des elements du tableau donne %f", moyenneTableau(tableau,4));
//
//    int copie_tab[4]={0};
//    copie(tableau,copie_tab,4);
//    maximumTableau(tableau, 4, 10);
//    ordonnerTableau(tableau, 4);

//    char lettre = 'A';
//    printf("%d\n", lettre);
//
//    char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le \0
//    // Initialisation de la chaîne (on écrit les caractères un à un en mémoire)
//    chaine[0] = 'S';
//    chaine[1] = 'a';
//    chaine[2] = 'l';
//    chaine[3] = 'u';
//    chaine[4] = 't';
//    chaine[5] = '\0';
//    // Affichage de la chaîne grâce au %s du printf
//    printf("%s", chaine);

//    char chaine[] = "Salut"; // La taille du tableau chaine est automatiquement calculée
//    printf("%s", chaine);
//
//    char prenom[100];
//    printf("\n Comment t'appelles-tu petit Zero ? ");
//    scanf("%s", prenom);
//    printf("Salut %s, je suis heureux de te rencontrer !", prenom);

//    char chaine[] = "Salut";
//    int longueurChaine = 0;
//    // On récupère la longueur de la chaîne dans longueurChaine
//    longueurChaine = strlen(chaine);
//    // On affiche la longueur de la chaîne
//    printf("La chaine %s fait %d caracteres de long", chaine, longueurChaine);

//    char chaine[] = "Salut";
//    int longueur = 0;
//    longueur = longueurChaine(chaine);
//    printf("La chaine %s fait %d caracteres de long", chaine, longueur);

//    char chaine[] = "Texte", copie[100] = {0};
//    strcpy(copie, chaine); // On copie "chaine" dans "copie"
//    // Si tout s'est bien passé, la copie devrait être identique à chaine
//    printf("chaine vaut : %s\n", chaine);
//    printf("copie vaut : %s\n", copie);
//
//
//    char chaine1[100] = "Salut ", chaine2[] = "Mateo21";
//    strcat(chaine1, chaine2); // On concatène chaine2 dans chaine1
//    // Si tout s'est bien passé, chaine1 vaut "Salut Mateo21"
//    printf("chaine1 vaut : %s\n", chaine1);
//    // chaine2 n'a pas changé :
//    printf("chaine2 vaut toujours : %s\n", chaine2);

//    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";
//    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
//    {
//        printf("Les chaines sont identiques\n");
//    }
//    else
//    {
//        printf("Les chaines sont differentes\n");
//    }

//    char chaine[] = "Texte de test", *suiteChaine = NULL;
//    suiteChaine = strrchr(chaine, 'd');
//    if (suiteChaine != NULL) // Si on a trouvé quelque chose
//    {
//        printf("Voici la fin de la chaine a partir du premier d : %s", suiteChaine);
//    }
//
//    char *suiteChaine;
//    // On cherche la première occurrence de x, d ou s dans "Texte de test"
//    suiteChaine = strpbrk("Texte de test", "xds");
//    if (suiteChaine != NULL)
//    {
//        printf("Voici la fin de la chaine a partir du premier des caracteres trouves : %s", suiteChaine);
//    }

//    char *suiteChaine;
//    // On cherche la première occurrence de "test" dans "Texte de test" :
//    suiteChaine = strstr("Texte de test", "test");
//    if (suiteChaine != NULL)
//    {
//        printf("Premiere occurrence de test dans Texte de test : %s\n", suiteChaine);
//    }

//    char chaine[100];
//    int age = 15;
//    // On écrit "Tu as 15 ans" dans chaine
//    sprintf(chaine, "Tu as %d ans !", age);
//    // On affiche chaine pour vérifier qu'elle contient bien cela :
//    printf("%s", chaine);
//
//    coucou()
//    RACONTER_SA_VIE()
//    MAJEUR(12)


//    Coordonnees point;
//    point.x = 10;
//    point.y = 20;
//
//    Personne utilisateur;
//
//    printf("Quel est votre nom ? ");
//    scanf("%s", utilisateur.nom);
//    printf("Votre prenom ? ");
//    scanf("%s", utilisateur.prenom);
//    printf("Vous vous appelez %s %s", utilisateur.prenom, utilisateur.nom);


   // essai_joueur();

    Coordonnees monPoint;
    initialiserCoordonnees(&monPoint);

//    Volume musique = MOYEN;
//    printf("%s", musique);

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int triple(int nombre)
{
    return 3 * nombre;
}

double conversion(double euros)
{
    double francs = 0;
    francs = 655.957 * euros;
    return francs;
}

double conversionInverse(double francs)
{
    double euros = 0;
    euros = 655.957 / francs;
    return euros;
}

double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}

void punition(int nombreDeLignes)
{
    int i;
    for (i = 0 ; i < nombreDeLignes ; i++)
    {
        printf("Je ne dois pas recopier mon voisin\n");
    }
}

int menu()
{
    int choix = 0;
    while (choix < 1 || choix > 4)
    {
        printf("Menu :\n");
        printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
        printf("2 : Concombres sucres a la sauce de myrtilles enrobee de chocolat\n");
        printf("3 : Escalope de kangourou saignante et sa gelee aux fraises poivree\n");
        printf("4 : La surprise du Chef (j'en salive d'avance...)\n");
        printf("Votre choix ? ");
        scanf("%d", &choix);
    }
    return choix;
}



int main()
{
    /*printf("Bonjour Stephanie-Claude");
    return 0;
    */

    /*int nombreDeVies = 5; // Au départ, le joueur a 5 vies
    printf("Vous avez %d vies\n", nombreDeVies);
    printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
    nombreDeVies = 4; // Il vient de perdre une vie !
    printf("Ah desole, il ne vous reste plus que %d vies maintenant!\n\n", nombreDeVies);
    return 0;
    */

    /*int nombreDeVies = 5, niveau = 1;
    printf("Vous avez %d vies et vous etes au niveau n° %d\n",nombreDeVies, niveau);
    return 0;
    */

    /*int age = 0; // On initialise la variable à 0
    printf("Quel age avez-vous ? ");
    scanf("%d", &age); // On demande d'entrer l'âge avec scanf
    printf("Ah ! Vous avez donc %d ans !\n\n", age);
    return 0;
    */

    /*int resultat = 0;
    resultat = 5 + 3;
    printf("5 + 3 = %d", resultat);
    return 0;
    */

    /*int resultat = 0;
    resultat = 5 / 2;
    printf ("5 / 2 = %d", resultat);
    return 0;
    */

    /*double resultat = 0;
    resultat = 5.0 / 2.0;
    printf ("5 / 2 = %f", resultat);
    return 0;
    */

    /*int resultat = 0, nombre1 = 0, nombre2 = 0;
    // On demande les nombres 1 et 2 à l'utilisateur :
    printf("Entrez le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entrez le nombre 2 : ");
    scanf("%d", &nombre2);
    // On fait le calcul :
    resultat = nombre1 + nombre2;
    // Et on affiche l'addition à l'écran :
    printf ("%d + %d = %d\n", nombre1, nombre2, resultat);
    return 0;
    */

    /*double absolu = 0, nombre = -27;
    printf("Entrer une valeur positive ou negative");
    scanf("%Lf", &nombre);
    absolu = fabs(nombre); // absolu vaudra 27
    printf("La valeur absolu est %f", absolu);
    */

    /*double dessus = 0, nombre = 52.71;
    printf("Entrer une valeur positive ou negative");
    scanf("%Lf", &nombre);
    dessus = ceil(nombre); // dessus vaudra 53
    printf("La valeur arrondie est %f", dessus);
    */

    /*double resultat = 0, nombre = 2;
    resultat = pow(nombre, 3); // resultat vaudra 2^3 = 8
    printf("La valeur arrondie est %f", resultat);
    */

    /*double resultat = 0, nombre = 100;
    resultat = sqrt(nombre); // resultat vaudra 10
    printf("La valeur arrondie est %f", resultat);
    */

//    int age = 2;
//    if (age >= 18)
//    {
//        printf ("Vous etes majeur !\n");
//    }
//    else if ( age > 4 ) // Sinon, si l'âge est au moins supérieur à 4
//    {
//        printf ("Bon t'es pas trop jeune quand meme...");
//    }
//    else // Sinon...
//    {
//        printf ("Aga gaa aga gaaa"); // Langage bébé, vous pouvez pas comprendre
//    }

//    if (1)
//    {
//        printf("C'est vrai");
//    }
//    else
//    {
//        printf("C'est faux");
//    }
//
//    if (0)
//    {
//        printf("C'est vrai");
//    }
//    else
//    {
//        printf("C'est faux");
//    }

//    int age = 20;
//    int majeur = 0;
//    majeur = age >= 18;
//    printf("Majeur vaut : %d\n", majeur);


//    int numero = 0;
//    printf("=== MENU ===\n");
//    printf("1. Royal Cheese\n");
//    printf("2. Mc Deluxe\n");
//    printf("3. Mc Bacon\n");
//    printf("4. Big Mac\n");
//
//    printf("Votre choix ?\n\n");
//    scanf("%d", &numero);
//
//    switch(numero)
//    {
//        case 1:
//            printf("Vous allez etre servi le Royal Cheese");
//            break;
//        case 2:
//            printf("Vous gouterez a notre Mc Deluxe");
//            break;
//        case 3:
//            printf("Le Mc Bacon sera votre meilleur choix");
//            break;
//        case 4:
//            printf("Hola, le Big Mac !!! vous vous en mordrez les doigts");
//            break;
//        default:
//            printf("dommage alors");
//            break;
//    }
//

//    int autorisation = 0, age = 12;
//    autorisation = (age >= 18) ? 1 : 0;
//    printf("%d", autorisation);

//    int nombreEntre = 0;
//    while (nombreEntre != 47)
//    {
//        printf("\nTapez le nombre 47 ! ");
//        scanf("%d", &nombreEntre);
//    }

//    int compteur = 0;
//    while (compteur < 10)
//    {
//        printf("Salut les Zeros !\n");
//        printf("La variable compteur vaut %d\n", compteur);
//        compteur++;
//    }

//    int compteur = 0;
//    do
//    {
//        printf("Salut les Zeros !\n");
//        compteur++;
//    } while (compteur < 10);


//    int compteur;
//    for (compteur = 0 ; compteur < 10 ; compteur++)
//    {
//        printf("Salut les Zeros !\n");
//    }

   // PlusOuMoins();

//    int nombreEntre = 0, nombreTriple = 0;
//    printf("Entrez un nombre... ");
//    scanf("%d", &nombreEntre);
//
//    nombreTriple = triple(nombreEntre);
//    printf("Le triple de ce nombre est %d\n", nombreTriple);


//    printf("10 euros = %fF\n", conversion(10));
//    printf("50 euros = %fF\n", conversion(50));
//    printf("100 euros = %fF\n", conversion(100));
//    printf("200 euros = %fF\n", conversion(200));
//
//    printf("10 francs = %fF\n", conversionInverse(10));
//    printf("50 francs = %fF\n", conversionInverse(50));
//    printf("100 francs = %fF\n", conversionInverse(100));
//    printf("200 francs = %fF\n", conversionInverse(200));


//    punition(50);
//
//    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
//    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
//    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

    switch (menu())
    {
        case 1:
            printf("Vous avez pris le poulet\n");
            break;
        case 2:
            printf("Vous avez pris les concombres\n");
            break;
        case 3:
            printf("Vous avez pris l'escalope\n");
            break;
        case 4:
            printf("Vous avez pris la surprise du Chef. Vous etes un sacre aventurier dites donc !\n");
        break;
    }

    return 0;
}
>>>>>>> efd4969ffad2478dcf4d4f6478b118eb34ce896e
