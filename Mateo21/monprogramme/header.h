//définition des prototypes des fonctions uniquement

//void decoupeMinutes(int heures, int minutes);
void triplePointeur(int *pointeurSurNombre);
void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
void ordonnerTableau(int tableau[], int tailleTableau);

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x; // Abscisses
    int y; // Ordonnées
};

typedef struct Personne;
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
    int age;
    int garcon; // Booléen : 1 = garçon, 0 = fille
};
