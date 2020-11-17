/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 13:12:48 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 10:18:20 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		if (to_find[j] == str[i])
			j++;						// if we find an identique carac i++,j++
		i++;
		if (to_find[j] == '\0')			// If we end to_find
			return (&str[i - j]);		// We return the adress of 1st letter str == to_find
		if (to_find[j] != str[i])		// If we have a non identique letter
			j = 0;						// we restart to_find to 0
	}
	return (0);
}
