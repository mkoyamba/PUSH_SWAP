# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 11:29:03 by mkoyamba          #+#    #+#              #
#    Updated: 2022/02/21 12:07:25 by mkoyamba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

INCLUDES = push_swap.h

LIB = libft/libft.a

SRC =	push_swap.c \

all: $(NAME)

$(NAME):
	make -C libft
	gcc $(FLAGS) $(SRC) $(LIB) -I $(INCLUDES) -o $(NAME)

clean:
	make -C libft clean

fclean: clean
	make -C libft fclean
	rm -f push_swap

re: fclean all

.PHONY: all, clean, fclean, bonus, re