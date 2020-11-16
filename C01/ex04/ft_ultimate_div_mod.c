/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:56:43 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 14:56:43 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *a / *b;
	*b = swp % *b;
}

int		main(void)
{
	int a;
	int b;

	a = 25;
	b = 7;
	printf("a = %d, b = %d\n", a, b);
	ft_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}