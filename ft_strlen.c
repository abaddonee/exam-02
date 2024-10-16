#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;  // Index pour argv[1] la chaine a trouver dans argv[2]
        int j = 0;  // Index pour argv[2] 

        // Parcourir argv[2] pour chercher les caractères de argv[1] dans l'ordre
        while (argv[2][j] != '\0')
        {
            if (argv[1][i] == argv[2][j])
            {
                i++;  // Avancer dans argv[1] si un caractère est trouvé
            }
            if (argv[1][i] == '\0')
            {
                // Si tous les caractères de argv[1] ont été trouvés dans argv[2]
                write(1, argv[1], i);
                write(1, "\n", 1);
                return 0;
            }
            j++;  // Avancer dans argv[2]
        }
    }
    // Si argv[1] n'est pas trouvé dans argv[2] ou si les arguments sont incorrects
    write(1, "\n", 1);
    return 0;
}
   
 


