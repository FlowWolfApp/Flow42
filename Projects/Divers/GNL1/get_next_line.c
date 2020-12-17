/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:47:47 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/12/17 10:39:24 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Une valeur de retour incorrecte

int		get_next_char(int fd)
{
	static unsigned char	buf[BUFFER_SIZE];
	static ssize_t			r = 0;
	static ssize_t			i = 0;

	if (BUFFER_SIZE == 0)
		return (-2);
	if (r == 0 || i == BUFFER_SIZE)
	{
		i = 0;
		r = read(fd, buf, BUFFER_SIZE);
	}
	if (r == -1)
	{
		r = 0;
		i = 0;
		return (-2);
	}
	if (r == 0)
	{
		i = 0;
		return (-1);
	}
	r--;
	return (buf[i++]);
}

int		realloc_line(char **line, char c)
{
	char	tmp[2];
	char	*ret;

	tmp[0] = c;
	tmp[1] = '\0';
	if (!(ret = ft_strjoin(*line, tmp)))
		return (0);
	free(*line);
	*line = ret;
	return (1);
}

int		get_next_line(int fd, char **line)
{
	int		c;

	if (!line)
		return (-1);
	c = get_next_char(fd);
	if (c > -2)
	{
		if (!(*line = malloc(sizeof(char))))
			return (-1);
		**line = '\0';
	}
	while (c >= 0)
	{
		if (c == '\n')
			return (1);
		if (realloc_line(line, (char)c) == -1)
			return (-1);
		c = get_next_char(fd);
	}
	if (c == -2)
		return (-1);
	return (0);
}
