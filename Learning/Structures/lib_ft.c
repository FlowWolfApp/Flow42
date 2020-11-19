/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 09:52:49 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 10:24:52 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_init_perso_name(perso *perso_name)
{
	int *pnt;

	pnt = 0;
	perso_name->age = 0;
	perso_name->size = 0;
	perso_name->lifes = 1;
	if (!(perso_name->name = (char *)malloc(sizeof(char) * 100)))
		return (*pnt);
	else
		return (1);
}