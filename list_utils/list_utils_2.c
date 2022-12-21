/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:29:17 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/19 18:00:22 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_list_clear(t_list *begin_list)
{
	if (begin_list != NULL)
	{
		ft_list_clear(begin_list->next);
		free(begin_list);
	}
}

t_list	*ft_list_at(t_list *begin_list, unsigned int index)
{
	unsigned int	i;

	i = 0;
	while (begin_list != NULL)
	{
		if (i == index)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*new_list;
	t_list	*save;
	int		i;

	if (*begin_list != NULL)
	{
		i = ft_list_size(*begin_list) - 2;
		new_list = ft_list_last(*begin_list);
		save = new_list;
		while (i >= 0)
		{
			new_list->next = ft_list_at(*begin_list, i);
			new_list = new_list->next;
			i--;
		}
		new_list->next = NULL;
		*begin_list = save;
	}
}
