/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:50:40 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 13:30:08 by rayderha         ###   ########.fr       */
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
	i = 0;
	j = 0;
	sizesrc = ft_strlen(src);
	if (!size)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	while (src[j] && i < (size - 1))
	{
		dst[dstlen + j] = src[j];
		i++;
		j++;
	}
	dst[dstlen + j] = '\0';
	if (dstlen > size)
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + dstlen);
}
