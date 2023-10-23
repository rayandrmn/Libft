/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:04:14 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/19 21:57:31 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(s1);
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	while (i < k && ft_is_set(s1[k - 1], set))
		k--;
	dest = malloc(sizeof(char) * ((k - i) + 1));
	if (!dest)
		return (NULL);
	while (i < k)
	{
		dest[j] = s1[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
