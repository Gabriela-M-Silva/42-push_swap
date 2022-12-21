/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:06:29 by gsmereka          #+#    #+#             */
/*   Updated: 2022/12/21 18:31:40 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_doubly_list	*ft_create_elem(int content)
{
	t_doubly_list	*new_node;

	new_node = malloc(sizeof(t_doubly_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	ft_doubly_list_push_front(t_doubly_list **begin_list, int content)
{
	t_doubly_list	*new_first_node;
	t_doubly_list	*pushed_node;

	new_first_node = ft_create_elem(content);
	pushed_node = *begin_list;
	*begin_list = new_first_node;
	new_first_node->next = pushed_node;
	new_first_node->prev = NULL;
	pushed_node->prev = new_first_node;
}

int	ft_doubly_list_size(t_doubly_list *begin_list)
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

t_doubly_list	*ft_doubly_list_last(t_doubly_list *begin_list)
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

void	ft_doubly_list_push_back(t_doubly_list **begin_list, int content)
{
	t_doubly_list	*last_node;
	t_doubly_list	*new_node;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(content);
	else
	{
		last_node = ft_doubly_list_last(*begin_list);
		new_node = ft_create_elem(content);
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}
