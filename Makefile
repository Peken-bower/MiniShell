# Makefile

# Define your compiler and flags here
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# List of source files (find all .c files in src and its subdirectories)
SRC_FILES = $(wildcard src/**/*.c) $(wildcard src/*.c)

# Object files derived from source files
OBJ_FILES = $(SRC_FILES:.c=.o)

# Path to the Lib.a file
LIB_ARCHIVE = lib/archive/Lib.a

# The name of the executable
NAME = minishell

# Rule to compile all object files
all: $(NAME)

# Rule to link the object files and create the executable
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) $(LIB_ARCHIVE) -lreadline -o $(NAME)

# Rule to compile individual source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean the object files and the executable
clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
