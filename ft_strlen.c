#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int main (int argc, char **argv)
{
    if (argc == 3)
    {
        int nbr1 = atoi(argv[1]); 
        int nbr2 = atoi(argv[2]);
        if(nbr1 == 0 || nbr2 == 0)
        {
            printf("\n"); // si un des deux nombre est égale à 0, on ne peut pas faire de pgcd
            return 0;
        }
        while(nbr1 != nbr2) // tant que les deux nombres sont différents
        {
            if(nbr1 > nbr2) // on soustrait le plus grand au plus petit
            {
                nbr1 -= nbr2; // on soustrait parce que le pgcd est le reste de la division euclidienne
            }
            else 
            {
                nbr2 -= nbr1;
            }
        }
        printf("%d", nbr1); // on affiche le pgcd car les deux nombres sont égaux
        
    }
    printf("\n");
    return 0;


}