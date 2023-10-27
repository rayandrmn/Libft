/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.C                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:26:58 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/24 19:52:40 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	malloc_size(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*tab;
	size_t		size;
	long int	num;

	num = n;
	size = malloc_size(n);
	if (n < 0)
	{
		num *= -1;
		size++;
	}
	tab = (char *)malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	tab[size] = '\0';
	while (size--)
	{
		tab[size] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		tab[0] = '-';
	return (tab);
}
