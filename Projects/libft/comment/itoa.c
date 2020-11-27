/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:49:06 by fspano            #+#    #+#             */
/*   Updated: 2020/11/27 19:41:51 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

static	int	ft_itoa_size(int n)
{
	int		size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size = 1;
		n = -n;
	}
	while (n >= 1)
	{
		n = n / 10;
		size++;
	}

	printf("%d\n", size);
	return (size);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	size;

	size = ft_itoa_size(n);
	i = 0;
	if (!((str = (char *)malloc(sizeof(char) * size + 1))))
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		str[i] = '-';
		n = -n;
		i++;
	}
	if (n == 0)
		str = "0";
	while (n >= 1)
	{
		str[size - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int			main(void)
{
	int nb;

	nb = -2147483648;
	printf("nombre en int : %d\n", nb);
	printf("nombre en chr : %s\n", ft_itoa(nb));
}
