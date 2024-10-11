#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
    int data; // valeur de l'element
    struct s_list *next; // pointeur sur l'element suivant
} t_list;


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{ 
    int temp; // variable temporaire pour stocker la valeur de lst->data
    t_list *debut  = lst; // pointeur sur le debut de la liste
    
    
    while (lst->next != NULL && lst != NULL) 
    {
        if(cmp(lst->data, lst->next->data) == 0) // si la fonction cmp retourne 0
        {
            // on echange les valeurs de lst->data et lst->next->data
            temp = lst->data; 
            lst->data = lst->next->data;  
            lst->next->data = temp; 
            lst = debut; // on reinitialise lst au debut de la liste
        }
        else
            lst = lst->next; // on passe a l'element suivant
    }
    return (debut); // on retourne le debut de la liste
}



