/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:49:06 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 12:18:07 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int		ft_strlen(char *s1)
{
	int		size;

	size = 0;
	while (s1[size])
		size++;
	return (size);
}

size_t	ft_ft(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (dst[i] != '\0' && i < size)
		i++;
	j = i;
	while (src[i - j] != '\0' && i < size - 1)
	{
		dst[i] = src[i - j];
		//printf("la : %c\n", dst[i]);
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen((char *)src));
}

int	main(void)
{
	char	s1[500];
	char	s2[500];
	int		n;

	n = 13;
	strcpy(s1, "bonjour");
	strcpy(s2, "alfa");
	printf("Retour strlcat \"%zu\"\n", strlcat(s1, s2, n));
	//printf("s1 = %s\ns2 = %s\n\n", s1, s2);
	strcpy(s1, "bonjour");
	strcpy(s2, "alfa");
	//printf("s1 = %s\ns2 = %s\n\n", s1, s2);
	printf("Retour ft_ft %zu\n\n", ft_ft(s1, s2, n));
	//printf("s1 = %s\ns2 = %s\n\n", s1, s2);
	return (0);
}
