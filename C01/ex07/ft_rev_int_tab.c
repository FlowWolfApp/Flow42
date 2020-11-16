/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:58:15 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 15:58:15 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int swp;
	int i;

	i = 0;
	while (i < size / 2)
	{
		swp = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = swp;
		i++;
	}
}

int		maint(void)
{
	char tab[5];
	int i;
	int size;

	i = 0;
	size = 5;
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 1;
	tab[3] = 1;
	tab[4] = 1;
	while (i < size)
	{
		printf("tab[i] = %d\n", i, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[i] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}