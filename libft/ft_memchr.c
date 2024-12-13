/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:44:28 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/13 17:04:20 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    unsigned char *susdest = (unsigned char *) s;
    while (i < n)
    {
        if (susdest[i] == c)
            return (s + i);
        i++;
    }
    return (NULL);
}
