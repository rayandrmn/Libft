/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:10:50 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/19 11:47:38 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (s[j])
	{
		if (j >= start && i < len)
			dest[i++] = s[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}