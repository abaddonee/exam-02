typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL) //si la chaine est vide/finie
		return;

	t_list *cur = *begin_list; // pointeure sur le debut de la chaine pour parcourir la liste

	if (cmp(cur->data, data_ref) == 0) // si le premier element est a supprimer
	{
		*begin_list = cur->next; // on decale le pointeur de debut de la chaine
		free(cur); // on supprime l'element
		ft_list_remove_if(begin_list, data_ref, cmp); // on relance la fonction pour verifier si le prochain element est a supprimer
	}
    // else  
	if(cmp(cur->data, data_ref) != 0) // si le premier element n'est pas a supprimer
	{
		cur = *begin_list; // on reinitialise le pointeur sur le debut de la chaine
		ft_list_remove_if(&cur->next, data_ref, cmp); // on relance la fonction pour verifier si le prochain element est a supprimer
	}
}

