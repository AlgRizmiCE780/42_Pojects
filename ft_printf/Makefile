# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 13:28:19 by fmohamed          #+#    #+#              #
#    Updated: 2025/11/24 14:33:58 by fmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f
SRC =  ft_printf.c ft_print_char.c ft_print_str.c ft_print_int.c ft_print_unsigned.c ft_print_hex.c ft_print_ptr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	
	$(RM) $(NAME)

re: fclean all

.PHONY = all bonus clean fclean re