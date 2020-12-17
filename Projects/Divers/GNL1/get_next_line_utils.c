/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:22:14 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/12/15 15:18:10 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	const char	*p;
	const char	*s;
	char		*ret;
	size_t		i;

	if (!prefix || !suffix)
		return (NULL);
	if (!(ret = malloc(sizeof(char) *
		(ft_strlen(prefix) + ft_strlen(suffix) + 1))))
		return (NULL);
	p = prefix;
	s = suffix;
	i = 0;
	while (*p)
		ret[i++] = *p++;
	while (*s)
		ret[i++] = *s++;
	ret[i] = '\0';
	return (ret);
}

size_t	ft_strlen(const char *st)
{
	size_t	size;

	size = 0;
	while (st[size])
		size++;
	return (size);
}
