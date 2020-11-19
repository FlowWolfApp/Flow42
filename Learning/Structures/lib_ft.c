/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 09:52:49 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 09:57:02 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_init_perso_name(char *perso_name)
{
	int *pnt;

	pnt = 0;
	if (!(perso_name = (char *)malloc(sizeof(char) * 100)))
		return (0);
	else
		return (1);
}