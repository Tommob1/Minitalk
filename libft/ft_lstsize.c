/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:49:14 by btomlins          #+#    #+#             */
/*   Updated: 2023/03/30 16:44:14 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of nodes in a list

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		temp;
	t_list	*elem;

	temp = 0;
	if (lst == 0)
		return (temp);
	elem = lst;
	while (elem != 0)
	{
		elem = elem->next;
		temp++;
	}
	return (temp);
}
