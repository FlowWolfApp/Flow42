/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:56:34 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 11:03:54 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
		return (fact);
	}
}