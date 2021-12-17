# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 14:42:14 by clora-ro          #+#    #+#              #
#    Updated: 2021/12/17 16:49:52 by clora-ro         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c			\
		ft_printf_utils.c	\
		ft_printf_nbr.c

OBJS := $(SRCS:.c=.o)

CC = gcc -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :	$(OBJS)
			ar rcs $(NAME) $(OBJS)

%.o : %.c ft_printf.h
	$(CC) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all, clean, fclean