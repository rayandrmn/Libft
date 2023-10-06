/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayandrmn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:27:50 by rayandrmn         #+#    #+#             */
/*   Updated: 2023/10/06 13:28:02 by rayandrmn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, unsigned int len)
{
    unsigned char *p;

    p = s;
    while (len--)
        *p++ = (unsigned char )c;
    return (s);
}