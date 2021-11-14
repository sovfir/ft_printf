# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 14:56:23 by gjacinta          #+#    #+#              #
#    Updated: 2021/11/14 13:32:14 by gjacinta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

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

all: $(NAME)

.PHONY: all clean fclean re bonus

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar -rcs $(NAME) *.o $(LIBFT_PATH)*.o

clean:
	rm -f *.out
	rm -f *.o
	$(MAKE) clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all
