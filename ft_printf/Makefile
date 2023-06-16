# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 10:06:15 by btomlins          #+#    #+#              #
#    Updated: 2023/05/05 16:15:25 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP = gcc -Wall -Werror -Wextra

NAME = libftprintf.a

SRC = printf_char.c \
	  		printf_int.c \
			printf_un_int.c \
			printf_hex.c \
			printf_str.c \
			printf_ptraddress.c \
			printf_utils.c \
			printf.c \

OBJ = $(SRC:%.c=%.o)

RM = rm -f

all: $(NAME)

%.o: %.c
			$(COMP) -o $@ -c $<

$(NAME):	$(OBJ)
						$(COMP) -c $(SRC) -I./
						ar rc $(NAME) $(OBJ)

clean:
						$(RM) $(OBJ)

fclean:		clean
						$(RM) $(NAME)

re:			fclean all
