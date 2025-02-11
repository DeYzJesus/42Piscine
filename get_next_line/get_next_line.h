/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:47:04 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/22 23:34:08 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char    *get_next_line(int fd);
char    *ft_update(char *dest);
int     ft_strlen(const char *src, int i);
char    *ft_strjoin(char *s1, char const *s2);
char    *ft_strchr(const char *str, int c);
#endif