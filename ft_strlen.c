#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



void ft_write_nbr(int nb)
{
    char base[10] = "0123456789"; 
    if(nb >= 10)
    {
        ft_write_nbr(nb / 10);
        ft_write_nbr(nb % 10);
    }
    else
        write(1, &base[nb], 1);
    
}

int main(int argc, char **argv)
{
    int i = 0; // conteurs des arguments
    while(argc) // tant qu'il y a des arguments
    {
        i++; // on incrémente le conteur
        argc--; // on décrémente le nombre d'arguments
    }
    ft_write_nbr(i - 1); // on affiche le nombre d'arguments(sans compter le nom du programme)
    write(1, "\n", 1); // on affiche un retour à la ligne
    return 0;
}