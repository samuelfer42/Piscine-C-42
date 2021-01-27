# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: safernan <safernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 11:58:27 by safernan          #+#    #+#              #
#    Updated: 2019/06/25 16:01:53 by safernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/main.c \
			srcs/ft_put_error.c \
			srcs/ft_count_map.c

			
OBJS = srcs/ft_putchar.o \
			srcs/ft_putstr.o \
			srcs/ft_strlen.o \
			srcs/main.o \
			srcs/ft_put_error.o \
			srcs/ft_count_map.o

HEAD = includes/

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OPTION = -I $(HEAD)
RM = rm -rf

all: $(NAME)

$(NAME):
	@$(CC) -c $(CFLAGS) $(SRCS) $(OPTION)
	@echo "Creation des .o"
	@mv *.o srcs/
	@echo "Deplacement des .o dans srcs/"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 
	@echo "Creation de l'executable => bsq"
	

clean:
	@$(RM) $(OBJS)
	@echo "Suppression des .o"

fclean: clean
	@$(RM) $(NAME)
	@echo "Suppression de l'executable bsq"

re: fclean all

.PHONY:		all clean fclean re
