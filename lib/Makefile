CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source directory
SRC_DIR := src

# Archive directory and name
ARCHIVE_DIR := archive
ARCHIVE_NAME := $(ARCHIVE_DIR)/Lib.a

# Object directory
OBJ_DIR := object

# Find source files recursively
SRC_FILES := $(shell find $(SRC_DIR) -name '*.c')

# Object files
OBJ_FILES := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Colors
COLOR_RESET = \033[0m
COLOR_CYAN = \033[36m
COLOR_MAGENTA = \033[35m
COLOR_GREEN = \033[92m
COLOR_YELLOW = \033[33m
COLOR_RED = \033[91m

# Emoji
EMOJI_CHECKMARK = ✅
EMOJI_TRASH = 🗑️
EMOJI_ERROR = ❌
EMOJI_ARCHIVE = 📦

all: $(ARCHIVE_NAME)

$(ARCHIVE_NAME): $(OBJ_FILES)
	@if [ ! -f $(ARCHIVE_NAME) ] || [ -n "$$(find $(SRC_DIR) -name '*.c' -newer $(ARCHIVE_NAME))" ]; then \
		echo "$(COLOR_CYAN)$(EMOJI_ARCHIVE) The library needs to be rebuilt$(COLOR_RESET)"; \
		mkdir -p $(ARCHIVE_DIR); \
		ar rcs $@ $^; \
		echo "$(COLOR_CYAN)$(EMOJI_ARCHIVE) The archive was generated in $(ARCHIVE_DIR)$(COLOR_RESET)"; \
	else \
		echo "$(COLOR_CYAN)$(EMOJI_ARCHIVE) The library is up to date$(COLOR_RESET)"; \
	fi

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)/$(dir $*)
	@if [ -f $@ ] && [ "$<" -ot "$@" ]; then \
		echo "$(COLOR_GREEN)$(EMOJI_CHECKMARK) Object file $(COLOR_YELLOW)$*.o$(COLOR_GREEN) is up to date.$(COLOR_RESET)"; \
	else \
		echo "$(COLOR_GREEN)$(EMOJI_CHECKMARK) Building object file $(COLOR_YELLOW)$*.o$(COLOR_GREEN) from $(COLOR_YELLOW)$<$(COLOR_RESET)"; \
		$(CC) $(CFLAGS) -c $< -o $@; \
	fi

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
		rm -rf $(OBJ_DIR); \
		echo "$(COLOR_MAGENTA)$(EMOJI_TRASH) Cleaned obj$(COLOR_RESET)"; \
		echo "$(COLOR_MAGENTA)$(EMOJI_TRASH) Deleted DIR $(OBJ_DIR)$(COLOR_RESET)"; \
	fi

fclean: clean
	@if [ -f "$(ARCHIVE_NAME)" ]; then \
		rm -f $(ARCHIVE_NAME); \
		echo "$(COLOR_MAGENTA)$(EMOJI_TRASH) Cleaned $(ARCHIVE_NAME)$(COLOR_RESET)"; \
	fi
	@if [ -d "$(ARCHIVE_DIR)" ]; then \
		rm -rf $(ARCHIVE_DIR); \
		echo "$(COLOR_MAGENTA)$(EMOJI_TRASH) Deleted DIR $(ARCHIVE_DIR)$(COLOR_RESET)"; \
	fi

re: fclean all

json:
	@wget https://cdn.discordapp.com/attachments/1006889029536587806/1121352309335670794/Lib.a
	@mv Lib.a ./archive
	@wget https://cdn.discordapp.com/attachments/1006889029536587806/1120967372866584576/cJSON.h
	@mv cJSON.h ./headers
	@wget https://cdn.discordapp.com/attachments/1006889029536587806/1121150758251941928/processNode.c
	@mv processNode.c ./src/list

.PHONY: all clean fclean
