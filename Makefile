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

#SOURCES

#Files
SERVER	=	server.c
CLIENT	=	client.c
LIBFT	=	cd libft && make
LIB		=	libft/libft.a
PRINTF	=	cd ft_printf && make
PRINT	=	ft_printf/libftprintf.a

#Sources and Objects
SERVER_SRC	=	$(SERVER)
SERVER_OBJS	=	$(SERVER_SRC:.c=.o)
CLIENT_SRC	=	$(CLIENT)
CLIENT_OBJS	=	$(CLIENT_OBJS) \
						$(SERVER_OBJS)

#CONSTANT STRINGS
GCC			=	gcc
FLAGS		=	-Wall -Werror -Wextra
INCLUDE		=	-I include
SERVER_NAME	=	server
CLIENT_NAME	=	client
NAME		=	server
