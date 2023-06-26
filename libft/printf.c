/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:06:36 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/16 14:42:25 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
va_list = Handles functions that accept a variable number of arguments.

format_eval: Takes va_list and a format specifier and 
returns the number of characters printed for each function.

ft_printf: It initializes a va_list, goes through each character 
in the format string and checks if the character is a percent sign ('%'), 
which indicates a format specifier. If it is, ft_printf calls format_eval 
with the va_list and the next character (the format specifier) and 
increments the total length by the number of characters printed. 
If the character is not a percent sign, ft_printf simply prints 
the character and increments the total length by 1. 
The function returns the total number of characters printed.

*/

static int	format_eval(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += printf_char(va_arg(args, unsigned int));
	else if (format == 'u')
		len += printf_pt_unint (va_arg(args, unsigned int));
	else if (format == 'X' || format == 'x')
		len += printf_pthex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		len += printf_ptr(va_arg(args, unsigned long long));
	else if (format == 's')
		len += printf_ptstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += printf_ptint(va_arg(args, int));
	else if (format == '%')
		len += printf_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		t_len;
	va_list	args;

	va_start(args, format);
	i = 0;
	t_len = 0;
	while (format[i])
	{
		if (format[i] == '%')
			t_len += format_eval(args, format[++i]);
		else
			t_len += printf_char(format[i]);
		i++;
	}
	va_end(args);
	return (t_len);
}
