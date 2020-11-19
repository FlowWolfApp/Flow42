/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:01:43 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 11:14:32 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char *argv[])
{
	int fd;
	int fd2;
	int fd3;

	// Ouvrir un ficier
	fd = open("text.txt", O_WRONLY);
	// Vérifier que le fd n'ai pas un retour = - 1 : pas les droits
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	ft_putnbr(fd);

	// Ouvrir un fichier en le créant et autorisant les droits lecture écritude
	fd2 = open("42", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	ft_putnbr(fd2);
	
	// Fermeture de fichier
	// Renvoi 0 si bien fermé ou -1 en cas d'erreur
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return(1);
	}
	fd3 = close("42");
	ft_putnbr(fd3);
	
	return (0);
}