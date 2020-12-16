/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:56:49 by fspano            #+#    #+#             */
/*   Updated: 2020/12/15 11:45:51 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i] && to_find[j] && str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0' && (i - j) < n)
			return ((char *)str + (i - j));
		i -= j;
		i++;
	}
	return (NULL);
}
