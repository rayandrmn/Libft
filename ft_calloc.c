/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:12:13 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/12 11:17:18 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nbr, size_t n)
{
	void	*tab;

	tab = (void *)malloc(n * nbr);
	if (!tab)
		return (NULL);
	ft_bzero(tab, n * nbr);
	return (tab);
}
