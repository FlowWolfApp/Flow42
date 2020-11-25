/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:49:06 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 17:23:22 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int		ft_strlen(char *s1)
{
	int		size;

	size = 0;
	while (s1[size])
		size++;
	return (size);
}

static int	ft_atoi_neg(int neg, char *str, int *i)
{
	neg = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			neg = -neg;
		(*i)++;
	}
	return (neg);
}

int			ft_atoi(char *str)
{
	int		i;
	size_t	res;
	int		negative;
	int		j;

	i = 0;
	j = 0;
	res = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	negative = ft_atoi_neg(negative, str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
		j++;
		if (j >= 18 && negative == -1)
			return (0);
		if (j >= 18 && negative == 1)
			return (-1);
	}
	return (res * negative);
}

int	main(void)
{
	char	*n = "-1234jknergr gerjg erjhg5678901451";

	printf("Retour    atoi %d\n", atoi(n));
	printf("Retour ft_atoi %d\n\n", ft_atoi(n));
	return (0);
}
