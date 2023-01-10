/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:31:50 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 20:39:40 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	doubly_lstclear(t_doubly_list *lst)
{
	if (lst)
	{
		doubly_lstclear(lst->next);
		free(lst);
	}
}
