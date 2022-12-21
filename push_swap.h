/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:47:43 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 17:33:35 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_doubly_list
{
	struct s_doubly_list	*prev;
	int						content;
	struct s_doubly_list	*next;
}	t_doubly_list;

t_doubly_list	*ft_doubly_lstnew(int content);
void	ft_doubly_lstadd_back(t_doubly_list **lst, int number);
t_doubly_list	*ft_doubly_lstlast(t_doubly_list *lst);
t_doubly_list	*ft_doubly_lst_index(t_doubly_list *lst, unsigned int index);
void	display_error();
int	atoi_check(const char *str);

#endif