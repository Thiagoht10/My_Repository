# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 19:52:12 by thde-sou          #+#    #+#              #
#    Updated: 2025/05/10 04:12:57 by thde-sou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
MAIN = main.c
EXEC = a.out

NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SANITIZE = -g -fsanitize=address,undefined,leak -O1

SRC = ft_printf.c ft_printf_utils.c ft_printf_utils_2.c
OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

run: $(NAME) $(LIBFT)
	$(CC) $(FLAGS) $(MAIN) $(NAME) $(LIBFT) -o $(EXEC)
	./$(EXEC)

leak: $(NAME) $(MAIN)
	$(CC) $(FLAGS) $(SANITIZE) $(MAIN) $(NAME) $(LIBFT) -o $(EXEC)
	./$(EXEC)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ) $(NAME)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME) $(EXEC)

re: fclean all

.PHONY: all run leak clean fclean re