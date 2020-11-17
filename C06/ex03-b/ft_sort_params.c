/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 08:32:04 by fspano            #+#    #+#             */
/*   Updated: 2020/10/23 09:51:26 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_str_tab(char **str, int nb_elmt);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	ft_sort_str_tab(argv, argc);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

void	ft_sort_str_tab(char **str, int nb_elmt)
{
	int		i;
	char	*tmp_str;

	i = 1;
	while (i < nb_elmt - 1)
	{
		i++;
		if (ft_strcmp(str[i - 1], str[i]) > 0)
		{
			tmp_str = str[i - 1];
			str[i - 1] = str[i];
			str[i] = tmp_str;
			i = 1;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
