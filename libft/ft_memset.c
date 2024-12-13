/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:06:43 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/13 17:23:27 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *s, int c, size_t n)
{
    size_t j = 0;
    unsigned char *susdest = (unsigned char *) s;
    unsigned char sium = (unsigned char) c;
    while (j < n)
    {
        susdest[j] = sium;
        j++;
    }
    return (s);
}