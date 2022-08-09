
void affiche(int *tableau, int tailleTableau)
{
    int i;
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int i, somme = 0;
    for(i =0; i < tailleTableau; i++)
    {
        somme = somme + tableau[i];
    }
    return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i;
    double somme = 0, moyenne = 0;
    for(i =0; i < tailleTableau; i++)
    {
        somme = somme + tableau[i];
    }
    moyenne = somme/tailleTableau;
    return moyenne;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i;
    printf("\n Les elements du tableau copie sont les suivants: \n");
    for(i =0; i < tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
        printf("%d \n", tableauCopie[i]);
    }
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int i;
    for(i = 0; i < tailleTableau; i++)
    {
        if(tableau[i] > valeurMax)
        {
            tableau[i] = 0;
        }
    }
    printf("\n le tableau final est donne par \n ");
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}


void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i;
    for(i = 0; i < tailleTableau; i++)
    {
        int j =i;
        while(tableau[j] > tableau[j+1] && j < tailleTableau)
        {
            int tampon = tableau[j];
            tableau[j] = tableau[j+1];
            tableau[j+1] = tampon;
            j++;
        }
    }
    printf("\n le tableau final est donne par \n ");
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}
