#include <stdio.h>
#include <stdlib.h>
//
//void decoupeMinutes(int heures, int minutes)
//{
//    heures = minutes / 60; // 90 / 60 = 1
//    minutes = minutes % 60; // 90 % 60 = 30
//}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
/* Attention à ne pas oublier de mettre une étoile devant le
nom
des pointeurs ! Comme ça, vous pouvez modifier la valeur des
variables,
et non leur adresse ! Vous ne voudriez pas diviser des adresses,
n'est-ce pas ? ;o) */
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}
