/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:22:47 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 14:28:57 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_doubly_list	*ft_doubly_lst_index(t_doubly_list *lst, unsigned int index)
{
	t_doubly_list	*aux_lst;
	unsigned int	i;

	aux_lst = lst;
	if (!lst)
		return (lst);
	i = 0;
	while (aux_lst->next && i++ != index)
		aux_lst = aux_lst->next;
	return (aux_lst);
}
