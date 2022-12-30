/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lstsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:18:25 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/27 18:44:58 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	doubly_lstsize(t_doubly_list *lst)
{
	t_doubly_list	*aux_lst;
	int				len;

	aux_lst = lst;
	len = 0;
	while (aux_lst)
	{
		aux_lst = aux_lst->next;
		len++;
	}
	return (len);
}
