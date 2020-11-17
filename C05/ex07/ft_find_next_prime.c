/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 23:14:43 by fspano            #+#    #+#             */
/*   Updated: 2020/10/20 10:13:59 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int i;

	i = nb / 2;
	if (nb < 2)
		return (0);
	while (i > 1)
	{
		if ((nb % i) == 0)
			return (0);
		else
			i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb / 2;
	if (nb < 2)
		return (0);
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	else
	{
		while (i > 1)
		{
			if ((nb % i) == 0)
			{
				nb++;
			}
			else
				i--;
		}
		return (nb);
	}
}
