# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 14:56:23 by gjacinta          #+#    #+#              #
#    Updated: 2021/11/20 13:54:46 by gjacinta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

HEADER	=	ft_printf.h
OBJ = $(SRC:%.c=%.o)

FLAGS = -Wall -Wextra -Werror -I$(HEADER)

SRC = ft_printf.c \
functions.c \
functions2.c \
ft_intlen.c \
ft_intlenbase.c \
ft_itobase.c \
ft_itobase_capital.c \
ft_putchar_fd.c \
ft_putnbr_fd.c \
ft_strlen.c

MAKE = make

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME):	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: all $(OBJb)
	make OBJ="$(OBJb)" all

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJb)

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all
