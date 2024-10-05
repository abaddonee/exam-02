#include <stdio.h>

typedef struct s_point
{
    int x;
    int y;
}				t_point;

void fill(char **tab, t_point size, t_point begin, char c)
{
    if (begin.x < 0 || begin.y < 0 || begin.x >= size.x || begin.y >= size.y) // verifie si on est dans le tableau
        return ;
    if (tab[begin.y][begin.x] != 'F') // verifie si on est sur une case deja remlie
        return ;
    tab[begin.y][begin.x] = c; // on remplit la case
    fill(tab, size, (t_point){begin.x + 1, begin.y}, c); // on remplit les cases autour
    fill(tab, size, (t_point){begin.x - 1, begin.y}, c); // oui le (t_point ) est obligatoire parce que c'est comme ca
    fill(tab, size, (t_point){begin.x, begin.y + 1}, c); // non plus serieusement c'est parceque on utilise t_nom_de_la_structure et pas s_nom_de_la_structure 
    fill(tab, size, (t_point){begin.x, begin.y - 1}, c); // donc on le handle differemmment
}


void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
    // tab = tableau de char
    // size = taille du tableau
    // begin = point de depart
    // begin[] = la lettre remlacer par F


}
