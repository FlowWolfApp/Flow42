/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudet- <lgaudet-@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:03:43 by lgaudet-          #+#    #+#             */
/*   Updated: 2020/12/11 14:59:56 by lgaudet-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *st);
char			*ft_strjoin(char const *prefix, char const *suffix);
void			*ft_bzero(void *pointer, size_t count);

#endif
