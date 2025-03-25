# Variabili
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
SRV_SRC = server.c
USR_SRC = user.c
SRV_OBJ = $(SRV_SRC:.c=.o)
USR_OBJ = $(USR_SRC:.c=.o)
SRV_BIN = server
USR_BIN = user

# Regola principale
all: $(SRV_BIN) $(USR_BIN)

# Compilazione del server
$(SRV_BIN): $(SRV_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compilazione dell'user
$(USR_BIN): $(USR_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Pulizia dei file oggetto
clean:
	rm -f $(SRV_OBJ) $(USR_OBJ)

# Pulizia completa (inclusi gli eseguibili)
fclean: clean
	rm -f $(SRV_BIN) $(USR_BIN)

# Ricostruzione completa
re: fclean all

# Regole di utilità
.PHONY: all clean fclean re

