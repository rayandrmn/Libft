/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:21:41 by rayderha          #+#    #+#             */
/*   Updated: 2024/06/15 13:23:03 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(int n, int base)
{
	int	ct;

	ct = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr_base(n * (-1), base) + ++ct);
	}
	if (n >= base)
	{
		ct = ft_putnbr_base(n / base, base);
		return (ct + ft_putnbr_base(n % base, base));
	}
	return (ft_putchar(n + '0'));
}
