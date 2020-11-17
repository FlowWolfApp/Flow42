/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:37:50 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 12:37:50 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s1);

char 	*ft_strdup(char *src)
{
	int i;
	char *str;
	char *pnt;

	if (!(str = malloc(ft_strlen(src) * sizeof(char) + 1)))
	{
		pnt = 0;
		return (pnt);
	}
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		ft_strlen(char *s1)
{
	int		size;

	size = 0;
	while (s1[size])
		size++;
	return (size);
}