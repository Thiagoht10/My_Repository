# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 18:08:12 by thde-sou          #+#    #+#              #
#    Updated: 2025/08/08 20:05:01 by thde-sou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = push_swap.a

EXEC = push_swap

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

LEAK_MEMORY = valgrind -s --leak-check=full

ARGS = $(filter-out $@,$(MAKECMDGOALS))

SRC = action_one.c aux_one.c push_swap.c sort_one.c action_three.c  aux_two.c \
make_stack.c sort_three.c action_two.c sequence.c sort_two.c sort_four.c \
sort_three.c aux_three.c

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus

$(NAME): $(OBJ) $(LIBFT)
	ar rcsT $(NAME) $(OBJ) $(LIBFT)
	$(CC) $(NAME) -o $(EXEC)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

leak: $(NAME)
	$(LEAK_MEMORY) ./$(EXEC) $(ARGS)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(EXEC)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re leak
