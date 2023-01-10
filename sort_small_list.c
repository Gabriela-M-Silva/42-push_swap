/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:04:09 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/31 21:55:16 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_lst_ordenate(t_data *data)
{
	t_doubly_list	*aux_node;

	aux_node = data->stack_a;
	while (aux_node->next)
	{
		if (aux_node->content > aux_node->next->content)
			return (0);
		aux_node = aux_node->next;
	}
	return (1);
}

void	sort_3_elements(t_data *data)
{
	while (!check_lst_ordenate(data))
	{
		if (data->stack_a->content > data->stack_a->next->next->content)
		{
			rotate(data, 'a');
			ft_printf("ra\n");
		}
		else
		{
			swap(data, 'a');
			ft_printf("sa\n");
		}
	}
}

int	is_smallest(t_doubly_list *stack_a, int content_nbr)
{
	t_doubly_list	*aux_stack;

	aux_stack = stack_a;
	while (aux_stack)
	{
		if (aux_stack->content < content_nbr)
			return (0);
		aux_stack = aux_stack->next;
	}
	return (1);
}

void	sort_5_elements(t_data *data)
{
	t_doubly_list	*lst_last;

	while (!check_lst_ordenate(data))
	{
		lst_last = ft_doubly_lstlast(data->stack_a);
		if (is_smallest(data->stack_a, data->stack_a->content))
		{
			push(data, 'b');
			ft_printf("pb\n");
		}
		else if (is_smallest(data->stack_a, lst_last->content)
			|| is_smallest(data->stack_a, lst_last->prev->content))
		{
			reverse_rotate(data, 'a');
			ft_printf("rra\n");
		}
		else
		{
			rotate(data, 'a');
			ft_printf("ra\n");
		}
	}
}
