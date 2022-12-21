/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:40:42 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 18:29:24 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;

	if (lst && del && f)
	{
		head = NULL;
		while (lst)
		{
			new_node = ft_lstnew(f(lst->content));
			if (!new_node)
			{
				if (head)
					ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, new_node);
			lst = lst->next;
		}
		return (head);
	}
	return (NULL);
}
