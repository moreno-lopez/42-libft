/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: horarivo <horarivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 08:16:47 by horarivo          #+#    #+#             */
/*   Updated: 2026/02/07 02:20:03 by horarivo         ###   ########.fr       */
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

static void	*ft_free_all(char **tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_check(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **) malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (tab);
}

static char	**ft_fill(char **tab, char c, char const *s)
{
	size_t		i;
	size_t		j;
	size_t		start;

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
		{
			tab[j] = ft_substr(s, start, i - start);
			if (!tab[j])
				return (ft_free_all(tab, j));
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;

	if (!s)
		return (NULL);
	tab = ft_check(s, c);
	if (!tab)
		return (NULL);
	return (ft_fill(tab, c, s));
}
