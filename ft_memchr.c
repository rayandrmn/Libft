/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:17:17 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 17:17:16 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*src;
	char		p;

	i = 0;
	src = (void *)s;
	p = (int)c;
	while (i < n)
	{
		if (src[i] == p)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
