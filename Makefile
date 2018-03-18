# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/17 02:35:30 by dhojt             #+#    #+#              #
#    Updated: 2018/03/18 20:48:40 by dhojt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILE = ex06/*.c \
			  ex07/*.c \
			  ex08/*.c \
			  ex09/*.c \
			  ex10/*.c \
			  ex11/*.c \
			  ex12/*.c \
			  ex13/*.c \
			  ex14/*.c \
			  ex15/*.c \
			  ex16/*.c \
			  ex17/*.c \
			  ex20/*.c \
			  ex21/*.c \

gcc:
	gcc -I includes -I ex22 -o piscine_reloaded src/*.c main.c $(CFILE)

clean:
	rm -rf piscine_reloaded

fclean: clean

re: fclean all
