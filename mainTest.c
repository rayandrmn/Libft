/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayandrmn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:18:22 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/06 13:07:08 by rayandrmn        ###   ########.fr       */
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
	char string[] = "test";
	char stringdeux[] = "test";
	ft_bzero(string, 2);
	for(int i = 0; i < 4; i++)
	{
		if (string[i] == 0)
			printf("/0");
		else
			printf("%c", string[i]);
	}
	printf("\n");
	bzero(stringdeux, 2);
	for(int i = 0; i < 4; i++)
	{
		if (stringdeux[i] == 0)
			printf("/0");
		else
			printf("%c", stringdeux[i]);
	}
	return (0);
}
