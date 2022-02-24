# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 11:29:03 by mkoyamba          #+#    #+#              #
#    Updated: 2022/02/24 14:35:00 by mkoyamba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

INCLUDES = push_swap.h

LIB = libft/libft.a

SRC =	push_swap.c \
		push_swap_init.c \
		push_swap_utils.c \
		push_swap_init_utils.c \
		push_swap_init_tools.c \
		move_ss.c \
		main.c \

all: $(NAME)

$(NAME):
#	make -C libft
	gcc $(FLAGS) $(SRC) $(LIB) -I $(INCLUDES) -o $(NAME)

clean:
	make -C libft clean

fclean: #clean
#	make -C libft fclean
# a remove VVV
#	make -C libft clean
	rm -f push_swap

re: fclean all

.PHONY: all, clean, fclean, bonus, re