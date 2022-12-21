/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:44:14 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 18:26:08 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_int(char	*argv, int point, int number, char *aux, int signal)
{
	if (argv[point] == '-')
		{
			signal = 1;
			point++;
			if (number == 0)
			{
				ft_printf("string aux: %s\n", aux);
				ft_printf("string origem: %s\n", &argv[point]);
				ft_printf("num: %d\n", number);
				ft_printf("------------\n");
				if (ft_strncmp(aux, &argv[point], ft_strlen(aux)) != 0)
					display_error();
				return ;
			}
		}
		while (argv[point] == '0' && argv[point + 1] != '\0')
			point++;
		ft_printf("string aux: %s\n", &aux[signal]);
		ft_printf("string origem: %s\n", &argv[point]);
		ft_printf("num: %d\n", number);
		ft_printf("------------\n"); //teste
		if (ft_strncmp(&aux[signal], &argv[point], ft_strlen(aux)) != 0)
			display_error();
}

void	check_numeric(char **argv)
{
	int	i;
	int	point;
	int	signal;
	int number;
	char	*aux;

	i = 1;
	aux = NULL;
	while (argv[i])
	{
		point = 0;
		signal = 0;
		point = atoi_check(argv[i]);
		number = ft_atoi(argv[i]);
		aux = ft_itoa(number);
		check_max_int(argv[i], point, number, aux, signal);
		i++;
	//	free(aux);
	}
}

void	validate_args(int argc, char **argv)
{
	if (argc <= 2)
		exit (0); //If no parameters are specified, the program must not display anything and give the prompt back.
					//argc 2 é um numero só. Tratando como ja sendo lista ordenada e saindo
	check_numeric(argv);
//	check_max_int(argv);
//	check_duplicate(argv); //pega 1 do argv e percorre td argv comparando, dps pro prox e percorre td comparando dnv
//	check_numbers(argv); (no)
//	ft_printf("Input.\n"); //personalizar dentro da função dps
}

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
	return (0);
}
