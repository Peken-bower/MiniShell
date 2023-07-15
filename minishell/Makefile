CC = cc

CFLAGS = -Wall -Wextra -Werror

HDR = minishell.h

SRC = minishell.c

OBJ = $(SRC:.c=.o)

NAME = minishell

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(HDR)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(OBJ) $(NAME)

re: fclean all