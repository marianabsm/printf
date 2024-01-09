# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marianamestre <marianamestre@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/05 16:42:42 by marianamest       #+#    #+#              #
#    Updated: 2024/01/09 16:35:57 by marianamest      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ft_printf.c \
	ft_putchar.c ft_putstr.c ft_strlen.c \
	ft_putnbr.c	ft_putunsigned.c \
	ft_putptr.c ft_puthex.c 

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re: fclean $(NAME)