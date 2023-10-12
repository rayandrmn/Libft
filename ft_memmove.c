/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayderha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:02:39 by rayderha         #+#    #+#             */
/*   Updated: 2023/10/10 11:02:39 by rayderha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tempdest;
	char	*tempsrc;

	tempsrc = (char *)src;
	tempdest = (char *)dest;
	if (src < dest)
	{
		tempsrc += n;
		tempdest += n;
		while (n--)
		{
			*(--tempdest) = *(--tempsrc);
		}
	}
	else
	{
		while (n--)
		{
			*tempdest++ = *tempsrc++;
		}
	}
	return (dest);
}
