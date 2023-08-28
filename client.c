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

/*
	Sends individual bits of a character 'c' to the server with the PID.

	Iteratively examines each bit of the character. 

	If the bit is 1, it sends the SIGUSR1 signal.
	If the bit is 0, it sends the SIGUSR2 signal.

	After sending each signal, the function sleeps for 100 microseconds
	to avoid overwhelming the server.
*/

void	bit_signal(int pid, char c)
{
	int		bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

/*
	Checks if the program has been run with the correct number of arguments.
	Parses the Process ID (PID) of the server from the first argument.
	Sends each character of the message to the server using 'bit_signal'.
	Sends newline character to indicate the end of the message.
*/

int	main(int argc, char **argv)
{
	int		i;
	int		pid;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			bit_signal(pid, argv[2][i]);
			i++;
		}
		bit_signal(pid, '\n');
	}
	else
	{
		ft_printf("\033[91mError: wrong format.\033[0m\n");
		ft_printf("\033[33mTry: ./client <PID> <MESSAGE>\033[0m\n");
		return (1);
	}
	return (0);
}
