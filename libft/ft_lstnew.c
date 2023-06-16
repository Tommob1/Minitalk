/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:54:37 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:41:51 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates and returns a new node. 
The member variable ’content’ is initialized with
the value of the parameter ’content’. */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = malloc(sizeof(t_list));
	if (elt == 0)
		return (0);
	elt->content = content;
	elt->next = 0;
	return (elt);
}
