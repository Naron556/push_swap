# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 20:39:50 by aoperacz          #+#    #+#              #
#    Updated: 2025/03/30 19:44:47 by arkadiusz        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_hex.c \
        ft_heX.c \
        ft_printf.c \
        ft_put_u_nbr.c \
        ft_putchar_fd.c \
        ft_putnbr_fd.c \
        ft_putstr_fd.c \
        ft_strlen.c \
        ft_pointer.c\
        
OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)