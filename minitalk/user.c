#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strcopy(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	char *dest = malloc(i + 1);
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = str[i];
	return dest;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        write(STDERR_FILENO, "Usa: ./client <PID server>\n", 27);
        return 1;
    }

    int server_pid = atoi(argv[1]);
    //char *to_send = ft_strcopy(argv[2]); // Carattere da inviare

    int j = 0;
    while (argv[2][j] != '\0')
    {
    	for (int i = 7; i >= 0; i--) {
        	int bit = (argv[2][j] >> i) & 1; // Estrai l'i-esimo bit
        	
        	if (bit == 0) {
            	kill(server_pid, SIGUSR1); // Invia 0
        	} else {
            	kill(server_pid, SIGUSR2); // Invia 1
        	}
        	usleep(100); // Attendi un po' per evitare segnali persi
    	}
	j++;
    }
    return 0;
}
