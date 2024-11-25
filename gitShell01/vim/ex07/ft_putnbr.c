/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:16:22 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/12 10:47:27 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{

	char	c;

	if(nb < 0)
	{
		nb = -nb;
	}
	else if(nb < 9)
	{
		c = nb +'0';
	}
	else if(nb < 2147483646)
	{
		c = (nb % 10) + '0';
		ft_putnbr(nb / 10);
	}
	else
		write(1, "WARNING INTERGER VAlUE TOO MUCH",31);

	write(1, &c,1);
}

int main(void)
{
	ft_putnbr(2147483646);
	return (0);
}
