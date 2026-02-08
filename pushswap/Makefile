# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/06 17:37:08 by fmohamed          #+#    #+#              #
#    Updated: 2026/02/06 17:37:11 by fmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap
CC = cc
CFLAGS = -Wall

SRC = pushswap.c pushswap_utils.c
OBJ = $(SRC:.c=.o)

LIBFT_A = libft/libft.a
PRINTF_A = ft_printf/printf.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_A) $(PRINTF_A)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_A) $(PRINTF_A) -o $(NAME)

$(LIBFT_A):
	$(MAKE) -C libft

$(PRINTF_A):
	$(MAKE) -C ft_printf

%.o: %.c pushswap.h
	$(CC) $(CFLAGS) -I. -Ilibft -Ift_printf -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
