/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:18:25 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 18:29:24 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux_lst;
	int		len;

	aux_lst = lst;
	len = 0;
	while (aux_lst)
	{
		aux_lst = aux_lst->next;
		len++;
	}
	return (len);
}
