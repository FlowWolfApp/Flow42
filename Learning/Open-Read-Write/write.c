/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:01:43 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 13:21:43 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr_fd(int fd, char *str)
{
	write (fd, str, ft_strlen(str)); // to write on the fd : str
}

int		main(int argc, char *argv[])
{
	int fd;
	// write take 3 param
	// 1 - fd on which to write		(int fd)
	// 2 - what to write on			(char *buf)
	// 3 - nb of octet to write		(int count)
	// return nb of octet written or -1 in case of error

	// O_APPEND permit to write from the last octet of the file
	fd = open("42", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	ft_putnbr(fd);
	ft_putstr_fd(fd, "Hello World");
	if (close(fd) == - 1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}