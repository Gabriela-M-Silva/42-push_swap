/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:44:14 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/30 20:21:35 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stacks(char **argv, t_data *data) //mudar nome p stack_a apenas?
{
	int	i;

	i = 1;
	data->stack_a = ft_doubly_lstnew(ft_atoi(argv[i++]));
	while (argv[i])
		ft_doubly_lstadd_back(&data->stack_a, ft_atoi(argv[i++]));
	//e a stack_b? quando for usando mesmo?
}

int	main(int argc, char **argv) //rodar com valgrind dps  //e norminette
{
	t_data	data;
	t_doubly_list	*aux_node; //temporario

	validate_args(argc, argv);
	create_stacks(argv, &data);

//print p teste
	int i = 0;
	while (i < doubly_lstsize(data.stack_a)) //temporario
	{
		aux_node = ft_doubly_lst_index(data.stack_a, i++);  //oq tem q imprimir é as trocas
		ft_printf("%d\n", aux_node->content);
	}
	ft_printf("-------------\n");

	ordenate(&data, argv);

//print p teste
/*	i = 0;
	while (i < doubly_lstsize(data.stack_a)) //temporario
	{
		aux_node = ft_doubly_lst_index(data.stack_a, i++);  //oq tem q imprimir é as trocas
		ft_printf("A list: %d\n", aux_node->content);
	}
	doubly_lstclear(data.stack_a);
	return (0);*/
}
