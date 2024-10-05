#include  <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
    if(nbr == -2147483648) // verification du max int
		return("-2147483648\0");
    int len = 0;
    int temp = nbr;
    if (temp < 0) // verification si nb est negatif
    {
        len++;
    }
    
    while(temp) //compte la longeure de la chaine de caractere
    {
        temp /= 10;
        len++;
    }
    char *str = (char *)malloc(sizeof(char) * (len + 1)); 
    if (!str)
        return (NULL);

    str[len] = '\0'; //ajout du caractere de fin de chaine
    if(nbr == 0) // si le nombre est 0
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0) // mettre le signe - si le nombre est negatif
    {
        str[0] = '-';
        nbr = -nbr;
    }
    // core de la fonction
    while(nbr) // ajout des chiffres dans la chaine de caractere
    {
        len--;
        str[len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);
}


int main()
{
    int i = 679;
    printf("%s\n", ft_itoa(i));
    return 0;
}