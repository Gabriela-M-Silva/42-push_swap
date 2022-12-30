/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordenate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 01:08:48 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/30 22:04:56 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_ordenate(t_data *data) //func apenas p teste, tirar dps
{
	t_doubly_list *aux_node;

//	swap(data, 'a');
//	swap(data, 'b');
//	push(data, 'a');
//	push(data, 'b');
//	rotate(data, 'a');
//	rotate(data, 'b');
//	reverse_rotate(data, 'a');
//	reverse_rotate(data, 'b');
	int	i = 0;
	while (i < doubly_lstsize(data->stack_b)) //temporario
	{
		aux_node = ft_doubly_lst_index(data->stack_b, i++);  //oq tem q imprimir é as trocas
		ft_printf("B list: %d\n", aux_node->content);
	}
}

void	simplify_values(t_data *data)
{
	t_doubly_list *node;
	t_doubly_list *aux_node;
	int 			value;

	node = data->stack_a;
	while (node)
	{
		value = 0;
		aux_node = data->stack_a;
		while (aux_node)
		{
			if (node->content > aux_node->content) //scrr n funfa
				value++;
			aux_node = aux_node->next;
		}
		node->simplified_number = value;
		node = node->next;
	}
}

void	ordenate(t_data *data)
{
	data->stack_b = NULL;
	//test_ordenate(data); //func apenas p teste, tirar dps
	simplify_values(data);
	
	//a quantidade de elementos pra sort importa

	if (data->stack_b)
		doubly_lstclear(data->stack_b);
}
