/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <rayandrmn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:33:20 by rayandrmn         #+#    #+#             */
/*   Updated: 2023/10/09 11:33:20 by rayandrmn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{  
    char    *str;
    const char    *strsrc;

    str = (char *)dest;
    strsrc = (const char *)src;

    while (n--)
        *str++ = *strsrc++;
    return (str);
}