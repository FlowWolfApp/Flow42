/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:59:38 by fspano            #+#    #+#             */
/*   Updated: 2020/12/17 10:23:50 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s - start < len)
		len = len_s - start;
	if (start > len_s)
		len = 0;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if ((int)start <= len_s)
		while (i < len && s[i] != '\0')
		{
			str[i] = s[start + i];
			i++;
		}
	str[i] = '\0';
	return (str);
}
