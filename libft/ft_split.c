/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:55:29 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/16 16:03:31 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t j = 0;
    size_t x = 0;
    size_t start, end;
    int words = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        words++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    i = 0;
    char **dest = malloc((words + 1) * sizeof(char *));
    if (!dest)
        return (NULL);
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        start = i;
        while (s[i] != c && s[i] != '\0')
            i++;      
        end = i;
        dest[j] = ft_substr(s,(unsigned int)start,(end-start));
        j++;
    }
    dest[j] = NULL;
    return (dest);
}