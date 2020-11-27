/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:54:46 by fspano            #+#    #+#             */
/*   Updated: 2020/11/27 18:54:46 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_itoa_size(int n)
{
	int				size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size = 1;
		n = -n;
	}
	if (n == -2147483648)
		return (11);
	while (n >= 1)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				size;

	size = ft_itoa_size(n);
	neg = 0;
	i = 1;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	if (!((str = (char *)malloc(sizeof(char) * size + 1))))
		return (NULL);
	if (n == 0)
		str = '0';
	while (n >= 1)
	{
		str[size - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}