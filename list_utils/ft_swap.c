/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:16:31 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/19 18:00:22 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	swap_two_first_nodes(t_list *old_stack, t_swap *new_stack);
static void	set_prev_pointers_on_new_nodes(t_swap *new_stack);
static void	set_next_pointers_on_new_nodes(t_swap *new_stack);
static void	put_new_stack_on_data(char stack_c,
				t_swap *new_stack, t_data *data);

int	ft_swap(char stack_c, t_data *data)
{
	t_swap	new_stack;
	t_list	*old_stack;

	if (stack_c == 'a')
		old_stack = data->stack_a;
	if (stack_c == 'b')
		old_stack = data->stack_b;
	if (ft_list_size(old_stack) <= 1)
		return (0);
	swap_two_first_nodes(old_stack, &new_stack);
	set_prev_pointers_on_new_nodes(&new_stack);
	set_next_pointers_on_new_nodes(&new_stack);
	put_new_stack_on_data(stack_c, &new_stack, data);
	return (0);
}

static void	swap_two_first_nodes(t_list *old_stack, t_swap *new_stack)
{
	new_stack->first_node = old_stack->next;
	new_stack->scond_node = old_stack;
	new_stack->third_node = old_stack->next->next;
}

static void	set_prev_pointers_on_new_nodes(t_swap *new_stack)
{
	new_stack->first_node->prev = NULL;
	new_stack->scond_node->prev = new_stack->first_node;
	if (new_stack->third_node != NULL)
		new_stack->third_node->prev = new_stack->scond_node;
}

static void	set_next_pointers_on_new_nodes(t_swap *new_stack)
{
	new_stack->first_node->next = new_stack->scond_node;
	new_stack->scond_node->next = new_stack->third_node;
}

static void	put_new_stack_on_data(char stack_c, t_swap *new_stack, t_data *data)
{
	if (stack_c == 'a')
		data->stack_a = new_stack->first_node;
	if (stack_c == 'b')
		data->stack_b = new_stack->first_node;
}
