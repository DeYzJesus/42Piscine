/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:26:18 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/12 17:43:10 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *susd = (unsigned char *) dest;
    const unsigned char *sussrc = (unsigned char *) src;
    size_t j = 0;

    while (j < n)
    {
        susd[j] = sussrc[j];
        j++;
    }
    return (dest);
}
