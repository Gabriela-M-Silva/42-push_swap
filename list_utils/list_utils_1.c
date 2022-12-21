/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:06:29 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/19 18:00:22 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_list	*ft_create_elem(int nmb)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->nmb = nmb;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	ft_list_push_front(t_list **begin_list, int nmb)
{
	t_list	*new_first_node;
	t_list	*pushed_node;

	new_first_node = ft_create_elem(nmb);
	pushed_node = *begin_list;
	*begin_list = new_first_node;
	new_first_node->next = pushed_node;
	new_first_node->prev = NULL;
	pushed_node->prev = new_first_node;
}

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 1;
	if (!begin_list)
		return (-1);
	while (begin_list->next != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);
	while (begin_list != NULL)
	{
		if (begin_list->next != NULL)
			begin_list = begin_list->next;
		else
			break ;
	}
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, int nmb)
{
	t_list	*last_node;
	t_list	*new_node;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(nmb);
	else
	{
		last_node = ft_list_last(*begin_list);
		new_node = ft_create_elem(nmb);
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}
