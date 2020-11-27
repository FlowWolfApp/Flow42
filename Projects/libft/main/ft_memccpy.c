/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:51:52 by fspano            #+#    #+#             */
/*   Updated: 2020/11/23 17:03:39 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copie un bloc de mémoire spécifié par src et de taille n dans dest
// S'arrête dès que le caractère c est rencontré
// On créé les pointeurs de src et dest qu'on init
// Tant qu'on a pas copié n carac et qu'on a pas rencontré le carac c
// Si on a pas trouvé c, on renvoit null
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	i = 0;
	while (i < n && ptr_src[i] != (unsigned char)c)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		ptr_dest[i] = ptr_src[i];
		i++;
		return (&ptr_dest[i]);
	}
}
