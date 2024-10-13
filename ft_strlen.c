#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char to_lower(char c) 
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return c;
}




int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (str == NULL || str_base < 2 || str_base > 16) //base 2 a 16
		return 0;

	if (str[i] == '-') // verifications de signe
	{
		sign = -1;
		i++;
	}

	while (str[i]) // boucle pour parcourir la chaine
	{
		if (str[i] >= '0' && str[i] <= '9') // si c'est un chiffre
            result = result * str_base + str[i] - '0'; // on multiplie le resultat par la base et on ajoute le chiffre
        else if (to_lower(str[i]) >= 'a' && to_lower(str[i]) <= 'f') // si c'est une lettre
            result = result * str_base + to_lower(str[i]) - 'a' + 10;   // on multiplie le resultat par la base et on ajoute la lettre
        else // si c'est un caractere non valide
            break; // on sort de la boucle
        i++; // on incremente i
	}
	return (result * sign); // on retourne le resultat avec le signe
}



int main(void)
{
    const char *str = "-C";
    int str_base = 16;
    int result = ft_atoi_base(str, str_base);
    
    printf("Result: %d\n", result);
    
    return 0;
}



