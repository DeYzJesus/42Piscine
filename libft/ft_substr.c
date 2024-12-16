/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:16:22 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/16 16:04:36 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = 0;

    char *dest = (char *)malloc((len + 1) * sizeof(char));
    if (!dest)
        return (NULL);
    while (i < len)
    {
        dest[i] = s[start];
        i++;
        start++; 
    }
    dest[i] = '\0';
    return (dest);
}