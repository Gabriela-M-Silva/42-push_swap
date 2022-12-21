/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:23:29 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 22:43:57 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_min_int(char	*argv, int point, int number, char *aux)
{
	int	signal;

	signal = 0;
	if (argv[point] == '-')
	{
		signal = 1;
		point++;
		if (number == 0)
		{
			if (ft_strncmp(aux, &argv[point], ft_strlen(aux)) != 0)
				display_error(aux);
			return ;
		}
	}
	while (argv[point] == '0' && argv[point + 1] != '\0')
		point++;
	if (ft_strncmp(&aux[signal], &argv[point], ft_strlen(aux)) != 0)
		display_error(aux);
}

void	check_numeric(char **argv)
{
	int	i;
	int	point;
	int number;
	char	*aux;

	i = 1;
	aux = NULL;
	while (argv[i])
	{
		point = atoi_check(argv[i]);
		number = ft_atoi(argv[i]);
		aux = ft_itoa(number);
		check_max_min_int(argv[i], point, number, aux);
		i++;
		free(aux);
	}
}

void	validate_args(int argc, char **argv)
{
	if (argc <= 2)
		exit (0); //If no parameters are specified, the program must not display anything and give the prompt back.
					//argc 2 é um numero só. Tratando como ja sendo lista ordenada e saindo
	check_numeric(argv);
//	check_duplicate(argv); //pega 1 do argv e percorre td argv comparando, dps pro prox e percorre td comparando dnv
//	check_numbers(argv); (no)
//	ft_printf("Input.\n"); //personalizar dentro da função dps
}
