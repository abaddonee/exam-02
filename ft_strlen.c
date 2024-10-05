#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 2;
        int nbr = atoi(argv[1]);
        if(nbr == 1)
        {
            printf("1");
        }
        while (nbr > 1)
        {
            if(is_prime(i) == 1)
            {
                if(nbr % i == 0)
                {
                    printf("%d", i);
                    if (nbr == i)
					    break;
                    printf("*");
                    nbr = nbr / i;
                }
                else
                {
                    i++;
                }     
            }
            else
            {
                i++;
            }
        }
    }
    printf("\n");
    return (0);
}