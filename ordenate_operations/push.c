/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:38:40 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/27 20:00:14 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_doubly_list	*set_push(t_doubly_list **donate)
{
	t_doubly_list	*pushed_node;

	pushed_node = (*donate)->next;
	if (pushed_node)
		pushed_node->prev = NULL;
	return (pushed_node);
}

t_doubly_list	*set_pull(t_doubly_list **receiver, t_doubly_list **donate)
{
	t_doubly_list	*pulled_node;
	t_doubly_list	*second_pulled_node;

	pulled_node = (*donate);
	pulled_node->next = (*receiver);
	pulled_node->prev = NULL;
	second_pulled_node = (*receiver);
	if (second_pulled_node)
		second_pulled_node->prev = pulled_node;
	return (pulled_node);
}

static void	set_new_pointers(t_doubly_list **receiver, t_doubly_list **donate)
{
	t_doubly_list	*pulled_node;
	t_doubly_list	*pushed_node;

	pushed_node = set_push(donate);
	pulled_node = set_pull(receiver, donate);
	(*receiver) = pulled_node;
	(*donate) = pushed_node;
}

void	push(t_data *data, char identify)
{
	if (identify == 'a')
	{
		if (!data->stack_b)
			return ;
		set_new_pointers(&data->stack_a, &data->stack_b);
	}
	if (identify == 'b')
	{
		if (!data->stack_a)
			return ;
		set_new_pointers(&data->stack_b, &data->stack_a);
	}
}
