/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:06:00 by fspano            #+#    #+#             */
/*   Updated: 2020/11/27 18:18:46 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int         ft_getstart(const char *s1, const char *set)
{
	size_t  len;
	size_t  i;

	len = ft_strlen((char *)s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int         ft_getend(const char *s1, const char *set)
{
	size_t  len;
	size_t  i;

	len = ft_strlen((char *)s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char        *ft_strtrim(char const *s1, char const *set)
{ 
	int     start;
	int     end;
	char    *newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup((char *)s1));
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1) + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, (char *)(s1 + start), end - start + 1);
	return(newstr);
}