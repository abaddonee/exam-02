#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
    int startbis = end;
    int endbis = start;
	int len = abs((endbis - startbis)) + 1; 
	int *result = (int *)malloc(sizeof(int) * len);
	
	while (i < len) 
	{
		if (startbis < endbis) 
        {
            result[i] = startbis; 
            startbis++; 
            i++; 
        }
        else 
        {
            result[i] = startbis; 
            startbis--; 
            i++; 
        }
		
	}
        return (result);
}




int main()
{
  
    int *result = ft_rrange(1, 3);
    
    int i = 0;
    
    while (result[i] != '\0')
    {
        printf("%d\n", result[i]);
        i++;
    }
    return (0);
}

