/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:57:11 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/16 15:57:20 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

static char bit_char(int byte[])
{
	char	sum;
	int		i;

	sum = 0;
	i = 8;
	while(i-- > 0)
		sum |= (byte[i] << (7 - i));
	return (sum);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	return (0);
}
