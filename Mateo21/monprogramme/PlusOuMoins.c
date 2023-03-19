<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int PlusOuMoins(){
    int niveau = 1;

    void jouerDouble(int MAX)
    {
        int nombreMystere;
        printf("Joueur 1 : Entrer un nombre entre 1 et %d \n", MAX);
        scanf("%d", &nombreMystere);
        system("cls");
        printf("*******************************\n");
        printf("******* Mode 2joueurs *********\n");

        printf("Joueur 2 : ");
        int nombreChoisi = 0, compteurCoups = 1;
                do{
                    printf("Quel est le nombre ?\n");
                    scanf("%d", &nombreChoisi);

                    if(nombreChoisi < nombreMystere)
                    {
                        printf("C'est plus ! \n");
                    }
                    else if(nombreChoisi == nombreMystere)
                    {
                        printf("Bravo, Vous avez trouve le nombre mystere en %d coups!!! \n", compteurCoups);
                    }
                    else
                    {
                        printf("C'est moins ! \n");
                    }
                    compteurCoups ++;
                }while(nombreChoisi != nombreMystere);

    }

    void jouer(const int MAX)
    {
        int nombreMystere = 0;
                const int MIN = 1;//, MAX = 100;

                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                int nombreChoisi = 0, compteurCoups = 1;
                do{
                    printf("Quel est le nombre ?\n");
                    scanf("%d", &nombreChoisi);

                    if(nombreChoisi < nombreMystere)
                    {
                        printf("C'est plus ! \n");
                    }
                    else if(nombreChoisi == nombreMystere)
                    {
                        printf("Bravo, Vous avez trouve le nombre mystere en %d coups!!! \n", compteurCoups);
                    }
                    else
                    {
                        printf("C'est moins ! \n");
                    }
                    compteurCoups ++;
                }while(nombreChoisi != nombreMystere);
    }


    void modeUnJoueur(int valeur_maximale)
    {
        system("cls");
        printf("*******************************\n");
        printf("******* Mode 1joueur **********\n");
        int continuerPartie = 1;
            while(continuerPartie == 1)
            {
                jouer(valeur_maximale);
                printf("Voulez vous faire une autre partie? Taper 1 si oui et autre au cas contraire \n");
                scanf("%d", &continuerPartie);
            }

            if(continuerPartie != 1)
            {
                printf("Bravo et a la prochaine fois.");
                PlusOuMoins();
            }
    }

    void modeDeuxJoueurs(int valeur_maximale)
    {
        system("cls");
        printf("*******************************\n");
        printf("******* Mode 2joueurs *********\n");
        int continuerPartie = 1;
            while(continuerPartie == 1)
            {
                jouerDouble(valeur_maximale);
                printf("Voulez vous faire une autre partie? Taper 1 si oui et autre au cas contraire \n");
                scanf("%d", &continuerPartie);
            }

            if(continuerPartie != 1)
            {
                printf("Bravo et a la prochaine fois.");
                PlusOuMoins();
            }
    }


    system("cls");
    printf("*******************************\n");
    printf("******* Mode de jeu ***********\n");
    printf("1. Mode 1 joueur\n");
    printf("2. Mode 2 joueurs\n");
    printf("3. Quitter\n");
    printf("Choisir un mode\n");
    int modeChoisi = 1;
    scanf("%d",&modeChoisi);


    switch(modeChoisi)
    {
        case 1:
            system("cls");
            printf("*******************************\n");
            printf("*********** Niveau ************\n");
            printf("1. Facile : entre 1 et 100 \n");
            printf("2. Normal : entre 1 et 1000\n");
            printf("3. Difficile : entre 1 et 10000\n");
            printf("Choisir un niveau\n");

            //int niveau = 1;
            scanf("%d",&niveau);

            switch(niveau)
            {
                case 1:
                    //int MAX = 100;
                    modeUnJoueur(100);
                    break;

                case 2:
                    //int MAX = 1000;
                    modeUnJoueur(1000);
                    break;

                case 3:
                    //int MAX = 10000;
                    modeUnJoueur(10000);
                    break;

                default:
                    printf(" Choisir un niveau de difficulte \n");
                    niveau = 1;
            }

            break;

        case 2:
            system("cls");
            printf("*******************************\n");
            printf("*********** Niveau ************\n");
            printf("1. Facile : entre 1 et 100 \n");
            printf("2. Normal : entre 1 et 1000\n");
            printf("3. Difficile : entre 1 et 10000\n");
            printf("Choisir un niveau\n");

//            int niveau = 1;
            scanf("%d",&niveau);

            switch(niveau)
            {
                case 1:
                    //int MAX = 100;
                    modeDeuxJoueurs(100);
                    break;

                case 2:
                    //int MAX = 1000;
                    modeDeuxJoueurs(1000);
                    break;

                case 3:
                    //int MAX = 10000;
                    modeDeuxJoueurs(10000);
                    break;

                default:
                    printf(" Choisir un niveau de difficulte \n");
                    niveau = 1;
            }

            break;

        case 3:
            exit(1);
            break;

        default:
            printf(" Choisir un mode \n");
            PlusOuMoins();
    }




    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int PlusOuMoins(){
    int niveau = 1;

    void jouerDouble(int MAX)
    {
        int nombreMystere;
        printf("Joueur 1 : Entrer un nombre entre 1 et %d \n", MAX);
        scanf("%d", &nombreMystere);
        system("cls");
        printf("*******************************\n");
        printf("******* Mode 2joueurs *********\n");

        printf("Joueur 2 : ");
        int nombreChoisi = 0, compteurCoups = 1;
                do{
                    printf("Quel est le nombre ?\n");
                    scanf("%d", &nombreChoisi);

                    if(nombreChoisi < nombreMystere)
                    {
                        printf("C'est plus ! \n");
                    }
                    else if(nombreChoisi == nombreMystere)
                    {
                        printf("Bravo, Vous avez trouve le nombre mystere en %d coups!!! \n", compteurCoups);
                    }
                    else
                    {
                        printf("C'est moins ! \n");
                    }
                    compteurCoups ++;
                }while(nombreChoisi != nombreMystere);

    }

    void jouer(const int MAX)
    {
        int nombreMystere = 0;
                const int MIN = 1;//, MAX = 100;

                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                int nombreChoisi = 0, compteurCoups = 1;
                do{
                    printf("Quel est le nombre ?\n");
                    scanf("%d", &nombreChoisi);

                    if(nombreChoisi < nombreMystere)
                    {
                        printf("C'est plus ! \n");
                    }
                    else if(nombreChoisi == nombreMystere)
                    {
                        printf("Bravo, Vous avez trouve le nombre mystere en %d coups!!! \n", compteurCoups);
                    }
                    else
                    {
                        printf("C'est moins ! \n");
                    }
                    compteurCoups ++;
                }while(nombreChoisi != nombreMystere);
    }


    void modeUnJoueur(int valeur_maximale)
    {
        system("cls");
        printf("*******************************\n");
        printf("******* Mode 1joueur **********\n");
        int continuerPartie = 1;
            while(continuerPartie == 1)
            {
                jouer(valeur_maximale);
                printf("Voulez vous faire une autre partie? Taper 1 si oui et autre au cas contraire \n");
                scanf("%d", &continuerPartie);
            }

            if(continuerPartie != 1)
            {
                printf("Bravo et a la prochaine fois.");
                PlusOuMoins();
            }
    }

    void modeDeuxJoueurs(int valeur_maximale)
    {
        system("cls");
        printf("*******************************\n");
        printf("******* Mode 2joueurs *********\n");
        int continuerPartie = 1;
            while(continuerPartie == 1)
            {
                jouerDouble(valeur_maximale);
                printf("Voulez vous faire une autre partie? Taper 1 si oui et autre au cas contraire \n");
                scanf("%d", &continuerPartie);
            }

            if(continuerPartie != 1)
            {
                printf("Bravo et a la prochaine fois.");
                PlusOuMoins();
            }
    }


    system("cls");
    printf("*******************************\n");
    printf("******* Mode de jeu ***********\n");
    printf("1. Mode 1 joueur\n");
    printf("2. Mode 2 joueurs\n");
    printf("3. Quitter\n");
    printf("Choisir un mode\n");
    int modeChoisi = 1;
    scanf("%d",&modeChoisi);


    switch(modeChoisi)
    {
        case 1:
            system("cls");
            printf("*******************************\n");
            printf("*********** Niveau ************\n");
            printf("1. Facile : entre 1 et 100 \n");
            printf("2. Normal : entre 1 et 1000\n");
            printf("3. Difficile : entre 1 et 10000\n");
            printf("Choisir un niveau\n");

            //int niveau = 1;
            scanf("%d",&niveau);

            switch(niveau)
            {
                case 1:
                    //int MAX = 100;
                    modeUnJoueur(100);
                    break;

                case 2:
                    //int MAX = 1000;
                    modeUnJoueur(1000);
                    break;

                case 3:
                    //int MAX = 10000;
                    modeUnJoueur(10000);
                    break;

                default:
                    printf(" Choisir un niveau de difficulte \n");
                    niveau = 1;
            }

            break;

        case 2:
            system("cls");
            printf("*******************************\n");
            printf("*********** Niveau ************\n");
            printf("1. Facile : entre 1 et 100 \n");
            printf("2. Normal : entre 1 et 1000\n");
            printf("3. Difficile : entre 1 et 10000\n");
            printf("Choisir un niveau\n");

//            int niveau = 1;
            scanf("%d",&niveau);

            switch(niveau)
            {
                case 1:
                    //int MAX = 100;
                    modeDeuxJoueurs(100);
                    break;

                case 2:
                    //int MAX = 1000;
                    modeDeuxJoueurs(1000);
                    break;

                case 3:
                    //int MAX = 10000;
                    modeDeuxJoueurs(10000);
                    break;

                default:
                    printf(" Choisir un niveau de difficulte \n");
                    niveau = 1;
            }

            break;

        case 3:
            exit(1);
            break;

        default:
            printf(" Choisir un mode \n");
            PlusOuMoins();
    }




    return 0;
}
>>>>>>> efd4969ffad2478dcf4d4f6478b118eb34ce896e
