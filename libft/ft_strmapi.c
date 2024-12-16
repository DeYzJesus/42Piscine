/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:00:39 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/16 17:05:45 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = ft_strlen(s);
    char *dest = (char *)malloc((i+1) * sizeof(char));
    i = 0;
    while (s[i] != '\0')
    {
        dest[i] = f(i,s[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}