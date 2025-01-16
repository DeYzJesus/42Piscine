/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:32:33 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/16 17:44:34 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
# define BUFFER_SIZE 4

char *get_next_line(int fd)
{
	char *result;
	char buffer[BUFFER_SIZE];
	static char *rest;
	ssize_t bytes_read;
	int ps_nl;
	
	while ((ps_nl = ft_strchr(res, '\n')) == 0 && bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		result = ft_strjoin(res, buffer);
	}
	ps_nl -= res;
	rest = ft_strdup((*res + ps_nl + 1));

}


/*int	main(void)
{
	const char *file_path = "example.txt";
	int lenght = 120;
	char buffer[lenght];
	int fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		fd = open(file_path, O_CREAT | O_RDONLY, 0644);
		if (fd == -1)
			write(1, "ERRORE NELLA CREAZIONE", 22);
	}
	ssize_t bytesRead = read(fd, buffer, lenght-1);
	if (bytesRead == -1)
	{
		write(1,"ERRORE", 5);
		close(fd);
		return (1);
	}
	buffer[bytesRead] = '\0';
	printf("Contenuto : %s \n", buffer);
	close(fd);
}*/