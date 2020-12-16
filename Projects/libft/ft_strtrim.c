/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:01:43 by fspano            #+#    #+#             */
/*   Updated: 2020/12/08 13:12:25 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	is_to_trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	str_size;
	char			*str_start;
	char			*str_end;
	char			*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_to_trim(s1[i], set))
		i++;
	str_start = (char *)&s1[i];
	i = ft_strlen((char *)s1) - 1;
	while (i >= 0 && is_to_trim(s1[i], set))
		i--;
	str_end = (char *)&s1[i];
	if (!*s1 || str_end == str_start)
		str_size = 2;
	else
		str_size = str_end - str_start + 2;
	if (!(str = malloc(sizeof(char) * str_size)))
		return (NULL);
	ft_strlcpy(str, str_start, str_size);
	return (str);
}
