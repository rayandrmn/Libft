/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:54:45 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/27 16:00:24 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	if (lst && *lst)
	{
		while (*lst)
		{
			list = (*lst)->next;
			ft_lstdelone(*lst, (*del));
			*lst = (*lst)->next;
		}
	}
}
