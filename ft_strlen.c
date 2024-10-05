typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    
    while(begin_list) // tant que begin list existe 
    {
        (*f)(begin_list->data); // applique la fonctionf sur la donne dans begin_list
        begin_list = begin_list->next; // passe a l'element suivant
    }

}