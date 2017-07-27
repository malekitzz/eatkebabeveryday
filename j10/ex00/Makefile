# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/19 08:38:40 by ysalaun           #+#    #+#              #
#    Updated: 2017/07/20 11:14:50 by ysalaun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = ./includes/
SRC = ./srcs/ft_putchar.c ./srcs/ft_strlen.c ./srcs/ft_swap.c \
	  ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \

SRCO = ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o 

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)
$(NAME):
	gcc $(CFLAGS) $(SRC) -I $(HEADER)

	ar rc $(NAME) $(SRCO)
clean:
	/bin/rm -f $(SRCO)
fclean:
	/bin/rm -f  $(NAME)
	/bin/rm -f $(SRCO)
re: fclean $(NAME) 
