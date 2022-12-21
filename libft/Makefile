# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 00:34:50 by gde-mora          #+#    #+#              #
#    Updated: 2022/11/23 06:43:50 by gde-mora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa_u.c ft_itoa_hex.c \
	ft_putchar.c ft_putstr.c ./get_next_line/get_next_line.c ./get_next_line/get_next_line_utils.c \
	./ft_printf/ft_printf.c ./ft_printf/ft_printf_format_ascii.c ./ft_printf/ft_printf_format_hex.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c 

NAME = libft.a

OBJS = $(SRC:.c=.o)

HEADER = libft.h

RM = rm -f

CC = cc

CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	@$(CC) $(CCFLAGS) -c $< -o $(<:.c=.o)
	@ar -rcs $(NAME) $(<:.c=.o) $(HEADER)

$(NAME): $(OBJS) $(HEADER)
	@echo "Libft Compiled!"

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
