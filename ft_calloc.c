/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:12:13 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 10:54:44 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nbr, size_t n)
{
	int					i;
	unsigned char		*tab;

	i = 0;
	tab = malloc(n * nbr);
	if (!tab)
		return (tab);
	while (nbr)
	{
		tab[i] = '\0';
		tab[i++];
		nbr--;
	}
	return (tab);
}
