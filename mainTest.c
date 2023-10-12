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
#include <stdlib.h>

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
	char string[50] = "b";
	char stringdeux[] = " a toi jeune homme";
	char stringtrois[50] = "bonjour";
	char grostest[] = "il y ab le mot bonjour ou pas";
	char stringquatre[] = "a toi jeune homme";
	//printf("%zu", ft_strlcat(string, stringdeux, 50));
	const char stringcinq[] = "aPpasreussilloPreussi";
	int	c = 'P';
	char *allo = (char *)ft_calloc(10, 1);
	printf("%s\n", allo);
//	printf("%d\n", atoi("42"));
	//printf("%s\n", ft_memchr(stringcinq, c, 7));
	//printf("%s", memchr(stringcinq, c, 7));

	//printf("%s", stringtrois);
	printf("\n");
	//memcpy(stringtrois, stringquatre, 18);
	//printf("%s", stringtrois);

	return (0);
}
