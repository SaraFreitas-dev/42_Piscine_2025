# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bramalho <bramalho@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 19:16:01 by bramalho          #+#    #+#              #
#    Updated: 2025/08/06 19:16:05 by bramalho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c \
	src/helper.c \
	src/map_checker.c \
	src/bsq.c \
	src/solve_map.c \
	src/map_utils.c \
	src/error.c

INCLUDES = -I includes

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
