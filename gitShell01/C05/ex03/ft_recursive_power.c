/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:17:25 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/19 20:17:37 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    int sium = nb;
    if (power == 0)
        return (1);
    if (power == 1)
        return (sium);
    if (power < 0)
        return (0);
    if (power > 1)
    {
        sium = nb * ft_recursive_power(nb, power - 1);
        printf("res %d \n", sium);
    }    
    return (sium);
}
/*int main(void)
{
    ft_recursive_power(3, 3);
}*/
