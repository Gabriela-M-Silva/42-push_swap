# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 15:47:39 by gde-mora          #+#    #+#              #
#    Updated: 2022/12/21 22:34:46 by gde-mora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c ./doubly_linked_list_utils/doubly_lst_index.c  ./doubly_linked_list_utils/doubly_lstadd_back.c \
	./doubly_linked_list_utils/doubly_lstlast.c ./doubly_linked_list_utils/doubly_lstnew.c \
	display_error.c atoi_check.c validate.c ./doubly_linked_list_utils/doubly_lstclear.c

OBJ = $(SRC:.c=.o)

# MAKEFILE UTILS
LIBFT_A = ./libft/libft.a

HEADER = push_swap.h

CCFLAGS = -Wall -Wextra -Werror

RM = rm -f

# RULES
all: $(NAME)

.c.o:
	cc $(CCFLAGS) -c $< -o $(<:.c=.o) 

# LIBFT COMPILE
$(LIBFT_A):
	make -C libft

# MANDATORY COMPILE
$(NAME): $(OBJ) $(HEADER) $(LIBFT_A)
	cc $(CCFLAGS) -o $(NAME) $(OBJ) $(LIBFT_A)

# RULES CLEAN FCLEAN AND RE
clean:
	$(RM) $(OBJ)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT_A)

re: fclean all

.PHONY: all clean fclean re