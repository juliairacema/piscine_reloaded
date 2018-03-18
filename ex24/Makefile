# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/18 22:22:09 by dhojt             #+#    #+#              #
#    Updated: 2018/03/18 22:50:21 by dhojt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = -I includes

GCC = gcc

FLAG = -Wall -Wextra -Werror -c

CFILE = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

OFILE = $(CFILE:srcs/%.c=%.o)

all: $(NAME)

$(NAME):
	$(GCC) $(FLAG) $(CFILE) $(INCLUDES)
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)

clean:
	rm -rf $(OFILE)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
