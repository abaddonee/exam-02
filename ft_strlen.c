#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void rstr(char *str)
{
    int i = 0;
    while(str[i]) 
    {
        if(str[i] >= 'A' && str[i] <= 'Z') //si c'est une majuscule
            str[i] = str[i] + 32; //on la transforme en minuscule
        if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t'))
            str[i] = str[i] - 32; //si c'est une minuscule et que le caractère suivant est un espace,
                                    // on la transforme en majuscule
        write(1, &str[i], 1); //on affiche le caractère
        i++; 
    }

}

int main(int argc, char **argv)
{
    int i = 0;
    if(argc == 1)
    {
        write(1, "\n", 1);
    }
    else
    {
        i =1; //on commence à 1 car le premier argument est le nom du programme
        while(i < argc) //on parcourt les arguments
        {
            rstr(argv[i]); //on appelle la fonction rstr
            write(1, "\n", 1);
            i++;
        }
    }
    return 0;
    
}