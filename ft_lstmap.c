/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:16:33 by rayderha          #+#    #+#             */
/*   Updated: 2023/10/27 15:42:11 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*list;

	while (lst)
	{
		if (!(list = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				list = first->next;
				(*del)(first->content);
				free(first);
				first = list;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, list);
		lst = lst->next;
	}
	return (first);
}
