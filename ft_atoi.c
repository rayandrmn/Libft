/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:28:14 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/11 16:08:50 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	signe;
	int	negatif;

	negatif = 1;
	signe = 0;
	num = 0;
	while (*str == ' ' || *str == '\t'
		|| *str == '\v'
		|| *str == '\n' || *str == '\f' || *str == '\r' )
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negatif = -1;
		signe++;
		if (signe > 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str++ - '0');
	}
	return (num * negatif);
}
