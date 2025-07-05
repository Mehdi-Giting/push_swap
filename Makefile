# Variables
NAME = push_swap

SRC = src/main.c \
	  src/init/input_check.c \
	  src/init/input_utils.c \
	  src/init/stack_init.c \
	  src/operations/push.c \
	  src/operations/reverse.c \
	  src/operations/rotate.c \
	  src/operations/swap.c \
	  src/utils/errors.c \
	  src/utils/free_list.c \
	  src/utils/list_utils.c \
	  src/utils/indexing.c \
	  src/sorting/helper.c \
	  src/sorting/sorting.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
RM = rm -f

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re