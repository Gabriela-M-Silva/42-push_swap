/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:47:43 by gde-mora          #+#    #+#             */
/*   Updated: 2022/12/30 21:56:43 by gde-mora         ###   ########.fr       */
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
	int						simplified_number;
}	t_doubly_list;

typedef struct s_data
{
	struct s_doubly_list *stack_a;
	struct s_doubly_list *stack_b;
}	t_data;

typedef struct s_swap
{
	struct s_doubly_list *first_node;
	struct s_doubly_list *second_node;
	struct s_doubly_list *third_node;
}	t_swap;

typedef struct s_rotate
{
	struct s_doubly_list *first_node;
	struct s_doubly_list *second_node;
	struct s_doubly_list *penult_node;
	struct s_doubly_list *last_node;
}	t_rotate;

t_doubly_list	*ft_doubly_lstnew(int content);
void	ft_doubly_lstadd_back(t_doubly_list **lst, int number);
t_doubly_list	*ft_doubly_lstlast(t_doubly_list *lst);
t_doubly_list	*ft_doubly_lst_index(t_doubly_list *lst, unsigned int index);
int	doubly_lstsize(t_doubly_list *lst);
void	display_error(char *aux);
int	atoi_check(const char *str);
void	doubly_lstclear(t_doubly_list *lst);
void	validate_args(int argc, char **argv);
void	ordenate(t_data *data);
void	swap(t_data *data, char identify);
void	swap_ss(t_data *data);
void	push(t_data *data, char identify);
void	rotate(t_data *data, char identify);
void	rotate_rr(t_data *data);
void	reverse_rotate(t_data *data, char identify);
void	reverse_rotate_rrr(t_data *data);

#endif