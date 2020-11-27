/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:06:25 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 16:12:19 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Protected
// On prend la longueur de source
// Si on a rien a copié on copie pas
// Sinon on copie source dans dest et on ajoue le \0
// On renvoit la longueur de la src
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	if (!dest || !src)
		return (0);
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (src[a] && a < size - 1)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (i);
}
