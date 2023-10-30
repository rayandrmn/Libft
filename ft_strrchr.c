/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:48:58 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/30 14:20:11 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		p;
	char		*str;

	i = 0;
	p = (char)c;
	str = (char *)s;
	while (*str)
	{
		i++;
		str++;
	}
	while (i >= 0)
	{
		if (*str == p)
			return ((char *)str);
		str--;
		i--;
	}
	return (NULL);
}
