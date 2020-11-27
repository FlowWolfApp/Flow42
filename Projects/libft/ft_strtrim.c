/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:06:00 by fspano            #+#    #+#             */
/*   Updated: 2020/11/27 16:59:45 by fspano           ###   ########lyon.fr   */
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

char				*ft_strtrim(char const *s, char const *set)
{
	int		i;
	size_t	str_size;
	char	*str_start;
	char	*str_end;
	char	*str;
	char	*str1;

	str1 = (char *)s;
	if (!str1 || !set)
		return (NULL);
	i = 0;
	while (str1[i] && is_to_trim(str1[i], set))
		i++;
	str_start = (char *)&str1[i];
	if ((i = ft_strlen(str1) - 1) != -1)
		while (i >= 0 && is_to_trim(str1[i], set))
			i--;
	str_end = (char *)&str1[i];
	if (!*str1 || str_end == str_start)
		str_size = 2;
	else
		str_size = str_end - str_start + 2;
	if (!(str = malloc(sizeof(char) * str_size)))
		return (NULL);
	ft_strlcpy(str, str_start, str_size);
	str[str_size] = '\0';
	return (str);
}
