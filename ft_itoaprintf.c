/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:22:37 by rayderha          #+#    #+#             */
/*   Updated: 2024/06/15 13:22:57 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itoaprintf(long long unsigned int n, char	*base)
{
	char	*tab;
	int		ct;
	int		i;

	tab = malloc(sizeof(char) * 16 + 1);
	i = 0;
	ct = 0;
	ct = ct + ft_putstr("0x");
	while (n > 0)
	{
		tab[i++] = base[n % 16];
		n /= 16;
	}
	i--;
	while (i >= 0)
	{
		ct += ft_putchar(tab[i--]);
	}
	free(tab);
	return (ct);
}
