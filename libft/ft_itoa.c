/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:57:53 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/22 14:27:21 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	arrlen(int n)
{
	unsigned int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	char			*res;
	unsigned int	len;

	len = arrlen(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	i = n;
	if (!res)
		return (0);
	if (n < 0)
	{
		res[0] = '-';
		i = -n;
	}
	if (i == 0)
		res[0] = '0';
	res[len] = '\0';
	while (i != 0)
	{
		res[len - 1] = (i % 10) + '0';
		i = i / 10;
		len--;
	}
	return (res);
}
