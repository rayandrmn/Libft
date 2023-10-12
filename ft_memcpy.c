/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayderha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:33:20 by rayderha         #+#    #+#             */
/*   Updated: 2023/10/09 11:33:20 by rayderha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*strsrc;
	char	*str;

	str = (char *)dest;
	strsrc = (char *)src;
	if (!src && !dest)
		return (0);
	while (n--)
		*str++ = *strsrc++;
	return (dest);
}
