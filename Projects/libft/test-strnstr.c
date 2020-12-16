/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:49:06 by fspano            #+#    #+#             */
/*   Updated: 2020/12/08 13:11:06 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char			*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	/*if (to_find[0] == 0)
		return ((char *)str);*/
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i] && to_find[j] && str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
			printf("i = %d\nj = %d\nn = %d\n", i, j, n);
		}
		if (to_find[j] == '\0' && (i - j) < n)
			return ((char *)str + (i - j));
		i -= j;
		i++;
		printf("i = %d\nj = %d\n", i, j);	
	}
	return (NULL);
}

int			main(void)
{
	char	*s1 = "aaabc";
	char	*s2 = "aabc";
	int		n = 10;

	printf("On renvoit : %s\n", ft_strnstr(s1, s2, n));
}
