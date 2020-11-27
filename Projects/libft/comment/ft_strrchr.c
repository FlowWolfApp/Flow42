/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:18:34 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 14:44:34 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Recherche la dernière occurence du caractère c
// On commence par la fin avec i = fstrlen
char	*ft_strrchr(const char *src, int c)
{
	size_t	i;
	char	*str;

	str = (char *)src;
	i = ft_strlen(str);
	while (str[i] != c && i != 0)
		i--;
	if (i == 0 && str[i] != c)
		return (NULL);
	return (&str[i]);
}
