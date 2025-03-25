NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = srcs
OBJS = objs
IMPS = import
INCL = header

LIBFT = $(IMPS)/libft
FT_PRINTF = $(IMPS)/ft_printf

SRC = list_operations.c \
	main.c \
	push_swap.c \
	rotate.c \
	utils.c \

OBJ = $(SRC:.c=.o)

INCLUDES = -I$(INCL) -I$(LIBFT) -I$(FT_PRINTF)/$(INCL)

LIBS = -L$(LIBFT) -lft -L$(FT_PRINTF) -lftprintf

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT)
	$(MAKE) -C $(FT_PRINTF)
	ar rc $(CC) $(CFLAGS) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT) clean
	$(MAKE) -C $(FT_PRINTF) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT) fclean
	$(MAKE) -C $(FT_PRINTF) fclean

re: fclean $(NAME)

.PHONY all clean fclean re