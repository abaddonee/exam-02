#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int nbr;
    if (a == 0 || b == 0) // si a ou b est égal à 0, on retourne 0
        return (0);
    if(a > b) // on prend le plus grand nombre
        nbr = a;
    else 
        nbr = b;
    while(1) // on boucle jusqu'à trouver le plus petit multiple commun
    { // sa sera le plus petit car le if affiche le premier trouvé
        if (nbr % a == 0 && nbr % b == 0) // si nbr est un multiple de a et b, on retourne nbr
            return (nbr);
        nbr++; // on incrémente nbr
    }
}

int main(int ac, char **av)
{
    int a = 4;
    int b = 6;
    printf("%d", lcm(a, b));
    write(1, "\n", 1);
    return (0);
}