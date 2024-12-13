/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:14:51 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/13 14:19:55 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *str, int c)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    while (i--)
    {
        if (str[i] == c)
            return (str + i);
    }
    return (NULL);
}
