/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:40:25 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/20 08:29:44 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux_lst;

	if (!*lst)
		*lst = new;
	else
	{
		aux_lst = ft_lstlast(*lst);
		aux_lst->next = new;
	}
}
