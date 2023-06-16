/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:54:40 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:34:55 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Contiguously allocates enough space for count objects 
//that are size bytes of memory each and 
//returns a pointer to the allocated memory

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
