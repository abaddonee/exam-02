#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// si un nombre peux etre diviser par 2 jusqua ce qu'il reste 1 alors il est une puissance de 2
int power_of_2(int n)
{
    if(n == 0)
        return 1;
    while(n % 2 == 0) 
    {
        n = n / 2;
    }
    if(n == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(power_of_2(n))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}




 
