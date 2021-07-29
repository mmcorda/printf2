NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -I./includes
SRCS =	./ft_printf.c \
		./analyse.c \
		./convert.c \
		./number.c \
		./utils.c \

OBJS = $(SRCS:.c=.o)
ARRCS = ar -rcs
RM = rm -f

all: $(NAME)

.c.o:
		$(CC) $(FLAGS) -o $(<:.c=.o) -c $<

$(NAME):$(OBJS)
		$(ARRCS) $@ $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re
