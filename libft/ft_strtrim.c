/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:01:27 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:38:40 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates and returns a copy of ’s1’ with the characters specified in 
’set’ removed from the beginning and the end of the string */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	a = 0;
	b = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[a]) && a <= b)
		a++;
	if (a > b)
		return (ft_strdup (s1 + b + 1));
	while (ft_strchr(set, s1[b]) && b >= 0)
		b--;
	ptr = malloc(b - a + 2);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, &s1[a], b - a + 2);
	return (ptr);
}
