/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:51:54 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:33:03 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first occurrence of the null-terminated string needle 
//in the string haystack, in no more than len characters

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	if (!*needle)
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && (size_t)i < len)
	{
		if (haystack[i] == needle[0])
		{
			c = 0;
			while (haystack[i + c] == needle[c] && i + c < len)
			{
				if (needle[c + 1] == '\0')
					return ((char *)&haystack[i]);
				c++;
			}
		}
		i++;
	}
	return (0);
}
