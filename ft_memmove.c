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
	char	*temp;
	char	*tempdest;
	char	*tempsrc;
	int		i;

	i = 0;
	tempsrc = (char *)src;
	tempdest = (char *)dest;
	while (i < n)
	{
		temp[i] = tempsrc[i];
		tempdest[i] = temp[i];
		i++;
	}
	return (tempdest);
}
