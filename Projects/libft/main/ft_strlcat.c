/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:19:11 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 12:59:24 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// On concatène jusqu'à une taille donnée la src à la dest
// Si on est dans dest avec size < dest, on s'arrête on renvoi la longueur de a chaine finale
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	// Si on ne veut rien concat, on renvoit la longueur de la source
	if (size == 0)
		return (ft_strlen((char *)src));
	// Tant qu'on est pas à la fin de dest ou de size, on avance. Si i = long dest on y ajoute jusquà size la src
	// Sinon on renvoit la longueur de la source
	while (dest[i] != '\0' && i < size)
		i++;
	j = i;
	// Tant qu'on est pas arrivé à size, en conservant un espace pour le \0 ou qu'on est pas à la fin de la src on copie src à la suite
	while (src[i - j] != '\0' && i < size - 1)
	{
		dest[i] = src[i - j];
		i++;
	}
	// Si on a copié de la source, on ajoute le \0 à la fin de la nouvelle chaine
	if (j < size)
		dest[i] = '\0';
	// On renvoit la longueur de la chaine finale
	return (j + ft_strlen((char *)src));
}
