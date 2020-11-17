/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:45:06 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 19:06:21 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_char_is_alphanum(char c)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	if (!((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9')))
		ret = 0;
	return (ret);
}

int		ft_is_up(char c)
{
	int i;
	int ret;

	ret = 0;
	i = 0;
	if ((c >= 'A' && c <= 'Z'))
	{
		ret = 1;
	}
	return (ret);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_up(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (ft_char_is_alphanum(str[i - 1]) == 0 &&
		str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
