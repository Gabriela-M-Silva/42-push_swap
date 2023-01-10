/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:39:21 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/27 20:21:38 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	rotate(t_data *data, char identify)
{
	t_doubly_list	*old_stack;
	t_rotate		new_stack;

	if (identify == 'a')
		old_stack = data->stack_a;
	if (identify == 'b')
		old_stack = data->stack_b;
	if (!old_stack || !old_stack->next)
		return ;
	new_stack.first_node = old_stack->next;
	new_stack.first_node->prev = NULL;
	new_stack.penult_node = ft_doubly_lstlast(old_stack);
	new_stack.penult_node->next = old_stack;
	new_stack.last_node = old_stack;
	new_stack.last_node->next = NULL;
	new_stack.last_node->prev = new_stack.penult_node;
	if (identify == 'a')
		data->stack_a = new_stack.first_node;
	if (identify == 'b')
		data->stack_b = new_stack.first_node;
}

void	rotate_rr(t_data *data)
{
	rotate(data, 'a');
	rotate(data, 'b');
}
