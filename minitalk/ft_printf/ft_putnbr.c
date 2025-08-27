/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 02:12:50 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/02/09 13:49:35 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), count);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	(*count)++;
}

void	ft_putnbr_uns(unsigned int n, int *count)
{
	char	c;

	if (n == 0)
	{
		write(1, "0", 1);
		(*count)++;
		return ;
	}
	if (n > 9)
	{
		c = (n % 10) + '0';
		ft_putnbr_uns((n / 10), count);
	}
	else
		c = n + '0';
	write(1, &c, 1);
	(*count)++;
}
