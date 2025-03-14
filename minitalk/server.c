#include <signal.h>
#include <unistd.h>
#include <stdio.h>

// Variabili globali per accumulare i bit
int bit_counter = 0;
char received_char = 0;

void handler(int sig) {
    // Converti il segnale in bit (0 per SIGUSR1, 1 per SIGUSR2)
    int bit = (sig == SIGUSR1) ? 0 : 1;
    
    // Aggiungi il bit al carattere
    received_char = (received_char << 1) | bit;
    bit_counter++;

    // Dopo 8 bit, stampa il carattere
    if (bit_counter == 8) {
        write(STDOUT_FILENO, &received_char, 1); // Stampa senza buffer
        bit_counter = 0;
        received_char = 0;
    }
}

int main() {
    printf("Server PID: %d\n", getpid());

    // Configura i gestori per SIGUSR1 e SIGUSR2
    struct sigaction sa;
    sa.sa_handler = handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;

    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    // Loop infinito
    while (1) {
        pause(); // Aspetta segnali
    }

    return 0;
}
