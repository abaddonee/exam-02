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
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z') //si c'est une majuscule
            {
                write(1, "_", 1); //on ecrit un underscore
                argv[1][i] += 32; //on ajoute 32 pour passer en minuscule
                write(1, &argv[1][i], 1); //on ecrit la lettre
                
                
            }
            else
            {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}