/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:23:49 by ibrunial          #+#    #+#             */
/*   Updated: 2025/03/25 13:12:19 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" // for ft_printf
#include "libft.h"     // for ft_atoi
#include <signal.h>    // for sigaction and kill

#define GRN "\033[1;92m"
#define RED "\033[1;91m"
#define YEL "\033[1;93m"
#define RES "\033[0m"

void	handler_s1(int sig, siginfo_t *info, void *context)
{
	static int	count = 0;
	static char	*msg = NULL;

	if (msg == NULL)
		msg = (char *)context;
	count++;
	if (count == 9)
	{
		count = 1;
		msg++;
	}
	if (*msg & 0b10000000)
		kill(info->si_pid, SIGUSR1);
	else
		kill(info->si_pid, SIGUSR2);
	*msg <<= 1;
}

void	handler_s2(int sig)
{
	ft_printf(GRN "\nthank you server for the confermation message!\n" RES);
	exit(EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa1;
	struct sigaction	sa2;
	siginfo_t			initial_info;

	if (argc != 3)
	{
		ft_printf(RED "wrong number of arguments\n" RES);
		ft_printf(YEL "Usage: " RES "%s <serve_pid> <message>\n", argv[0]);
		return (EXIT_FAILURE);
	}
	sa1.sa_flags = SA_SIGINFO;
	sa1.sa_sigaction = handler_s1;
	sa2.sa_handler = handler_s2;
	sigaction(SIGUSR1, &sa1, NULL);
	sigaction(SIGUSR2, &sa2, NULL);
	initial_info.si_pid = ft_atoi(argv[1]);
	handler_s1(42, &initial_info, argv[2]);
	while (1)
		pause();
}
