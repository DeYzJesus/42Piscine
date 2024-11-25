/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:44:01 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/20 22:44:06 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_sqrt(int nb)
{
    int sum = 5;
    int comp = 4;
    int res = 2;
    if (nb == 1)
        return (1);
    if (nb == 4)
        return (2);
    while(comp <= nb)
    {
        comp += sum;
        res++;
        if(comp == nb){
            return (res);
        }
        sum += 2;
    }
    return (0);
}
int main(void)
{
    printf("%d", ft_sqrt(36));
}