/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayderha@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:18:22 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/06 13:07:08 by rayderha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <strings.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char string[50] = "bonjour";
	char stringdeux[] = "a toi jeune homme";
	char stringtrois[50] = "bonjour";
	char stringquatre[] = "a toi jeune homme";
	ft_memcpy(stringtrois, stringquatre, 18);
	printf("%s", stringtrois);
	printf("\n");
	memcpy(stringtrois, stringquatre, 18);
	printf("%s", stringtrois);
	return (0);
}
