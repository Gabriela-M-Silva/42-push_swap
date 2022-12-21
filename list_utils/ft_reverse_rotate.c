/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:50:55 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/19 18:00:22 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	init_new_nodes(t_rotate *new, t_list **stack);
static void	init_next_pointers_on_new_nodes(t_rotate *new);
static void	init_prev_pointers_on_new_nodes(t_rotate *new);
static void	put_new_stack_on_data(t_rotate *new, t_list **stack);

int	ft_reverse_rotate(char stack_c, t_data *data)
{
	t_list		**stack;
	t_rotate	new;

	if (stack_c == 'a')
		stack = &data->stack_a;
	if (stack_c == 'b')
		stack = &data->stack_b;
	if (*stack == NULL)
		return (0);
	if ((*stack)->next == NULL)
		return (0);
	init_new_nodes(&new, stack);
	init_next_pointers_on_new_nodes(&new);
	init_prev_pointers_on_new_nodes(&new);
	put_new_stack_on_data(&new, stack);
	return (0);
}

static void	init_new_nodes(t_rotate *new, t_list **stack)
{
	new->first_node = ft_list_last(*stack);
	new->scond_node = *stack;
	new->last_node = (ft_list_last(*stack))->prev;
}

static void	init_next_pointers_on_new_nodes(t_rotate *new)
{
	new->first_node->next = new->scond_node;
	new->last_node->next = NULL;
}

static void	init_prev_pointers_on_new_nodes(t_rotate *new)
{
	new->first_node->prev = NULL;
	new->scond_node->prev = new->first_node;
}

static void	put_new_stack_on_data(t_rotate *new, t_list **stack)
{
	*stack = new->first_node;
}
