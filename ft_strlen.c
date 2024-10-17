#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        unsigned char seen[256] = {0}; // 256 c'est le nombre de caractères possibles
        int i = 0; 
        int j = 0;

        while (av[1][i]) // tant que la chaine de caractère n'est pas finie
        {
            if (!seen[(unsigned char)av[1][i]]) // si le caractère n'a pas été vu
            {
                write(1, &av[1][i], 1); // on l'affiche
                seen[(unsigned char)av[1][i]] = 1; // on le marque comme vu
            }
            i++;
        }
        while (av[2][j]) // tant que la chaine de caractère n'est pas finie
        {
            if (!seen[(unsigned char)av[2][j]])
            {
                write(1, &av[2][j], 1);
                seen[(unsigned char)av[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}


int main(int ac, char **av)
{
    int i;
    int j;
    
    if (ac == 3)
    {
        j = 0;
        i = 0;
        while (av[2][j]) // tant que la chaine de caractère n'est pas finie
        {
            if (av[1][i] == av[2][j]) // si le caractère est le même
                i++; // on passe au caractère suivant
            j++;
        }
        if (av[1][i] == '\0') // si on est arrivé à la fin de la chaine
        {
            i = 0;
            while(av[1][i]) // tant que la chaine de caractère n'est pas finie
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}











 
