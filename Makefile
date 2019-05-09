# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpapier <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 17:47:22 by hpapier           #+#    #+#              #
#    Updated: 2017/11/21 14:47:43 by pcahier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

C_FILES = display.c ft_checkval.c ft_error.c ft_generatesmallmap.c ft_gentab.c \
		  ft_getridof.c ft_placetetro.c ft_strcharcomp.c ft_tetrocheck.c	   \
		  isvalidate.c main.c ft_checkforsmall.c ft_strchr.c ft_putnbr.c       \
		  ft_putchar.c

O_FILES = $(C_FILES:.c=.o)

CC = gcc -Wall -Wextra -Werror

INC = fillit.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) -c $(C_FILES)
	$(CC) $(O_FILES) -o $(NAME)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
