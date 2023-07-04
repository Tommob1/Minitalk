# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:43:16 by btomlins          #+#    #+#              #
#    Updated: 2023/03/24 15:05:07 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAG = -Wall -Wextra -Werror

CC = gcc

NAME = libft.a

SOURCE = ft_strlen.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_substr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_memset.c \
		ft_itoa.c \
		printf_char.c \
		printf_hex.c \
		printf_int.c \
		printf_str.c \
		printf.c

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

$(NAME):	$(OBJECTS)
					#gcc $(FLAGS) -c $(SOURCE) -I./#
					ar src  $(NAME) $(OBJECTS)

bonus: $(OBJECT) $(BONUS_OBJECTS)
					ar src $(NAME) $(OBJECT) $(BONUS_OBJECTS)

clean:				
					rm -f $(OBJECTS)

fclean:		clean	
					rm -f $(NAME)

re:			fclean all
