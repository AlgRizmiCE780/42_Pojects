# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 13:28:19 by fmohamed          #+#    #+#              #
#    Updated: 2025/12/17 14:18:24 by fmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f

SRC = ft_printf.c \
      ft_print_char.c \
      ft_print_nbr.c \
      ft_print_ptr.c \
      ft_print_str.c \
      ft_print_unsignbr.c \
      ft_print_hex.c \
      ft_print_hexptr.c \
      ft_printf_utils.c \
      ft_itoa.c 

OBJ = $(SRC:.c=.o)

ALL_OBJ = $(OBJ)

all: $(NAME)

$(NAME): $(ALL_OBJ)
	$(AR) $(NAME) $(ALL_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
      
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re