#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z') // si c'est une minuscule
            {
                argv[1][i] = ('a' + 'z') - argv[1][i]; // on inverse la lettre
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z') // si c'est une majuscule
            {
                argv[1][i] = ('A' + 'Z')  - argv[1][i]; // on inverse la lettre 
            }
            
            i++;
        }
        write(1, argv[1], i);
    }
    write(1, "\n", 1);
    return 0;
}