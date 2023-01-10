/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:39:58 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/27 20:34:51 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	reverse_rotate(t_data *data, char identify)
{
	t_doubly_list	*old_stack;
	t_rotate		new_stack;

	if (identify == 'a')
		old_stack = data->stack_a;
	if (identify == 'b')
		old_stack = data->stack_b;
	if (!old_stack || !old_stack->next)
		return ;
	new_stack.first_node = ft_doubly_lstlast(old_stack);
	new_stack.second_node = old_stack;
	new_stack.last_node = (ft_doubly_lstlast(old_stack))->prev;
	new_stack.first_node->next = new_stack.second_node;
	new_stack.last_node->next = NULL;
	new_stack.first_node->prev = NULL;
	new_stack.second_node->prev = new_stack.first_node;
	if (identify == 'a')
		data->stack_a = new_stack.first_node;
	if (identify == 'b')
		data->stack_b = new_stack.first_node;
}

void	reverse_rotate_rrr(t_data *data)
{
	reverse_rotate(data, 'a');
	reverse_rotate(data, 'b');
}
