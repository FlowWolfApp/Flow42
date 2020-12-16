/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:49:06 by fspano            #+#    #+#             */
/*   Updated: 2020/12/07 10:59:30 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

static long		ft_itoa_size(int n)
{
	long		size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size = 1;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size++);
}

static int		ft_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char			*ft_itoa(int n)
{
	long		nbr;
	long		size;
	char		*str;

	nbr = n;
	size = ft_itoa_size(nbr);

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	size--;
	if (nbr < 0)
		nbr = -nbr;
	while (size >= 0)
	{
		str[size] = (nbr % 10) + '0';
		size--;
		nbr /= 10;
	}
	if (ft_neg(n))
		str[0] = '-';
	return (str);
}

int			main(void)
{
	int nb;

	nb = -2147483648;
	printf("nombre en int : %d\n", nb);
	printf("nombre en chr : %s\n", ft_itoa(nb));
}
