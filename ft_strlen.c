#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc > 1) // plus que 1 argument
    {
        char *str = argv[1]; 
        int i = 0; // index
        int start ; // debut du mot
        int end ; // fin du mot

        //longeure de la chaine
        while (str[i] != '\0')
        {
            i++;
        }

        // On commence à la fin de la chaine
        while (i > 0)
        {
            // on enleve les espaces et tabulations
            while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            {
                i--;
            }

            // fin du mot
            end = i;

            // on enleve les lettres
            while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
            {
                i--;
            }
            start = i; // debut du mot

            // On affiche le mot
            if (start != end)
            {
                write(1, &str[start], end - start); // Affiche le mot
                if (i > 0) // Si il reste des mots
                    write(1, " ", 1); // On affiche un espace
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}