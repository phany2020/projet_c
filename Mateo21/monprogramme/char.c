int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char caractereActuel = 0;
    do
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;
    }
    while(caractereActuel != '\0'); // On boucle tant qu'on n'est pas arriv� � l'\0
    nombreDeCaracteres--; // On retire 1 caract�re de long pour ne pas compter le caract�re \0
    return nombreDeCaracteres;
}
