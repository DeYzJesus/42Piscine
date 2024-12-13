/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:45:41 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/13 13:42:35 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    unsigned char *susdes = (unsigned char *) dest;
    const unsigned char *sussrc = (unsigned char *) src;

    if (susdes > sussrc || susdes >= sussrc + n)
    {
        while (i < n)
        {
            susdes[i] = sussrc[i];
            i++;
        }
        return (dest);
    }
    else
    {
        while (j < n)
        {
            susdes[i] = sussrc[j];
            i--;
            j++;  
        }
    }
}
