/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:19:45 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 11:15:14 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s2);
	if (*s1 == 0 || *s2 == 0)
		return ((char *)s1);
	while (*s1 && n-- > 0)
	{
		if (*s1 == *s2)
		{
			while (*s1)
			{
				if (i == (len - 1))
					return ((char *)s1);
				if (*s1 != s2[i++])
					break ;
				s1++;
			}
		}
		s1++;
	}
	return ((void *)0);
}
