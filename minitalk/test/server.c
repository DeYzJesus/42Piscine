/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:22:20 by ibrunial          #+#    #+#             */
/*   Updated: 2025/02/25 09:49:02 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" // for ft_printf
#include <signal.h>    // for sigaction and kill
#include <unistd.h>    // for getpid

#define YEL "\e[1;93m"
#define RES "\e[0m"
#define BLD "\e[1m"

static void	handler_sigusr(int sig, siginfo_t *info, void *context)
{
	static char	letter = 0;
	static int	count = 0;

	if (++count == 8)
	{
		if (letter == '\0')
			kill(info->si_pid, SIGUSR2);
		else
		{
			letter |= sig == SIGUSR1;
			write(1, &letter, 1);
			kill(info->si_pid, SIGUSR1);
		}
		letter = 0;
		count = 0;
	}
	else
	{
		letter |= sig == SIGUSR1;
		letter <<= 1;
		kill(info->si_pid, SIGUSR1);
	}
	(void)context;
}

int	main(void)
{
	struct sigaction	handler;

	handler.sa_flags = SA_SIGINFO;
	handler.sa_sigaction = handler_sigusr;
	sigaction(SIGUSR1, &handler, NULL);
	sigaction(SIGUSR2, &handler, NULL);
	ft_printf(YEL "server pid: " RES BLD "%d\n" RES, getpid());
	while (1)
		pause();
}
