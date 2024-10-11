#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                t_list;

int	ft_list_size(t_list *begin_list) 
{
    int i = 0; // nombre d'éléments
    while (begin_list) // tant que le pointeur n'est pas NULL
    {
        begin_list = begin_list->next; // on avance dans la liste
        i++; // on incrémente le compteur
    }
    return (i); // on retourne le nombre d'éléments
}


