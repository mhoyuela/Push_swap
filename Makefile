# Variables
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

LIBFT_DIR = /home/mhoyuela/Documents/libft
LIBFT = $(LIBFT_DIR)/libft.a


INCLUDES = -I$(LIBFT_DIR)

UTILS_DIR = ./src/utils
MOVES_DIR = ./src/moves
PARSE_DIR = ./src/parse
STEPS_DIR = ./src/steps
SRC_DIR = ./src
SRCS = $(SRC_DIR)/push_swap.c $(SRC_DIR)/ft_init.c $(SRC_DIR)/ft_stack.c $(UTILS_DIR)/ft_order.c $(UTILS_DIR)/ft_isordered.c $(UTILS_DIR)/ft_free.c \
$(MOVES_DIR)/swap.c $(MOVES_DIR)/reverse_rotate.c $(MOVES_DIR)/rotate.c $(MOVES_DIR)/push.c $(PARSE_DIR)/parse.c $(PARSE_DIR)/ft_min_max.c ./src/steps/first_push.c $(STEPS_DIR)/sort_three.c \
$(STEPS_DIR)/costs.c $(STEPS_DIR)/find_target.c $(STEPS_DIR)/cheapest_move.c $(STEPS_DIR)/cost_t.c

# OBJS_SRCS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJ_DIR = ./objs
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)


NAME = push_swap

# Reglas
all: $(NAME)

$(NAME): $(LIBFT)  $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

# Crea los directorios necesarios dentro de OBJ_DIR
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)   # Crea el subdirectorio si no existe
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Regla para crear el directorio de objetos
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
