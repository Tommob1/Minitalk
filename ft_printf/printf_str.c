/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:56:25 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/16 14:35:44 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
ft_ptstr: Writes a string to the standard output

printf_ptstr: Writes a string to the standard output and 
returns the length of a string
*/

static void	ft_ptstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	printf_ptstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_ptstr("(null)");
		return (6);
	}
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	return (i);
}
