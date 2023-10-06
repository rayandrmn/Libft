/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:18:22 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/05 14:13:08 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int	main(void)
{
	const char string[] = "test";
	printf("%ld\n", strlen(string));
	printf("%ld", ft_strlen(string));
	return (0);
}
