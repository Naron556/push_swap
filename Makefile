NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g $(INCLUDES)

SRCS = srcs
IMPS = import
INCL = header

LIBFT = $(IMPS)/libft
FT_PRINTF = $(IMPS)/ft_printf

SRC = $(SRCS)/list_operations.c \
      $(SRCS)/main.c \
      $(SRCS)/push_swap.c \
      $(SRCS)/rotate.c \
      $(SRCS)/utils.c \
	  $(SRCS)/radix_sort.c \
	  $(SRCS)/sort_small.c \
	  $(SRCS)/input_handling.c


OBJ = $(SRC:.c=.o)

INCLUDES = -I$(INCL) -I$(LIBFT) -I$(FT_PRINTF)

LIBS =-L$(FT_PRINTF) -lftprintf -L$(LIBFT) -lft 

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT)
	$(MAKE) -C $(FT_PRINTF)
	$(CC) $(CFLAGS)  $(OBJ) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT) clean
	$(MAKE) -C $(FT_PRINTF) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT) fclean
	$(MAKE) -C $(FT_PRINTF) fclean

re: fclean $(NAME)

.PHONY: all clean fclean re