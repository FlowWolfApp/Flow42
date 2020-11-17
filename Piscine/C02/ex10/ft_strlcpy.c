/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:06:25 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 17:24:29 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (src[a] && a < size - 1)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (i);
}

#include <stdio.h>

int	main()
{
	char src[] = "test";
	char dest[] = "mais oui";
	int size = 8;

	printf("%lu\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf("%s\n", dest);
}
