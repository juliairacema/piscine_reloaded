# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/17 02:35:30 by dhojt             #+#    #+#              #
#    Updated: 2018/03/17 02:55:24 by dhojt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -I includes -o piscine_reloaded src/*.c ex*/*.c main.c

clean:
	rm piscine_reloaded

fclean: clean

re: fclean all
