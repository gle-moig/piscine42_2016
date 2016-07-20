# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 15:18:17 by gle-moig          #+#    #+#              #
#    Updated: 2016/07/18 17:07:46 by gle-moig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
DIRSRC	=	./srcs
DIROBJ	=	.
INCLUDE	=	./includes/
INC_LIB	=	-L. -lft
SRC		=	*.c

OBJ		=	$(SRC:.c=.o)

CC		=	/usr/bin/gcc
RM		=	rm -f
ECHO	=	/bin/echo -e

all		:	$(NAME)

$(NAME)	:
	$(CC) -I $(INCLUDE) -c $(DIRSRC)/$(SRC)
	@echo "\n> Compiled\n"
	$(CC) $(INC_LIB) $(DIROBJ)/$(OBJ)
	@echo "\n> Linked\n"

clean	:
	$(RM)	$(OBJ)
	@echo "\n> Directory cleaned\n"

fclean	:	clean
	$(RM)	$(NAME)
	@echo "\n> Executable Removed\n"

re		:	fclean\
			all

.PHONY	:	all\
			clean\
			re

