/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:01:38 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 14:01:38 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	t_list *list;		// On créé une liste
	
	list = NULL;
	list = add_link(list, "1st word\n");		// 1st word linked to NULL
	list = add_link(list, "2nd word\n");		// 2nd word linked to 1st word
	list = add_link(list, "3rd word\n");		// 3rd word linked to 2nd word

	ft_list_print_list(list);
	ft_list_del_element(list);
	

}