/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:22:02 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 13:33:26 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *tab;
	int i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	if (!(tab = malloc(sizeof(tab) * size)))
		return (-1);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

int		main(void)
{

	int *tab;
	int min;
	int max;
	int i;

	i = 0;
	min = 3;
	max = 7;
	printf("return of ft_ultimate_range : %d\n", ft_ultimate_range(&tab, min, max));
	if (ft_ultimate_range(&tab, min, max) >= 1)
	{
		while (i < max - min)
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
	return (0);
}