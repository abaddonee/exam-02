#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        // Parcourir jusqu'à la fin de la chaîne
        while (argv[1][i] != '\0')
            i++;

        // Remonter pour ignorer les espaces à la fin (si présents)
        while (i > 0 && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t' || argv[1][i - 1] == '\n'))
            i--;

        // Trouver le début du dernier mot
        int j = i;
        while (j > 0 && argv[1][j - 1] != ' ' && argv[1][j - 1] != '\t' && argv[1][j - 1] != '\n')
            j--;

        // Afficher le dernier mot
        while (j < i)
        {
            write(1, &argv[1][j], 1);
            j++;
        }
    }

    // Saut de ligne à la fin
    write(1, "\n", 1);
    return 0;
}
