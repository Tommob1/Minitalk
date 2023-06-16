/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:37:19 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:36:25 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first occurrence of c in the string pointed to by s

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	a;
	size_t	b;

	a = -1;
	b = ft_strlen(s);
	while (++a < b + 1)
		if (s[a] == (char)c)
			return (((void *)&((char *)s)[a]));
	return (0);
}
