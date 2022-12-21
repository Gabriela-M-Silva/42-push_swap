/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:22:31 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/19 18:00:22 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	set_new_last_node(t_rotate *new, t_list **stack);
static void	set_new_first_node(t_rotate *new, t_list **stack);
static void	set_new_penult_node(t_rotate *new, t_list **stack);
static void	put_new_stack_on_data(t_rotate *new, t_list **stack);

int	ft_rotate(char stack_c, t_data *data)
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
	set_new_first_node(&new, stack);
	set_new_penult_node(&new, stack);
	set_new_last_node(&new, stack);
	put_new_stack_on_data(&new, stack);
	return (0);
}

static void	set_new_first_node(t_rotate *new, t_list **stack)
{	
	new->first_node = (*stack)->next;
	new->first_node->prev = NULL;
}

static void	set_new_penult_node(t_rotate *new, t_list **stack)
{	
	new->penult_node = ft_list_last(*stack);
	new->penult_node->next = *stack;
}

static void	set_new_last_node(t_rotate *new, t_list **stack)
{	
	new->last_node = *stack;
	new->last_node->next = NULL;
	new->last_node->prev = new->penult_node;
}

static void	put_new_stack_on_data(t_rotate *new, t_list **stack)
{
	*stack = new->first_node;
}
