CC := cc
CFLAGS := -Wall -Wextra -Werror
RM := rm -f

NAME := bsq
SRCS := init.c main.c solver.c support.c support2.c errors.c errors2.c free.c
OBJS := $(SRCS:.c=.o)
HEADER := functions.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run-perl:
	perl grille.pl
