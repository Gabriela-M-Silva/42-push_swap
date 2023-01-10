/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 02:25:41 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/27 18:48:38 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_next(t_swap *new_stack)
{
	new_stack->first_node->next = new_stack->second_node;
	new_stack->second_node->next = new_stack->third_node;
}

void	set_prev(t_swap *new_stack)
{
	new_stack->first_node->prev = NULL;
	new_stack->second_node->prev = new_stack->first_node;
	if (new_stack->third_node)
		new_stack->third_node->prev = new_stack->second_node;
}

static void	set_new_pointers(t_doubly_list *old, t_data *data, char identify)
{
	t_swap	new_stack;

	new_stack.first_node = old->next;
	new_stack.second_node = old;
	new_stack.third_node = old->next->next;
	set_prev(&new_stack);
	set_next(&new_stack);
	if (identify == 'a')
		data->stack_a = new_stack.first_node;
	else if (identify == 'b')
		data->stack_b = new_stack.first_node;
}

void	swap(t_data *data, char identify)
{
	t_doubly_list	*old_stack;

	if (identify == 'a')
		old_stack = data->stack_a;
	if (identify == 'b')
		old_stack = data->stack_b;
	if (!old_stack || !old_stack->next)
		return ;
	set_new_pointers(old_stack, data, identify);
}

void	swap_ss(t_data *data)
{
	swap(data, 'a');
	swap(data, 'b');
}
