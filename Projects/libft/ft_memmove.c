/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:29:14 by fspano            #+#    #+#             */
/*   Updated: 2020/11/23 18:08:44 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (dest > src)
			((char *)dest)[n - i - 1] = ((char *)src)[n - i - 1];
		else
		{
			((char *)dest)[i] = ((char *)src)[i];
		}
		i++;
	}
	return (dest);
}
