/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lstlast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:09:18 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/16 17:45:24 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_doubly_list	*ft_doubly_lstlast(t_doubly_list *lst)
{
	t_doubly_list	*aux_lst;

	aux_lst = lst;
	if (!lst)
		return (lst);
	while (aux_lst->next)
	{
		aux_lst = aux_lst->next;
	}
	return (aux_lst);
}
