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
	t_list	*temp;

	first = NULL;
	list = NULL;
	temp = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		if (!list)
			first = temp;
		else
			list->next = temp;
		list = temp;
		lst = lst->next;
	}
	return (first);
}
