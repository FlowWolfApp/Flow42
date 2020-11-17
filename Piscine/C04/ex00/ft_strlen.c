/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:26:00 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 10:26:00 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);	
}

int 	main()
{
	char str[] = "Hehe y a des messages la dedans";

	printf("FT : %d\n", ft_strlen(str));
}