/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:49:06 by fspano            #+#    #+#             */
/*   Updated: 2020/11/24 18:02:40 by fspano           ###   ########lyon.fr   */
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

char	*ft_ft(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	printf("%d\n", i);
	while (str[i] != c)
		i--;
	if (str[i] == '\0')
		return (NULL);
	return (&str[i]);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	n = 98;
	s1 = "bobnjour";
	s2 = "t\0";
	printf("Retour strrchr \"%s\"\n", strrchr(s1, n));
	printf("Retour ft_ft %s\n", ft_ft(s1, n));
	return (0);
}

/*
	size_t	i;
	size_t	last_occ;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	last_occ = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			last_occ = i;
		i++;
	}
	if (c == '\0' && str[i] == c && ft_strlen(str) > 0)
		return ("");
	if (last_occ == 0 && str[0] != c)
		return (NULL);
	return (&str[last_occ]);
	*/