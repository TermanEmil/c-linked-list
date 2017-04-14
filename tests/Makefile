# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eterman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/22 12:15:47 by eterman           #+#    #+#              #
#    Updated: 2016/12/27 20:02:30 by eterman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	t_list_tests
FLAGS		=	-Wall -Wextra -Werror
CC			=	gcc

$(NAME): make_t_list
	$(CC) *.c ../t_list.a -I ../includes/ -o $(NAME)

make_t_list:
	make -C ../

clean:

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

run:
	clear
	./$(NAME)

sure: $(NAME) run
