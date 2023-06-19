/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:57:03 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/19 14:38:23 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    char_to_binary(char c)
{
    unsigned char   mask;
    mask = 1 << (sizeof(char) * 8 - 1);

    while (mask)
    {
        unsigned char   bit = (c & mask) ? '1' : '0';
        putchar(bit);
        mask >>= 1;
    }
}

void    print_bits(unsigned char octet)
{
    int i;
    unsigned char   bit;

    i = 8;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}

int main(void)
{
    return (0);
}
