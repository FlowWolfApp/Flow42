/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:24:40 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 14:34:00 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_write(int a, int b)
{
	char c[2];
	char d[2];

	c[0] = a / 10 + 48;
	c[1] = a % 10 + 48;
	d[0] = b / 10 + 48;
	d[1] = b % 10 + 48;
	write(1, &c[0], 1);
	write(1, &c[1], 1);
	write(1, " ", 1);
	write(1, &d[0], 1);
	write(1, &d[1], 1);
	if (a < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 98)
	{
		if (b < 99)
			b++;
		else
		{
			a++;
			b = a + 1;
		}
		ft_print_write(a, b);
	}
}
