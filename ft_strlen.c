#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1; // on initialise i à -1 pour pouvoir l'incrémenter avant de l'utiliser

	while (++i < n && s2[i]) // on copie les n premiers caractères de s2 dans s1
		s1[i] = s2[i];
	s1[i] = '\0'; // on termine la chaine
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int nb_words = 0;
	
    // on compte le nombre de mots
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i]) // si on a pas atteint la fin de la chaine
			nb_words++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	char **result = (char **)malloc(sizeof(char *) * (wc + 1)); // on alloue le tableau de pointeurs
	i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) // on saute les espaces
			i++;
		j = i; // on sauvegarde la position du début du mot
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;// on avance jusqu'à la fin du mot
		if (i > j) // si on a un mot
		{
			result[k] = (char *)malloc(sizeof(char) * ((i - j) + 1)); // on alloue la mémoire pour le mot
			ft_strncpy(result[k++], &str[j], i - j); // on copie le mot
		}
	}
	result[k] = NULL; // on termine le tableau de pointeurs
	return (result);
}