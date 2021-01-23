# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/20 13:33:36 by mcorda            #+#    #+#              #
#    Updated: 2021/01/23 17:29:52 by mcorda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = $(SRCS:.c=.o)

CFLAGS += -Wall -Wextra -Werror

SRCS = ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_isalnum.c \
        ft_strlen.c \
        ft_strncmp.c \
        ft_tolower.c \
        ft_toupper.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memccpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \


$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

norme:
		norminette -R CheckForbiddenSourceHeader $(SRCS)

re: fclean all

.PHONY: all clean fclean re
