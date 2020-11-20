/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:01:14 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 14:01:14 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# include FT_HEADER_H

#include <stdlib.h>
#include "lib_ft.c"


typedef struct s_element t_element;
struct s_element
{
	int number;					// data type int
	t_element *next;			// link to the next element
};


typedef struct s_list_ocr t_list_ocr;
struct s_list_ocr
{
	element *first;				// in order to know which is the 1st element of the list
};

typedef struct s_list t_list;
struct s_list
{
	char *str;
	list *next;				// link to the next element
};

# endif