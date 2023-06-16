/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:24:42 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:31:14 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Appends string src to the end of dst

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	result;

	s = (char *)src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(s);
	result = 0;
	i = 0;
	if (dstsize > dst_len)
		result = src_len + dst_len;
	else
		result = src_len + dstsize;
	while (s[i] && (dst_len + 1) < dstsize)
	{
		dst[dst_len] = s[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (result);
}
