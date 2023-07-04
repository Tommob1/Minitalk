/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:35:57 by btomlins          #+#    #+#             */
/*   Updated: 2023/06/21 14:21:37 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

int         end(int byte[], char **string, int *pos, int *index);
char        *reallocate(char **str, long *size, unsigned int pos);

#endif
