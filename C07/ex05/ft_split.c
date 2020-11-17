/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:54:17 by fspano            #+#    #+#             */
/*   Updated: 2020/11/17 13:54:17 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// Thx to Xle-du for your help and my success at the final exam

#include <stdlib.h>

int		is_sep(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int		count_word(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i] && !is_sep(str[i]))
		{
			count++;
			while (str[i] && !is_sep(str[i]))
				i++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	int		i;
	char	*word;
	int		size_word;

	size_word = 0;
	while (str[size_word] && !is_sep(str[size_word]))
		size_word++;
	if (!(word = (char *)malloc(sizeof(char) * (size_word + 1))))
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		i;
	int		index_word;
	char	**split;
	int		size_split;

	i = 0;
	index_word = 0;
	size_split = count_word(str);
	if (!(split = (char **)malloc(sizeof(char *) * (size_split + 1))))
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i] && !is_sep(str[i]))
		{
			split[index_word] = malloc_word(&str[i]);
			index_word++;
			while (str[i] && !is_sep(str[i]))
				i++;
		}
	}
	split[index_word] = 0;
	return (split);
}