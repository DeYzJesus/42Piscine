/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:46:35 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/13 15:32:04 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t z;

    if (needle[i] == '\0')
        return (haystack);
    while (i < len && haystack[i] != '\0')
    {
        z = i;
        while (z < len && haystack[z] == needle[j])
        {
            z++;
            j++;
            if (needle[j] == '\0')
                return  (haystack + i);
        }
        
        i++;
        j = 0;
    }
    return (NULL);
}
