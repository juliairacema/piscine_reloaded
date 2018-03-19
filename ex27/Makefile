# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/18 22:22:09 by dhojt             #+#    #+#              #
#    Updated: 2018/03/19 21:31:03 by dhojt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = -I includes

GCC = gcc

FLAG = -Wall -Wextra -Werror -c

CFILE = srcs/*.c

OFILE = *.o

all: $(NAME)

$(NAME):
	$(GCC) $(FLAG) $(CFILE) $(INCLUDES)
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)
	gcc -o ft_display_file $(NAME)

clean:
	rm -rf $(OFILE)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
