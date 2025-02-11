/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:32:33 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/23 03:14:02 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char *get_next_line(int fd)
{
    char *result = NULL;
    static char buffer[BUFFER_SIZE + 1];
    size_t bytes_read;
    if(fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    if (buffer[0] != '\0')
    {
        result = ft_strjoin(result, buffer);
        ft_update(buffer);
        if ((ft_strchr(result, '\n')) != 0)
            return (result);
    }
    while ((ft_strchr(result, '\n')) == 0)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0)
            break;
        buffer[bytes_read] = '\0';
        result = ft_strjoin(result, buffer);   
    }
    ft_update(buffer);
    return (result);
}
/*int main(void)
{
    // Aprire il file example.txt
    int fd = open("example.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Errore nell'apertura del file");
        return (1);
    }

    char *line = get_next_line(fd);
    int  i = 0;
    while (i < 7)
    {
    printf("%d -> %s",i, line); // Stampa la riga
        free(line);         // Libera la memoria
    line = get_next_line(fd);;
    i++;
    }    
    close(fd);
    return (0);
}*/