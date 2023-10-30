/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:50:40 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/30 13:08:26 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		sizesrc;
	size_t		i;
	size_t		returnsize;
	size_t		dstlen;

	dstlen = ft_strlen(dst);
	i = 0;
	returnsize = 0;
	sizesrc = ft_strlen(src);
	if (size > dstlen)
		returnsize = dstlen + sizesrc;
	else
		returnsize = size + sizesrc;
	if (size == 0)
	{
		return (returnsize);
	}
	while (src[i] && dstlen < (size - 1))
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (returnsize);
}
