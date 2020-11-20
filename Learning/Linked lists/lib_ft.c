/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:07:53 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 14:07:53 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
/*
void	*ft_list_init()
{
	t_list_ocr *list_ocr = malloc(sizeof(*s_list_ocr));			// We malloc list (var) from the size of t_list (struct)
	t_element *element = malloc(sizeof(*t_element))	// We malloc element (var) from the size of t_element (struct)

	if (list_ocr == NULL || element == NULL)
	{
		exit(EXIT_FAILURE);
	}

	element->number = 0;
	element->next = NULL;
	list_ocr->first = element;

	return (list);
}*/

t_list *add_link(t_link_ocr *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));					// We determine the size of tmp
	if (tmp)										// if not = 0, malloc ok we can use it
	{
		tmp->str = str;								// We put the str in parameter into the tmp.str of the tmp list
		tmp->next = list;
	}
	return (tmp);
}

void	ft_list_print_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}

void	ft_list_add_element(t_list *list, char new_number)
{
	// we create a new element
	t_element *new = malloc(sizeof(*new));
	if(list == NULL || new = NULL)
	{
		exit(EXIT_FAILURE);
	}
	new->number = new_number;

	// we insert this new element at the 1st place of the list
	new->next = list->first;			// We link the next of the new to the old 1st of the list
	list->first = new;					// We indicate than the new is now in the 1st place of the list
}

void	ft_list_del_element(t_list *list)
{
	if(list == NULL || new = NULL)
	{
		exit(EXIT_FAILURE);
	}

	if (list->first != NULL)
	{
		t_element *to_be_del = list->first;
		list->first = list->first->next;
		free(to_be_del);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}