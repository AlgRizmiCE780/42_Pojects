# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rahman <rahman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 13:28:19 by fmohamed          #+#    #+#              #
#    Updated: 2025/12/11 13:35:02 by rahman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f

# Source files in main directory
SRC = ft_printf.c \
      ft_print_char.c \
      ft_print_nbr.c \
      ft_print_ptr.c \
      ft_print_str.c \
      ft_print_unsigned.c \
      ft_print_hex.c \
      ft_puthex.c

# Libft source files
LIBFT_DIR = libft
LIBFT_SRC = ft_putchar.c \
            ft_putnbr.c \
            ft_putstr.c \
            ft_strlen.c

LIBFT_OBJ = $(addprefix $(LIBFT_DIR)/, $(LIBFT_SRC:.c=.o))

# Object files
OBJ = $(SRC:.c=.o)

# All object files
ALL_OBJ = $(OBJ) $(LIBFT_OBJ)

all: $(NAME)

$(NAME): $(ALL_OBJ)
	$(AR) $(NAME) $(ALL_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_DIR)/%.o: $(LIBFT_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(RM) $(LIBFT_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re