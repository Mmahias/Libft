/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:14:49 by mmahias           #+#    #+#             */
/*   Updated: 2021/01/19 12:38:18 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && (!(s[i] == c)))
			count++;
		while (s[i] && (!(s[i] == c)))
			i++;
	}
	return (count);
}

static int	ft_size_words(char const *s, char c, int i)
{
	int size;

	size = 0;
	while (s[i] && (!(s[i] == c)))
	{
		size++;
		i++;
	}
	return (size);
}

char		**ft_split(char const *s, char c)
{
	char	**strs;
	int		index;
	int		i;
	int		j;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	if (!(strs = malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (s[i] && (index < ft_count_words(s, c)))
	{
		while (s[i] == c)
			i++;
		if (!(strs[index] = malloc(sizeof(char) * ft_size_words(s, c, i) + 1)))
			return (NULL);
		j = 0;
		while (s[i] && (!(s[i] == c)))
			strs[index][j++] = s[i++];
		strs[index][j] = '\0';
		index++;
	}
	strs[index] = 0;
	return (strs);
}
