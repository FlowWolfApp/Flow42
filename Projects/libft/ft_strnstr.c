/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:56:49 by fspano            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 11:45:51 by fspano           ###   ########lyon.fr   */
=======
/*   Updated: 2020/12/08 13:11:23 by fspano           ###   ########lyon.fr   */
>>>>>>> febb55b881c578345b4b9cb99ac6095f43cb4381
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
<<<<<<< HEAD
	if (to_find[0] == 0)
		return ((char *)str);
=======
	/*if (to_find[0] == 0)
		return ((char *)str);*/
>>>>>>> febb55b881c578345b4b9cb99ac6095f43cb4381
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i] && to_find[j] && str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
<<<<<<< HEAD
=======
			printf("i = %d\nj = %d\nn = %d\n", i, j, n);
>>>>>>> febb55b881c578345b4b9cb99ac6095f43cb4381
		}
		if (to_find[j] == '\0' && (i - j) < n)
			return ((char *)str + (i - j));
		i -= j;
		i++;
<<<<<<< HEAD
=======
		printf("i = %d\nj = %d\n", i, j);	
>>>>>>> febb55b881c578345b4b9cb99ac6095f43cb4381
	}
	return (NULL);
}