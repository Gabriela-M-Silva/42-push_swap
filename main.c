/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:44:14 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 22:33:58 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_doubly_list	*node;
	int				i;
	t_doubly_list	*aux_node;

	validate_args(argc, argv); //aq ja vou ve se é numério
	i = 1;
	node = ft_doubly_lstnew(ft_atoi(argv[i++]));
	while (argv[i])
		ft_doubly_lstadd_back(&node, ft_atoi(argv[i++]));
	//	node.content = ft_atoi(argv[i++]); //mas oq eu tenho q imprimir é as trocas
	i = 0;
	while (i < argc - 1)
	{
		aux_node = ft_doubly_lst_index(node, i++);
		ft_printf("%d\n", aux_node->content);
	}
	doubly_lstclear(node);
	return (0);
}
