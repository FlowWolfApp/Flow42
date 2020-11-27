/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:35:40 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 14:34:12 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Protected
// Alloue un bloc de mémoire et initialise chaque octet à 0
// On alloue sur la longueur de nb element * taille d'un element
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pnt;
	char	*tab;

	pnt = NULL;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (!(tab = malloc(nmemb * size)))
		return (pnt);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
