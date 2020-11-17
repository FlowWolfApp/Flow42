/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:40:07 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 11:40:07 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_argv(char *argv[], int i);

int		main(int argc, char *argv[])
{
	int i;
	
	i = argc;
	while (i > 1)
	{
		ft_print_argv(argv, i);
		ft_putchar('\n');
		i--;
	}
	return (0);
}

void	ft_print_argv(char *argv[], int i)
{
	int j;

	j = 0;
	while (argv[i - 1 ][j])
	{
		ft_putchar(argv[i - 1][j]);
		j++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}