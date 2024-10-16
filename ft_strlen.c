#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
		return (0);
	while(*s1) // chaine a parcourir 
	{
		i = 0;
	   	while(s2[i]) // chaine a chercher
		{
			if(*s1 == s2[i]) // si on trouve un caractere de s2 dans s1
				return (char *) s1; // on retourne l'adresse de ce caractere
			i++; // on incremente i pour passer au caractere suivant de s2
		}
		s1++; // on incremente s1 pour passer au caractere suivant	
	}
	return (NULL); // si on a rien trouve on retourne NULL
}



 int main()
 {
    char *s = "Hello World";
    char *charset = "Hello";
    printf("%s\n", ft_strpbrk(s, charset));
    printf("%s\n", strpbrk(s, charset));
    return 0;
 }


