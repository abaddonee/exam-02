#include <unistd.h>
#include <stdio.h>

int ft_isprime(int nb)
{
    int i  = 2; // 1 n'est pas premier
    int count = 0; 
    if (nb <= 1) //les nombres négatifs ne sont pas premiers
        return 0;
    while (i <= nb) //on divise le nombre par tous les nombres inférieurs à lui
    {
        if (nb % i == 0) // on regarde si le reste de la division est égal à 0
            count++; // si c'est le cas on incrémente le compteur
        i++;
    }
    if (count == 1) // si le compteur est égal à 1 alors le nombre est premier
        return 0;
    else
        return 1; // sinon il ne l'est pas

}


int	ft_atoi(char *str)
{
	int	result = 0; // on initialise le résultat à 0
    while(*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
        str++; // on ignore les espaces
    if (*str == '-')
        return 0; // on retourne 0 si le nombre est négatif

	while (*str)
		result = result * 10 + *str++ - '0'; // on multiplie le résultat par 10 et on ajoute le nombre
	return (result);
}

void ft_write_nb(int nb)
{
    char base[10] = "0123456789";
    if(nb >= 10)
    {
        ft_write_nb(nb / 10);
        ft_write_nb(nb % 10);
    }
    else
    {
        write(1, &base[nb], 1);
    }
}

int  main(int argc, char **argv)
{
    if(argc == 2)
    {
        int result = -1; // on initialise le résultat à -1 pour ne pas prendre en compte le 0
        int nb = ft_atoi(argv[1]); // on convertit l'argument en nombre
        if(nb == 0) // si le nombre est 0 on retourne 0
        {
            write(1, "0\n", 2);
            return 0;
        }
        while(nb > 0)   // on parcourt tous les nombres inférieurs à nb
        {
            if(ft_isprime(nb) == 0) // si le nombre est premier
            { 
                result += nb; // on ajoute le nombre à result
            }
            nb--;
        }
        ft_write_nb(result); // on affiche le résultat
        write(1, "\n", 1); // on affiche un retour à la ligne

    }
    else
        write(1, "0\n", 2); // si le nombre d'arguments est différent de 2 on retourne 0
    return 0;
    

}



