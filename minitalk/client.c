
#include "minitalk.h"

static int	g_message_delivered;


static void	server_signal_handler(int signal)
{
	g_message_delivered = 1;
	if (signal == SIGUSR1)
		ft_printf("\033[0;32mMessage delivered successfully!\033[0m\n", 1);
}

static void	char2binary(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(1000);
		i--;
	}
}

static int	pid_check(int pid)
{
	if ((kill(pid, 0) == 0) && (pid > 0))
		ft_printf("\033[0;32mPID %d is valid. Sending the message.\n", pid);
	else
	{
		ft_printf("\033[0;31mERROR - PID %d is invalid.\033[0m\n", pid);
		exit(1);
	}
	return (pid);
}


int	main(int ac, char **av)
{
	int					pid;
	int					i;
	struct sigaction	signal;

	i = 0;
	if (ac == 3)
	{
		pid = pid_check(ft_atoi(av[1]));
		signal.sa_handler = &server_signal_handler;
		if (sigaction(SIGUSR1, &signal, NULL) == -1)
			ft_printf("\033[0;31mERROR SIGUSR1\033[0m\n");
		while (av[2][i])
			char2binary(pid, av[2][i++]);
		char2binary(pid, '\0');
		if (!g_message_delivered)
			ft_printf("\033[0;31mServer didn't respond :(\033[0m\n");
	}
	else
		ft_printf("\033[0;31mArgument parsing error\033[0m\n");
	return (0);
}
