/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:17:17 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/11 11:01:09 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*src;

	i = 0;
	src = (void *)s;
	while (src[i] && n > 0)
	{
		if (src[i] == c)
			return (&src[i]);
		i++;
		n--;
	}
	return ((void *)0);
}
