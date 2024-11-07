NAME := libft.a
CC := cc
CC_FLAGS := -Wall -Werror -Wextra

AR := ar
AR_FLAGS := -csr

SRC_DIR = .
OBJ_DIR = obj

FT_FILES := $(SRC_DIR)/ft_atoi.c \
$(SRC_DIR)/ft_bzero.c \
$(SRC_DIR)/ft_calloc.c \
$(SRC_DIR)/ft_isalnum.c \
$(SRC_DIR)/ft_isalpha.c \
$(SRC_DIR)/ft_memchr.c \
$(SRC_DIR)/ft_isascii.c \
$(SRC_DIR)/ft_isdigit.c \
$(SRC_DIR)/ft_isprint.c \
$(SRC_DIR)/ft_memcpy.c \
$(SRC_DIR)/ft_memcmp.c \
$(SRC_DIR)/ft_memmove.c \
$(SRC_DIR)/ft_memset.c \
$(SRC_DIR)/ft_strchr.c \
$(SRC_DIR)/ft_strdup.c \
$(SRC_DIR)/ft_strjoin.c \
$(SRC_DIR)/ft_strlcat.c \
$(SRC_DIR)/ft_strlcpy.c \
$(SRC_DIR)/ft_strlen.c \
$(SRC_DIR)/ft_strncmp.c \
$(SRC_DIR)/ft_strnstr.c \
$(SRC_DIR)/ft_strrchr.c \
$(SRC_DIR)/ft_strtrim.c \
$(SRC_DIR)/ft_substr.c \
$(SRC_DIR)/ft_tolower.c \
$(SRC_DIR)/ft_toupper.c \
$(SRC_DIR)/ft_itoa.c \
$(SRC_DIR)/ft_putchar_fd.c \
$(SRC_DIR)/ft_putendl_fd.c \
$(SRC_DIR)/ft_putnbr_fd.c \
$(SRC_DIR)/ft_putstr_fd.c \
$(SRC_DIR)/ft_split.c \
$(SRC_DIR)/ft_striteri.c \
$(SRC_DIR)/ft_strmapi.c \

FT_FILES_BONUS := $(SRC_DIR)/ft_lstnew_bonus.c \
$(SRC_DIR)/ft_lstadd_front_bonus.c \
$(SRC_DIR)/ft_lstsize_bonus.c \
$(SRC_DIR)/ft_lstlast_bonus.c \
$(SRC_DIR)/ft_lstadd_back_bonus.c \
$(SRC_DIR)/ft_lstclear_bonus.c \
$(SRC_DIR)/ft_lstdelone_bonus.c \
$(SRC_DIR)/ft_lstiter_bonus.c \
$(SRC_DIR)/ft_lstmap_bonus.c \

OBJ := $(FT_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_BONUS := $(FT_FILES_BONUS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CC_FLAGS) -c -o $@ $<

printobj:
	@echo $(FT_FILES)

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ) $(OBJ_BONUS)

.PHONY: all clean fclean re bonus
