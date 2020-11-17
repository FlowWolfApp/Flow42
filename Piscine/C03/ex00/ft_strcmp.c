/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:46:39 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 10:06:50 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char s1[] = "Yo la troupe !";
	char s2[] = "Ya la troupe !";

	printf("%d", ft_strcmp(s1, s2));
}