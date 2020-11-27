/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:36:42 by fspano            #+#    #+#             */
/*   Updated: 2020/11/27 16:20:56 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// On compte le nombre de mots dans la chaine str
static int	count_word(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		// Tant qu'on a un sep on avance dans la chaine
		while (str[i] && (str[i] == c))
			i++;
		// Si on a pas un séparateur on compte +1  et on avance jusqu'au prochain séparateur
		if (str[i] && !(str[i] == c))
		{
			count++;
			while (str[i] && !(str[i] == c))
				i++;
		}
	}
	// On retourne le nombre de mots
	return (count);
}

// On malloc la taille du mot
static char	*malloc_word(char *str, char c)
{
	size_t	i;
	size_t	size_word;
	char	*word;

	// On initialise la longueur
	size_word = 0;
	// Tant qu'on arrive pas à un séparateur on calcule la long du mot
	while (str[size_word] && !(str[size_word] == c))
		size_word++;
	// On malloc de la longueur +1 de type char
	if (!(word = (char *)malloc(sizeof(char) * (size_word + 1))))
		return (NULL);
	// On remplit le mot avec ce qui est dans la chaine
	// On ajoute le \0 et on renvoit le mot
	i = 0;
	while (str[i] && !(str[i] == c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);	
}

// On va séparer les parties de splits par le cara c dans un tab 2D
char		**ft_split(char const *s, char c)
{
	// On init nos paramètres et un split en 2D qu'on malloc dans les 2 sesns
	size_t	i;
	size_t	index_word;
	char	**split;
	size_t	size_split;

	i = 0;
	index_word = 0;
	// On compte le nombre de mots dans str
	// On malloc de la taille de char * * nb de mots +1 pour le 0 en fin de tableau
	size_split = count_word((char *)s, c);
	if (!(split = (char **)malloc(sizeof(char *) * (size_split + 1))))
		return (NULL);
	// Sur toute la chaine
	while (s[i])
	{
		// Tant qu'on est pas à la fin ou qu'on a pas un sep on avance
		while (s[i] && s[i] == c)
			i++;
		// Quand on a un sep, on envoit jusqu'au prochain sep la chaine dans un word mallocké
		if (s[i] && !(s[i] == c))
		{
			split[index_word] = malloc_word((char *)&s[i], c);
			index_word++;
			while (s[i] && !(s[i] == c))
				i++;
		}
	}
	split[index_word] = 0;
	return (split);
}

int			main(void)
{
	char	str_to_split[150] = "Voici la chaine à découper comme tu le sens copain";
	char	c[2] = "c";
	char	**split;
	size_t	i;
	int		j;

	i = 0;
	printf("chaine init : %s\ncarc : %s\n\n", str_to_split, c);
	split = ft_split((char *)str_to_split, (char)c);
	printf("Chaine finale:\n");
	while (split)
	{
		j = 0;
		printf("Elment %d : ", i);
		while (split[i])
		{
			write(1, split[i][j], 1);
			j++;
		}
		i++;
	}
	return (0);
}