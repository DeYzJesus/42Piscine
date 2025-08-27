#include "minitalk.h"

static void	client_sig(int signal, siginfo_t *info, void *context)
{
	(void)context;
	static unsigned int		c;
	static int				i;
	static int				pid;

	if (pid == 0)
		pid = info->si_pid;
	if (signal == SIGUSR1)
		c = (c << 1) | 1;
	else if (signal == SIGUSR2)
		c = c << 1;
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			kill(pid, SIGUSR1);
			pid = 0;
			ft_printf("\033[0;36m\nMessage: \033[0m\n");
			return ;
		}
		ft_printf("%c", c);
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	signal;
	// int					i;

	ft_printf("\033[0;32mServer started with PID %d\n", getpid());
	ft_printf("\033[0;36mMessage: \033[0m\n");
	signal.sa_flags = SA_RESTART | SA_SIGINFO;
	signal.sa_sigaction = client_sig;
	if (sigaction(SIGUSR1, &signal, NULL) == -1)
		ft_printf("\033[0;31mERROR SIGUSR1\033[0m\n");
	if (sigaction(SIGUSR2, &signal, NULL) == -1)
		ft_printf("\033[0;31mERROR SIGUSR2\033[0m\n");
	while (1)
		pause();
	return (0);
}
