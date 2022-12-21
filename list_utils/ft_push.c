/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:47:43 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/19 18:00:24 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static int		push_stack(t_list **stack_1, t_list **stack_2);
static t_list	*set_pushed_node(t_list **stack_1);
static t_list	*set_pulled_node(t_list **stack_1, t_list **stack_2);

int	ft_push(char stack_c, t_data *data)
{
	if (stack_c == 'a')
		push_stack(&data->stack_a, &data->stack_b);
	if (stack_c == 'b')
		push_stack(&data->stack_b, &data->stack_a);
	return (0);
}

static int	push_stack(t_list **stack_1, t_list **stack_2)
{
	t_list	*pushed_stack;
	t_list	*pulled_stack;

	if (*stack_1 == NULL)
		return (0);
	pushed_stack = set_pushed_node(stack_1);
	pulled_stack = set_pulled_node(stack_1, stack_2);
	(*stack_2) = pulled_stack;
	(*stack_1) = pushed_stack;
	return (0);
}

static t_list	*set_pulled_node(t_list **stack_1, t_list **stack_2)
{
	t_list	*second_pulled_node;
	t_list	*pulled_node;

	pulled_node = (*stack_1);
	pulled_node->next = (*stack_2);
	pulled_node->prev = NULL;
	second_pulled_node = (*stack_2);
	if (second_pulled_node)
		second_pulled_node->prev = pulled_node;
	return (pulled_node);
}

static t_list	*set_pushed_node(t_list **stack_1)
{
	t_list	*pushed_node;

	pushed_node = (*stack_1)->next;
	if (pushed_node)
		pushed_node->prev = NULL;
	return (pushed_node);
}
