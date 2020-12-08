/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:36:42 by fspano            #+#    #+#             */
/*   Updated: 2020/12/08 12:05:45 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == c))
			i++;
		if (str[i] && !(str[i] == c))
		{
			count++;
			while (str[i] && !(str[i] == c))
				i++;
		}
	}
	return (count);
}

static char	*malloc_word(char *str, char c)
{
	size_t	i;
	size_t	size_word;
	char	*word;

	size_word = 0;
	while (str[size_word] && !(str[size_word] == c))
		size_word++;
	if (!(word = (char *)malloc(sizeof(char) * (size_word + 1))))
		return (NULL);
	i = 0;
	while (str[i] && !(str[i] == c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	index_word;
	char	**split;
	size_t	size_split;

	i = 0;
	if (!s || !c)
		return (NULL);
	index_word = 0;
	size_split = count_word((char *)s, c);
	if (!(split = (char **)malloc(sizeof(char *) * (size_split + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && !(s[i] == c))
		{
			split[index_word] = malloc_word((char *)&s[i], c);
			index_word++;
			while (s[i] && !(s[i] == c))
				i++;
		}
	}
	split[index_word] = 0;
	return (split);
}
