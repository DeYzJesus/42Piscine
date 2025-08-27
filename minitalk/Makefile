# === Nomi degli eseguibili ===
NAME_SERVER = server
NAME_CLIENT = client

# === Sorgenti ===
SRCS_SERVER = server.c
SRCS_CLIENT = client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

# === Compilazione ===
CC = cc
CFLAGS = -Wall -Wextra -Werror

# === Librerie esterne ===
LIBFT_DIR = libft
PRINTF_DIR = ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a  # supponendo si chiami così

# === Comandi ===
RM = rm -f

# === Obiettivo principale ===
all: $(LIBFT) $(PRINTF) $(NAME_SERVER) $(NAME_CLIENT)

# === Build delle librerie ===
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)

# === Build degli eseguibili ===
$(NAME_SERVER): $(OBJS_SERVER)
	$(CC) $(CFLAGS) $(OBJS_SERVER) $(LIBFT) $(PRINTF) -o $(NAME_SERVER)

$(NAME_CLIENT): $(OBJS_CLIENT)
	$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LIBFT) $(PRINTF) -o $(NAME_CLIENT)

# === Pulizia ===
clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(MAKE) clean -C $(PRINTF_DIR)
	$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(MAKE) fclean -C $(PRINTF_DIR)
	$(RM) $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re

