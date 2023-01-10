/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:44:14 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/31 21:17:00 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	create_stack_a(char **argv, t_data *data)
{
	int	i;

	i = 1;
	data->stack_a = ft_doubly_lstnew(ft_atoi(argv[i++]));
	while (argv[i])
		ft_doubly_lstadd_back(&data->stack_a, ft_atoi(argv[i++]));
}

int	main(int argc, char **argv)
{
	t_data	data;

	validate_args(argc, argv);
	create_stack_a(argv, &data);
	ordenate(&data);
	doubly_lstclear(data.stack_a);
	if (data.stack_b)
		doubly_lstclear(data.stack_b);
	return (0);
}
