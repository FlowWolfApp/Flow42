/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:18:34 by fspano            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/16 11:36:43 by fspano           ###   ########lyon.fr   */
=======
/*   Updated: 2020/12/08 12:00:02 by fspano           ###   ########lyon.fr   */
>>>>>>> febb55b881c578345b4b9cb99ac6095f43cb4381
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)src;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (&str[i]);
}
