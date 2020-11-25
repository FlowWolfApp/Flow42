/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:54:38 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 16:06:35 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size_s1_s2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	size_s1_s2 = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(str = malloc(sizeof(char) * (size_s1_s2 + 1))))
		return (NULL);
	i = 0;
	j = -1;
	while (i < size_s1_s2)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[++j] != '\0')
			str[i++] = s2[j];
	}
	str[size_s1_s2] = '\0';
	return (str);
}
