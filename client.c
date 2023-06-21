/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:57:03 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/21 15:10:50 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	char_to_binary(char c)
{
	unsigned char	mask;
	unsigned char	bit;

	mask = 1 << (sizeof(char) * 8 - 1);
	while (mask)
	{
		if ((c & mask) != 0)
			bit = '1';
		else
			bit = '0';
		write(1, &bit, 1);
		mask >>= 1;
	}
}

char	binary_to_char(const char	*binary)
{
	char	character;

	if (binary[8] != '\0')
	{
		return (0);
	}
	character = (binary[0] - '0') << 7
		| (binary[1] - '0') << 6
		| (binary[2] - '0') << 5
		| (binary[3] - '0') << 4
		| (binary[4] - '0') << 3
		| (binary[5] - '0') << 2
		| (binary[6] - '0') << 1
		| (binary[7] - '0');
	return (character);
}

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main(void)
{
	return (0);
}
