# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/02 15:48:05 by sarfreit          #+#    #+#              #
#    Updated: 2025/08/03 19:58:10 by bmichel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = main.c errors.c ft_split.c ft_strjoin.c functions.c load.c struct_key.c print_tens_units.c zero_group.c print_all.c functions2.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

