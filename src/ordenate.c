/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordenate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 01:08:48 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/31 21:14:18 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	radix_aux(t_data *data, int number, int shifter)
{
	if ((number >> shifter) & 1)
	{
		rotate(data, 'a');
		ft_printf("ra\n");
	}
	else
	{
		push(data, 'b');
		ft_printf("pb\n");
	}
}

void	radix_sort(t_data *data)
{
	int	lst_size;
	int	shifter;
	int	element;
	int	number;

	lst_size = doubly_lstsize(data->stack_a);
	shifter = 0;
	while (!check_lst_ordenate(data))
	{
		element = 0;
		while (element < lst_size)
		{
			number = data->stack_a->simplified_number;
			radix_aux(data, number, shifter);
			element++;
		}
		while (data->stack_b)
		{
			push(data, 'a');
			ft_printf("pa\n");
		}
		shifter++;
	}
}

void	simplify_values(t_data *data)
{
	t_doubly_list	*node;
	t_doubly_list	*aux_node;
	int				value;

	node = data->stack_a;
	while (node)
	{
		value = 0;
		aux_node = data->stack_a;
		while (aux_node)
		{
			if (node->content > aux_node->content)
				value++;
			aux_node = aux_node->next;
		}
		node->simplified_number = value;
		node = node->next;
	}
}

void	ordenate(t_data *data)
{
	int	lst_size;

	data->stack_b = NULL;
	lst_size = doubly_lstsize(data->stack_a);
	simplify_values(data);
	if (lst_size == 2)
	{
		swap(data, 'a');
		ft_printf("sa\n");
	}
	else if (lst_size == 3)
		sort_3_elements(data);
	else if (lst_size == 4 || lst_size == 5)
	{
		sort_5_elements(data);
		while (data->stack_b)
		{
			push(data, 'a');
			ft_printf("pa\n");
		}
	}
	else
		radix_sort(data);
}
