#include <unistd.h>
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int temp; // variable temporaire

    while(i < (size - 1)) // -1 car on compare tab[i] et tab[i + 1]
    {                     // pour éviter de déborder du tableau
        if(tab[i] > tab[i + 1]) // on echange les valeurs 
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0; // on recommence la boucle pour vérifier si le tableau est trié
        }
        else 
            i++; // si le tableau est trié on passe à l'élément suivant
    }
}
