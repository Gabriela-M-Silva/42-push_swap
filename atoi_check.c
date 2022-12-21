/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:32:09 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 19:33:58 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int atoi_check(const char *str)
{
	int i;
	int point;

	i = 0;
	point = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
		point++;
	}
	if (str[i] == '+')
		point++;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	//	point++;
	}
/*	while (str[i] == '0' && str[i + 1]) //?????
	{
		point++;
		i++;
	}*/
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != '\0')
		display_error();
	return (point);
}