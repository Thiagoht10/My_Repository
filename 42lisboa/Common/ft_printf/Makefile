CC = cc
AR = ar
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
MAIN = main.c
EXEC = a.out

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c ft_printf_utils.c ft_printf_utils_2.c
OBJ = $(SRC:.c=.o)
LIBFT_OBJ = libft/ft_atoi.o libft/ft_bzero.o libft/ft_calloc.o libft/ft_isalnum.o libft/ft_isalpha.o \
			libft/ft_isascii.o libft/ft_isdigit.o libft/ft_isprint.o libft/ft_itoa_base.o libft/ft_itoa.o \
			libft/ft_lstadd_back_bonus.o libft/ft_lstadd_front_bonus.o libft/ft_lstclear_bonus.o libft/ft_lstdelone_bonus.o \
			libft/ft_lstiter_bonus.o libft/ft_lstlast_bonus.o libft/ft_lstmap_bonus.o libft/ft_lstnew_bonus.o libft/ft_lstsize_bonus.o \
			libft/ft_memchr.o libft/ft_memcmp.o libft/ft_memcpy.o libft/ft_memmove.o libft/ft_memset.o libft/ft_putchar_fd.o \
			libft/ft_putendl_fd.o libft/ft_putnbr_fd.o libft/ft_putstr_fd.o libft/ft_split.o libft/ft_strchr.o libft/ft_strdup.o \
			libft/ft_striteri.o libft/ft_strjoin.o libft/ft_strlcat.o libft/ft_strlcpy.o libft/ft_strlen.o libft/ft_strmapi.o\
			libft/ft_strncmp.o libft/ft_strnstr.o libft/ft_strrchr.o libft/ft_strtrim.o libft/ft_substr.o libft/ft_tolower.o libft/ft_toupper.o

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus

$(NAME): $(OBJ) $(LIBFT)
	$(AR) rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

%.o: %.c
	$(CC) $(FLAGS)  -c $< -o $@

run: $(NAME)
	$(CC) $(FLAGS) $(MAIN) $(NAME) -o $(EXEC)
	./$(EXEC)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean re run