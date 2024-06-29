/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:41:51 by rayderha          #+#    #+#             */
/*   Updated: 2024/06/15 13:20:47 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa(unsigned int n, char *base)
{
	char	*tab;
	int		ct;
	int		i;

	i = 0;
	ct = 0;
	if (n == 0)
	{
		ct += ft_putchar('0');
		return (ct);
	}
	tab = malloc(sizeof(char) * 16 + 1);
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
