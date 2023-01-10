/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:26:12 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/27 20:20:55 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_doubly_list	*ft_doubly_lstnew(int content)
{
	t_doubly_list	*new_node;

	new_node = (t_doubly_list *)malloc(sizeof(t_doubly_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
