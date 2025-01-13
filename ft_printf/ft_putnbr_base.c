/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 23:10:47 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/13 16:45:23 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putnbr_base(int	n, char type, int *count)
{
	char	c;
	int	pos;

	char	*esad;

	if (type == 'x')
		esad = "0123456789abcdef";
	else
		esad = "0123456789ABCDEF";
	if (n < 0)
	{
		write (1, "-", 1);
		(*count)++;
		if (n == -2147483648)
		{
			write(1, "80000000", 8);
			*count += 8;
			return ;
		}
		n = -n;
	}
	if (n > 15)
		ft_putnbr_base(n / 16, type, count);

	write(1, &esad[n % 16], 1);
	(*count)++;
}

