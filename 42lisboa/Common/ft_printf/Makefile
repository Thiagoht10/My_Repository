# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 20:40:45 by thde-sou          #+#    #+#              #
#    Updated: 2025/05/16 22:07:53 by thde-sou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
MAIN = main.c
EXEC = a.out

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SANITIZE = -g -fsanitize=address,undefined,leak,null,bounds,float-divide-by-zero -O1

SRC = ft_printf.c ft_printf_utils.c ft_printf_utils_2.c
OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus

$(NAME): $(OBJ) $(LIBFT)
	$(AR) rcs $(NAME) $(OBJ)
	@mkdir -p .tmp_libft
	@cp $(LIBFT) .tmp_libft/libft.a
	@cd .tmp_libft && $(AR) x libft.a
	@for file in .tmp_libft/*.o; do $(AR) rcs $(NAME) $$file; done
	@rm -rf .tmp_libft

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

run: $(NAME)
	$(CC) $(FLAGS) $(MAIN) $(NAME) -o $(EXEC)
	./$(EXEC)

leak: $(NAME)
	$(CC) $(SANITIZE) $(MAIN) $(NAME) -o $(EXEC)
	./$(EXEC)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME) $(EXEC)

re: fclean all

.PHONY: all run leak clean fclean re