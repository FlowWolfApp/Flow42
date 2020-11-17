/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:43:46 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 13:20:04 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int *pnt;
	int i;
	int size;

	if (min >= max)
	{
		pnt = 0;
		return (pnt);
	}
	size = max - min;
	i = 0;
	tab = malloc(size * sizeof(tab));
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int i;
	int size;
	int *tab_ret;
	int min;
	int max;

	min = 3;
	max = 7;
	i = 0;
	tab_ret = ft_range(min, max);
	size = max - min;
	if (size < 1)
		return(0);
	while (i < size)
	{
		printf("%d\n", tab_ret[i]);
		i++;
	}
	return (0);
}