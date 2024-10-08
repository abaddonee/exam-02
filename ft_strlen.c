#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0; // index 
        int end = 0; // fin de mot
        int start = 0; // debut de mot
       
        while(argv[1][i] != '\0') // on va a la fin de la chaine
            i++;
        while(i >= 0) // on parcours la chaine de la fin vers le debut
        {
           
            
            while(argv[1][i] == '\t' || argv[1][i] == ' ' || argv[1][i] == '\0')
            {
                i--; // on recule jusqu'a trouver un caractere
            }
            end = i; // on sauvegarde la fin du mot
            while(argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\0')
                i--; // on recule jusqu'a trouver un espace ou un tabulation
            start = i + 1;// on sauvegarde le debut du mot
            
            while(start <= end)
            {
                write(1, &argv[1][start], 1);// on affiche le mot
                start++;
            }
            if(i > 0) // si on est pas a la fin de la chaine on affiche un espace
                write(1, " ", 1);
        }
            
    }
    write(1, "\n", 1);
    return 0;
}