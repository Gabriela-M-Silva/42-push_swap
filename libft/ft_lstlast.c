/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:28:36 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/18 04:21:22 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux_lst;

	aux_lst = lst;
	if (!lst)
		return (lst);
	while (aux_lst->next)
	{
		aux_lst = aux_lst->next;
	}
	return (aux_lst);
}
