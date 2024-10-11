#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while(argv[1][i] != '\0') // temps que argv[1] n'est pas fini
        {
            while(argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                i++; // on passe les espaces et les tabulations
            }
            while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                write(1, &argv[1][i], 1); // on affiche les mots
                i++;
            }
            write(1, " ", 1); // on affiche un espace
        }
        
    }
    write(1, "\n", 1);
    return (0);
}