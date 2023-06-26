/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:04:06 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/24 16:52:46 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int     ft_atoi(const char *str);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
char    *ft_strdup(const char *s1);
size_t  ft_strlen(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);


#endif
