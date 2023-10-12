/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:19:45 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 17:12:32 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s2);
	if (len == 0)
		return ((char *)s1);
	while (*s1 && n >= len)
	{
		i = 0;
		while (s1[i] == s2[i])
		{
			if (i == len - 1)
				return ((char *)s1);
			i++;
		}
		s1++;
		n--;
	}
	return (NULL);
}
