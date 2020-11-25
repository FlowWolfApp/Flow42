/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:47:38 by fspano            #+#    #+#             */
/*   Updated: 2020/11/25 17:25:07 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	negative = 0;
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
