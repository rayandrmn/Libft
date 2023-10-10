/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayandrmn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:41 by rayderha         #+#    #+#             */
/*   Updated: 2023/10/10 17:25:41 by rayderha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		sizesrc;
	size_t		i;

	sizesrc = ft_strlen(src);
	i = 0;
	if (dst == 0 || src == 0)
		return (0);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	return (sizesrc);
}
