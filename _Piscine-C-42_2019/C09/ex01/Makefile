# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: safernan <safernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 11:58:27 by safernan          #+#    #+#              #
#    Updated: 2019/06/20 15:17:53 by safernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
HEAD = includes/ft.h
FLAG = -Wall -Wextra -Werror

all: $(NAME)

srcs/%.o: srcs/%.c
	gcc $(FLAG) -c $< -o $@

$(NAME): $(OBJS)
	gcc -I $(HEAD) $(FLAG) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)
	
clean:
	rm -rf ./srcs/$(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY:		all clean fclean re
