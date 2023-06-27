# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 15:06:45 by btomlins          #+#    #+#              #
#    Updated: 2023/06/16 15:06:49 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CNAME		=	client

SNAME		=	server

SRCS_SERVER	=	server.c libft/ft_atoi.c	libft/ft_memset.c	\
				libft/ft_strlen.c	libft/printf.c	libft/printf_char.c

SRCS_CLIENT	=	client.c libft/ft_atoi.c	libft/ft_memset.c \
				libft/ft_strlen.c	libft/printf.c	libft/printf_char.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

LIB_SRCS	=	libft/ft_atoi.c	libft/ft_memset.c

PRINT_SRCS	=	libft/printf.c libft/ft_strlen.c libft/printf_hex.c \
				libft/printf_char.c

OBJS		=	$(LIB_SRCS:.c=.o)	$(PRINT_SRCS:.c=.o)	$(OBJS_CLIENT)	$(OBJS_SERVER)

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

CC			=	gcc

all: $(SNAME) $(CNAME)

%.o: %.c
		$(CC) -g $(CFLAGS) -c $< -o $@

$(CNAME): $(OBJS_CLIENT)
		$(CC) $(CFLAGS) -o $(CNAME) $(OBJS_CLIENT)

$(SNAME): $(OBJS_SERVER)
		$(CC) $(CFLAGS) -o $(SNAME) $(OBJS_SERVER)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(CNAME) $(SNAME)

re: fclean all

.PHONY: all clean fclean re