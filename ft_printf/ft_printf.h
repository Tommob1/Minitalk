/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:52:54 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/08 14:01:58 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_printf(const char *format, ...);

int				printf_char(int c);
int				printf_ptstr(char *str);
int				printf_ptint(int nb);
int				printf_pt_unint(unsigned int un);
int				printf_pthex(unsigned int un, const char format);
int				printf_ptr(unsigned long long ptr);
int				printf_percent(void);

char			*ft_itoa(int n);

#endif
