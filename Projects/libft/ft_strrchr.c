/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:18:34 by fspano            #+#    #+#             */
/*   Updated: 2020/12/16 11:36:41 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;
	char	*str;

	str = (char *)src;
	i = ft_strlen(str);
	while (str[i] != (char)c && i != 0)
		i--;
	if (i == 0 && str[i] != (char)c)
		return (NULL);
	return (&str[i]);
}
