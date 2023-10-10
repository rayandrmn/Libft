/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayandrmn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:50:12 by rayderha         #+#    #+#             */
/*   Updated: 2023/10/10 17:50:12 by rayderha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		sizesrc;
	size_t		i;

	i = 0;
	sizesrc = ft_strlen(src);
	if (dst == 0 || src == 0)
		return (0);
	while (dst[i])
		i++;
	while (*src)
	{
		dst[i] = *src++;
		i++;
	}
	return (sizesrc);
}
