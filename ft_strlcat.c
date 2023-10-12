/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:50:40 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 18:18:26 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		sizesrc;
	size_t		i;
	size_t		j;
	size_t		dstlen;

	dstlen = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	sizesrc = ft_strlen(src);
	if (!size)
		return (ft_strlen(src + size));
	while (src[j] && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstlen > size)
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + dstlen);
}
