#include <stdio.h>
#include <stdlib.h>

int main()
{
   // printf("Hello world!\n");

//    FILE* fichier = NULL;
//    fichier = fopen("test.txt", "r+");
//    if (fichier != NULL)
//    {
//        // On peut lire et �crire dans le fichier
//        fclose(fichier);
//    }
//    else
//    {
//        // On affiche un message d'erreur si on veut
//        printf("Impossible d'ouvrir le fichier test.txt");
//    }
//
//    FILE* fichier = NULL;
//    int age=0;
//    fichier = fopen("test.txt", "w");
//    if (fichier != NULL)
//    {
//        //fputc('A', fichier); // �criture du caract�re A
//        //fputs("Salut les Z�r0s\nComment allez-vous ?", fichier);
//        // On demande l'�ge
//        printf("Quel age avez-vous ? ");
//        scanf("%d", &age);
//        // On l'�crit dans le fichier
//        fprintf(fichier, "Le Monsieur qui utilise le programme, il a %d ans", age);
//        fclose(fichier);
//    }

    FILE* fichier = NULL;
    int caractereActuel = 0;

    fichier = fopen("test.txt", "r");
    if (fichier != NULL)
    {
    // Boucle de lecture des caract�res un � un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caract�re
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourn� EOF (fin de fichier)
        fclose(fichier);
    }


    return 0;
}
