/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:54:46 by fspano            #+#    #+#             */
/*   Updated: 2020/11/27 19:57:43 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
