/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:07:31 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 14:07:31 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char					*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	dest = (char*)malloc(sizeof(*dest) * len + 1);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str		*ft_strs_to_tab(int argc, char **argv)
{
	struct s_stock_str	*tab;
	int					i;

	i = 0;
	if (!(tab = malloc(sizeof(struct s_stock_str) * (argc + 1))))
		return (NULL);
	while (i < argc)
	{
		tab[i].size = ft_strlen(argv[i]);
		tab[i].str = argv[i];
		tab[i].copy = ft_strdup(argv[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
