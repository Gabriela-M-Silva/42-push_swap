/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:40:30 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/20 06:11:15 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux_free;

	if (*lst && del && lst)
	{
		while (*lst)
		{
			aux_free = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux_free;
		}
		*lst = NULL;
	}
}
