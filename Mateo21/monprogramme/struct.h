#define Max 1

typedef struct Personne Personnes;
struct Personne
{
    char nom[100];
    char prenom[100];
    int age;
    char sexe; // Bool�en : 1 = gar�on, 0 = fille
};

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x; // Abscisses
    int y; // Ordonn�es
};

typedef enum Volume Volume;
enum Volume
{
    FAIBLE, MOYEN, FORT
};

