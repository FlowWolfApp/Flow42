/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 09:58:50 by fspano            #+#    #+#             */
/*   Updated: 2020/11/28 09:58:50 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = s;
	i = ft_strlen(s);
	str[i] = '\n';
	str[i + 1] = '\0';
	ft_putstr_fd(str, fd);
}