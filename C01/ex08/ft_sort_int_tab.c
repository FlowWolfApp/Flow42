/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:12:48 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 16:12:48 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{

		if (tab[i] < tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
				i++;
	}
}

int		main(void)
{
	int tab[5];
	int i;
	int size;

	i = 0;
	size = 5;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}