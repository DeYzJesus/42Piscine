/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:28:53 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/23 00:25:03 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char    *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    if (!str)
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] == (char)c)
            return ((char *)str + i);
        i++;
    }
    if (str[i] == (char)c)
        return ((char *)str + i);
    return (0);
}

char    *ft_strjoin(char *s1, char const *s2)
{
    char    *dest;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    dest = (char *)malloc(sizeof(char) * (ft_strlen((const char *)s1, 0) + (ft_strlen(s2, 1)) + 1));
    if (!dest)
        return (NULL);
    while (s1 && s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    while (s2[j] && s2[j] != '\n')
    {
        dest[i+j] = s2[j];
        j++;
    }
    if (s2[j] == '\n')
        dest[i + j++] = '\n';
    dest[i+j] = '\0';
    free(s1);
    return (dest);
}

int ft_strlen(const char *src, int i)
{
    int j = 0;
    if (src == NULL)
        return (0);
    if (i == 0)
    {
        while (src[j] != '\0')
            j++;
        return (j);
    }
    else
    {
        while (src[j] != '\n' && src[j] != '\0')
            j++;
        if (src[j] == '\n') 
        j++;
        return (j);
    }
}
char	*ft_strdup(const char *s)
{
	size_t	j;
	char	*sus;

	j = 0;
	while (s[j] != '\0')
		j++;
	sus = (char *)malloc((j + 1) * sizeof(char));
	if (!sus)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
	{
		sus[j] = s[j];
		j++;
	}
	sus[j] = '\0';
	return (sus);
}

char *ft_update(char *dest)
{
    int i = 0;
    int j = 0;
    char *temp = ft_strdup((const char *)dest);
    while (dest[i] != '\n' && dest[i] != '\0')
        i++;
    if (dest[i] == '\n')
        i++;
    while (dest[i] != '\0')
        {
            dest[j] = temp[i];
            i++;
            j++;
        }
    dest[j] = '\0';
    free(temp);
    return (dest);
}
