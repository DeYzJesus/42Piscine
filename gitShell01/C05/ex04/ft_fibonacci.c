/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:30:37 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/20 17:30:58 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    if (index > 1)
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int main(void)
{
    printf("%d" , ft_fibonacci(5));
}

