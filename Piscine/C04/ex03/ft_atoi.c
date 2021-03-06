/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:47:38 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 10:58:53 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int res;
	int negative;

	i = 0;
	negative = 1;
	res = 0;
	while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -negative;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * negative);
}

int		main(void)
{
	char num[] = "   ++-++--1578624";

	printf("My number in char : %s\n", num);
	printf("My number in deci : %d", ft_atoi(num));
	return (0);
}