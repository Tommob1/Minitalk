/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:54:48 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:37:11 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates and returns a substring from the string ‘s’

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	a;
	size_t	b;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (start > strlen)
		return (ft_strdup(""));
	if (len > strlen - start)
		len = strlen - start;
	a = 0;
	b = 0;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	while (s[a])
	{
		if (b < len && a >= start)
		{
			ptr[b++] = s[a];
		}
		a++;
	}
	ptr[b] = '\0';
	return (ptr);
}
