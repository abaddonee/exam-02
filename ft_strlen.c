#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_write_nb(int nb)
{
    char base[] = "0123456789";
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

int ft_atoi(char *str)
{
    int resuly = 0;
    while(*str)
    {
        resuly = resuly * 10 + *str - '0';
        str++;
    }
    return resuly;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 1;
        int nbr = ft_atoi(av[1]); 
        while(i <= 9)
        {
            ft_write_nb(i);
            write(1, " x ", 3);
            ft_write_nb(nbr);
            write(1, " = ", 3);
            ft_write_nb(i * nbr);
            write(1, "\n", 1);
            i++;
        }
    }
    else
    {
        write(1, "\n", 1);
    }
    return 0;
    
}