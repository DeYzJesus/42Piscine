/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:32:54 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/13 17:25:52 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void bzero(void *s, size_t n)
{
    size_t j = 0;

    unsigned char *susdest = (unsigned char *) s;
    while (j < n)
    {
        susdest[j] = 0;
        j++;
    }
}
