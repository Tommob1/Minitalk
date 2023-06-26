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

SOURCE = ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c 

OBJECTS = $(SOURCE:.c=.o)

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c 

BONUS_OBJECTS = $(BONUS:%.c=%.o)

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
