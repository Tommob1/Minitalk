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

/*
	Handles the UNIX signals SIGUSR1 and SIGUSR2.
	
	Uses 2 static integers, 'bit' and 'i' to collect the bits of characters
	sent by the client. When SIGUSR1 is received, the function sets the 
	corresponding bit in 'i'. 
	
	Once 8 bits are received, the ASCII character they form is 
	printed to the terminal.

	The 'bit' and 'i' are then reset for the next character.
*/

void	sig_handle(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

/*
	Checks if program is being run with correct number of arguments.

	Prints the Process ID (PID) to the terminal so that it can be used
	by the client.

	Enters an infinite loop to wait for the signals 
	(SIGUSR1 and SIGUSR2).

	Registers 'sig_handle' as the handler function for the signals.
*/

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("\033[91mError: wrong format. \033[0m\n");
		ft_printf("\033[33mTry: ./server\033[0m\n");
		return (0);
	}
	pid = getpid();
	ft_printf("\033[94mPID\033[0m \033[96m->\033[0m %d\n", pid);
	ft_printf("\033[90mWaiting for a message...\033[0m\n");
	while (argc == 1)
	{
		signal(SIGUSR1, sig_handle);
		signal(SIGUSR2, sig_handle);
		pause ();
	}
	return (0);
}
