# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 14:56:23 by gjacinta          #+#    #+#              #
#    Updated: 2021/11/13 15:01:31 by gjacinta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c functions.c functions2.c \

LIBFT_PATH = ./libft/

MAKE = make

all: my_libft $(NAME)

.PHONY: all clean fclean re bonus

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar -rcs $(NAME) *.o $(LIBFT_PATH)*.o

my_libft:
	$(MAKE) libft.a -C $(LIBFT_PATH)

clean:
	rm -f *.out
	rm -f *.o
	$(MAKE) clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all
