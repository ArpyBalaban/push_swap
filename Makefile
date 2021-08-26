NAME = push_swap

SRCS = $(shell find "." -name "*.c")
OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

clean:
	@$(MAKE) -C ./libft fclean
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

