/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:23:24 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 17:56:41 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	p;

	str = (char *)s;
	p = (char)c;
	while (*str)
	{
		if (*str == p)
			return (str);
		str++;
	}
	if (*str == '\0' && p == '\0')
		return (str);
	return (NULL);
}
