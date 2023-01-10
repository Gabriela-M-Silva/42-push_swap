/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lstadd_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:49:54 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/16 18:05:47 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_doubly_lstadd_back(t_doubly_list **lst, int number)
{
	t_doubly_list	*last_node;
	t_doubly_list	*new_node;

	if (!*lst)
		*lst = ft_doubly_lstnew(number);
	else
	{
		last_node = ft_doubly_lstlast(*lst);
		new_node = ft_doubly_lstnew(number);
		last_node->next = new_node;
		last_node->next->prev = last_node;
	}
}
