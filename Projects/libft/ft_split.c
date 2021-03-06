/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:36:42 by fspano            #+#    #+#             */
/*   Updated: 2020/12/16 16:35:48 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
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

static char	**free_split(char **split, int i)
{
	while (split[--i])
		free(split[i]);
	free(split);
	return (0);
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

	i = 0;
	index_word = 0;
	if (!s || !(split = malloc(sizeof(char *) * (count_word(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && !(s[i] == c))
		{
			split[index_word] = malloc_word((char *)&s[i], c);
			if (!split[index_word])
				return (free_split(split, i));
			index_word++;
			while (s[i] && !(s[i] == c))
				i++;
		}
	}
	split[index_word] = 0;
	return (split);
}
