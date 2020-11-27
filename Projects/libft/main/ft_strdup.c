/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:37:50 by fspano            #+#    #+#             */
/*   Updated: 2020/11/23 15:54:53 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Duplique une chaine de caracère en la malloc
char	*ft_strdup(char *src)
{
	int		i;
	char	*str;
	char	*pnt;

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
