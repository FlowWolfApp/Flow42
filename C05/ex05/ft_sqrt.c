/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 22:44:47 by fspano            #+#    #+#             */
/*   Updated: 2020/10/20 10:11:23 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= 46341)
	{
		if ((i * i) < nb)
			i++;
		else if ((i * i) == nb)
			return (i);
		else
			return (0);
	}
	return (0);
}
