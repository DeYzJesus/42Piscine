/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:32:33 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/03/07 18:28:46 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*result;
	static char	buffer[BUFFER_SIZE + 1];
	size_t		bytes_read;

	result = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
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
			break ;
		buffer[bytes_read] = '\0';
		result = ft_strjoin(result, buffer);
	}
	ft_update(buffer);
	return (result);
}
