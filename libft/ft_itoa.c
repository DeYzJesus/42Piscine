/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:04:13 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/16 16:57:56 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int count = 0;
    int sign = 0;
    int copy;
    size_t i = 0;
    if (n < 0)
    {
        sign = 1;
        n = -n;
    }
    copy = n;
    while (copy > 9)
    {
        count++;
        copy /= 10;
    }
    count++;
    char *res = (char *)malloc((count + 1 + sign) * sizeof(char));
    res[count + sign] = '\0';
    while (n > 9)
    {
        count--;
        res[count + sign] = n % 10 + '0';
        n = n / 10;
    }
    count--;
    res[count + sign] = n + '0';
    if (sign)
    {
        res[0] = '-';
    }
    return (res);
}
