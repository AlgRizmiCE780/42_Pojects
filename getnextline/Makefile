# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 13:28:19 by fmohamed          #+#    #+#              #
#    Updated: 2025/12/19 15:33:45 by fmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = getnextline.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f

SRC = get_next_line_bonus.c \
      get_next_line.c     \
      get_next_line_utils.c \
      get_next_line_utils_bonus.c  

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