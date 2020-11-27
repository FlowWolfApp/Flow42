/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:56:49 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 13:29:40 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cherche la chaine to_find dans la chaine str sur n caractères
char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	max;

	i = 0;
	while (str[i] && i < n)
		i++;
	max = i;
	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[i] && i < max)
	{
		if (to_find[j] == str[i])
			j++;
		i++;
		if (to_find[j] == '\0')
			return ((char *)&str[i - j]);
		if (to_find[j] != str[i])
			j = 0;
	}
	return (NULL);
}
