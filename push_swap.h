/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:47:43 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/21 18:29:25 by gsmereka         ###   ########.fr       */
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

typedef struct s_swap
{
	t_doubly_list	*first_node;
	t_doubly_list	*scond_node;
	t_doubly_list	*third_node;
}	t_swap;

typedef struct t_rotate
{
	t_doubly_list	*first_node;
	t_doubly_list	*scond_node;
	t_doubly_list	*penult_node;
	t_doubly_list	*last_node;
}	t_rotate;

typedef struct s_data
{
	int						*user_args;
	int						max_stack_size;
	struct s_doubly_list	*stack_a;
	struct s_doubly_list	*stack_b;
}	t_data;


t_doubly_list	*ft_doubly_lstnew(int content);
void	ft_doubly_lstadd_back(t_doubly_list **lst, int number);
t_doubly_list	*ft_doubly_lstlast(t_doubly_list *lst);
t_doubly_list	*ft_doubly_lst_index(t_doubly_list *lst, unsigned int index);
void	display_error();
int	atoi_check(const char *str);

t_doubly_list	*ft_create_elem(int nmb);
void			ft_doubly_list_push_front(t_doubly_list **begin_list, int nmb);
int				ft_doubly_list_size(t_doubly_list *begin_list);
t_doubly_list	*ft_doubly_list_last(t_doubly_list *begin_list);
void			ft_doubly_list_push_back(t_doubly_list **begin_list, int nmb);

// list_utils_2
void			ft_doubly_list_clear(t_doubly_list *begin_list);
t_doubly_list	*ft_doubly_list_at(t_doubly_list *begin_list, unsigned int index);
void			ft_doubly_list_reverse(t_doubly_list **begin_list);

// swaps
int		ft_swap(char stack_c, t_data *data);
int		ft_push(char stack_c, t_data *data);
int		ft_rotate(char stack_c, t_data *data);
int		ft_reverse_rotate(char stack_c, t_data *data);

#endif