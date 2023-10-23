/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:08:05 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/23 16:14:13 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	if (!s[i])
		return (0);
	if (s[0] != c)
	{
		words++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

int	ft_words_len(const char *s, char c, int j)
{
	int		i;

	i = 0;
	while (s[j] != c && s[j])
	{
		i++;
		j++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;
	int		j;
	int		k;

	words = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	tab[words] = 0;
	i = 0;
	j = 0;
	while (i < words)
	{
		k = 0;
		while (s[j] == c)
			j++;
		tab[i] = malloc(sizeof(char) * (ft_words_len(s, c, j) + 1));
		while (s[j] && (s[j] != c))
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		i++;
	}
	return (tab);
}

