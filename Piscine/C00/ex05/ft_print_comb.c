/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:23:09 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 14:33:57 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_write(char *number)
{
	write(1, &number[0], 1);
	write(1, &number[1], 1);
	write(1, &number[2], 1);
	if (number[0] < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	while (number[0] < '8')
	{
		while (number[1] < '9')
		{
			while (number[2] <= '9')
			{
				ft_print_write(number);
				number[2]++;
			}
			number[1]++;
			number[2] = number[1] + 1;
		}
		number[1] = number[0] + 1;
		number[0]++;
	}
}
