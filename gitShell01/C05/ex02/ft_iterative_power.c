/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:06:29 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/19 20:07:34 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
    int res = nb;
    int minus = 0;
    if (nb == 0 || power == 0)
        return (1);
    if (power < 0)
        return (0);
    if (nb < 0)
    {
        res = -res;
        minus = 1;
    }
    while (power > 1)
    {
        res = res * nb;
        power--;
    }
    if (minus == 1)
        res  = -res;
    return (res);
}
/*int main(void)
{
    printf("%d", ft_iterative_power(2, 3));
}*/