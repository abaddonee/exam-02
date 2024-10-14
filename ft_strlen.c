#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



void ft_print_hex(int n) // pareil que ft_putnbr mais en hexa
{
    char *base = "0123456789abcdef";
    if(n >= 16)
    {
        ft_print_hex(n / 16);
        ft_print_hex(n % 16);
    }
    else
    {
        write(1, &base[n], 1);
    }
}

int  ft_atoi(char *str) 
{
   
    int result = 0;
    while(*str)
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return result;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int nbr = ft_atoi(av[1]); // convertir la chaine de caractère en int
        ft_print_hex(nbr); // afficher le nombre en hexa
    }
    write(1, "\n", 1);
    return 0;
}