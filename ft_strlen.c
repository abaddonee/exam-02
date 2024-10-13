#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1; // abs elle retourne la valeur absolue d'un nombre (en positif)
                                // + 1 pour inclure le dernier nombre
	int *result = (int *)malloc(sizeof(int) * len);
	
	while (i < len) // tant que i est inférieur à la longueur
	{
		if (start < end) // si le début est inférieur à la fin
		{
			result[i] = start; // on stocke le début dans le tableau
			start++; // on incrémente le début
			i++; // on incrémente i
		}
		else // sinon
		{
			result[i] = start; // on stocke le début dans le tableau
			start--; // on décrémente le début
			i++; // on incrémente i
		}
	}
        return (result);
}

int *ft_range(int start, int end)
{
	int i = 0;
    
	int len = abs((end - start)) + 1; // abs elle retourne la valeur absolue d'un nombre (en positif)
                                // + 1 pour inclure le dernier nombre
	int *result = (int *)malloc(sizeof(int) * len);
	
	while (i < len) // tant que i est inférieur à la longueur
	{
		if (start < end) // si le début est inférieur à la fin
		{
			result[i] = start; // on stocke le début dans le tableau
			start++; // on incrémente le début
			i++; // on incrémente i
		}
		else // sinon
		{
			result[i] = start; // on stocke le début dans le tableau
			start--; // on décrémente le début
			i++; // on incrémente i
		}
	}
        return (result);
}


int main()
{
  
    int *result = ft_range(6, 3);
    
    int i = 0;
    
    while (result[i] != '\0')
    {
        printf("%d\n", result[i]);
        i++;
    }
    return (0);
}

