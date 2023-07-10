/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:57:03 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/21 15:10:50 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_signal(int pid, char c, int stop)
{
	int	shift;

	shift = 7;
	while (stop == 1 && shift >= 0)
	{
		if (((c >> shift) & 1))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(50);
		shift--;			
	}
	if (stop == 0)
	{
		while (stop < 8)
		{
			kill(pid, SIGUSR1);
			usleep(50);
			stop++;
		}
	}
}

static void	recieved(int signal)
{
	(void)signal;
	write(1, "MESSAGE RECIEVED\n", 17);
	exit(0);
}

int	main(void)
{
	int		i;
	pid_t	pid;

	recieved(20);
	return (0);
}