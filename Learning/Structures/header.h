/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:00:48 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 09:51:10 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct perso perso;
struct perso
{
	int		age;
	int		lifes;
	int		size;
	char	*name;
};

typedef struct coordonnates coordonnates;
struct coordonnates
{
	int		x;
	int		y;
	int		z;
};

typedef enum volume volume;
enum volume
{
	MUTE, LOW = 15, MEDIUM = 50, HIGH = 85, MAX = 100
};

# endif