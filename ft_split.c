/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: horarivo <horarivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 08:16:47 by horarivo          #+#    #+#             */
/*   Updated: 2026/01/31 18:21:41 by horarivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	res;
	size_t	i;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			res++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		start;
	char		**tab;

	if (!s)
		return (NULL);
	tab = (char **) malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			tab[j++] = ft_substr(s, start, i - start);
	}
	tab[j] = NULL;
	return (tab);
}
