/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:18:54 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/02/09 13:49:41 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_long(unsigned long n, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
	{
		ft_putnbr_long((n / 16), count);
	}
	write(1, &base[n % 16], 1);
	(*count)++;
}

void	ft_putptr(void *ptr, int *count)
{
	unsigned long	addr;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		*count += 5;
		return ;
	}
	addr = (unsigned long)ptr;
	write(1, "0x", 2);
	*count += 2;
	ft_putnbr_long(addr, count);
}
