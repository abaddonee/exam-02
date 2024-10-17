#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    // Trouver la longueur de la chaîne
    while (str[i] != '\0')
        i++;
    
    // Réduire i pour pointer sur le dernier caractère
    i--;

    // Inverser les caractères
    while (j < i)
    {
        // Échanger les caractères
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        // Avancer j et reculer i
        j++;
        i--;
    }

    return (str);
}


int main()
{
    char str[] = "Hello World!";
    printf("%s\n", ft_strrev(str));
    return 0;
}
   
 
