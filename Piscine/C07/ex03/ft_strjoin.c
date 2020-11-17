/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:11:37 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 13:51:44 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//Not sure to be OK

#include <stdlib.h>

int		ft_strs_len(int size, char **strs, char *sep);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	str = 0;
	if (size == 0)
		return (str);
	if (!(str = malloc(sizeof(char) * ft_strs_len(size, strs, sep))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		dest[i + j + 1] = '\0';
		j++;
	}
	return (dest);
}

int		ft_strs_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ((size - 1) * ft_strlen(sep) + 1);
	return (len);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
