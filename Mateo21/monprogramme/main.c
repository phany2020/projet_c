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
