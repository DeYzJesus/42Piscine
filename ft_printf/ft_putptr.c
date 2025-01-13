/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:18:54 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/13 16:51:17 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_long(unsigned long n, int *count)
{
	char *base = "0123456789abcdef";
	if (n > 15)
	{
		ft_putnbr_long((n / 16), count);
	}
	write(1, &base[n % 16], 1);
	(*count)++;
}
void	ft_putptr(void *ptr, int *count)
{
	if (!ptr)
	{
		write(1, "(nil)", 5);
		*count += 5;
		return;
	}
	unsigned long addr = (unsigned long) ptr;
	write(1, "0x", 2);
	*count += 2;
	ft_putnbr_long(addr, count);
}

/*int main(void)
{
	int sium = 42;
	int *sas = &sium;
	ft_putptr(sas);
	printf("\n%p\n",sas);
}*/
