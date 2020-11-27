/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:54:38 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 16:06:35 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// On va concaténer 2 chaines
char	*ft_strjoin(char const *s1, char const *s2)
{
	// On définit str la chaine à renvoyer
	// On définit la size de 1=s1 et s2
	char	*str;
	size_t	size_s1_s2;
	size_t	i;
	size_t	j;

	// Protected
	if (!s1 || !s2)
		return (NULL);
	// la taille de str sera égale à s1 + s2
	size_s1_s2 = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	// On malloc avec taille d'un char * (taille str + 1)
	if (!(str = malloc(sizeof(char) * (size_s1_s2 + 1))))
		return (NULL);
	// On init j à -1 pour les 25 lignes
	i = 0;
	j = -1;
	// Tant qu'on est pas à la fin de la 2e chaine
	while (i < size_s1_s2)
	{
		// Tant qu'on est dans s1, on copie s1
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		// Tant qu'on est dans s2, on copie s2 à la suite de s1
		while (s2[++j] != '\0')
			str[i++] = s2[j];
	}
	// On ajoute le \0 et on retourne à la ligne
	str[size_s1_s2] = '\0';
	return (str);
}
