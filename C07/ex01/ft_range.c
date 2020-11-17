/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:43:46 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 12:43:46 by fspano           ###   ########lyon.fr   */
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

int		main(int argc, char *argv[])
{
	int i;
	int size;
	int *tab_ret;

	i = 0;
	if(argc != 3)
		return (1);
	if (argv[1] < argv[2])
	{
		tab_ret = ft_range(argv[1], argv[2]);
		size = argv[2] - argv[1];
	}
	else
	{
		tab_ret = ft_range(argv[2], argv[1]);
		size = argv[1] - argv[2];
	}
	while (i < size)
	{
		printf("%d", tab_ret[i]);
		i++;
	}
	return (0);
}