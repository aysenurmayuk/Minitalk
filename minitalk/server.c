/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:40:52 by amayuk            #+#    #+#             */
/*   Updated: 2024/04/24 16:43:08 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signum)
{
	static int	i;
	static int	bit;

	if (signum == SIGUSR1)
		bit |= (1 << i);
	i++;
	if (i == 7)
	{
		write(1, &bit, 1);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
}
