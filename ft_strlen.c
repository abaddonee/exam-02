#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0; // index pour str1
        int j = 0; // index pour str2
        char *str1 = argv[1]; 
        char *str2 = argv[2];
        
        while(str1[i] != '\0') // tant que str1 n'est pas fini
        {
            while (str2[j] != '\0' && str2[j] != str1[i]) // tant que str2 n'est pas fini et que str2 n'est pas égale à str1[i]
            {
                j++;
            }
             if (str2[j] == '\0') // si str2 est fini
            {
                write(1, "0\n", 2); // on affiche 0 car str1 n'est pas fini est str2 est fini donc str1 n'est pas dans str2
                return 0; 
            }
            j++; // on incrémente j pour passer à la lettre suivante
            i++; // on incrémente i pour passer à la lettre suivante
        }
        write(1, "1\n", 2); // si on arrive ici c'est que str1 est fini et qu'on a trouvé toutes les lettres de str1 dans str2
        return 0;
        
    }
    write(1, "0\n", 2); // si on arrive ici c'est que le nombre d'arguments n'est pas bon
    return 0;
}
