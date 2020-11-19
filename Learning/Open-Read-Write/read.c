/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:01:43 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 13:43:10 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 10					// We limit the size of buf, instead of 4096

void	ft_putstr_fd(int fd, char *str)
{
	write (fd, str, ft_strlen(str)); // to read from the fd : str
}

int		main(int argc, char *argv[])
{
	int fd;
	int ret; // return of read
	char buf[BUF_SIZE + 1];		// static defined but could be done by malloc

	// read take 3 param
	// 1 - fd from which to read	(int fd)
	// 2 - what to read on			(char *buf)
	// 3 - nb of octet read			(int count)
	// return nb of octet read or -1 in case of error

	// O_APPEND permit to write from the last octet of the file
	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	// In case we don't know the size we have to read, we use a loop of read
	// read return 0 at the end of the file
	// -----------
	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		ft_putnbr(ret);
		ft_putchar('\n');
		ft_putstr(buf);
	}
	// -----------
	// ret = read(fd, buf, BUF_SIZE);
	// buf[ret] = '\0';
	ft_putnbr(ret);
	// ft_putchar('\n');
	// ft_putstr(buf);
	if (close(fd) == - 1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}