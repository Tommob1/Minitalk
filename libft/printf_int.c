/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:01:51 by btomlins          #+#    #+#             */
/*   Updated: 2023/05/16 14:34:09 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
Converts int to string using itoa and prints it, 
then returns  the length of the printed string.
*/

int	printf_ptint(int nb)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(nb);
	len = printf_ptstr(num);
	free(num);
	return (len);
}
