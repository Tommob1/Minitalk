/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:38:08 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:42:55 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Adds the node 'new' at the beginning of the list */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
