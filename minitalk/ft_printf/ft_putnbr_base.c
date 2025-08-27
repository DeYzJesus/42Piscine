/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 23:10:47 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/02/09 15:43:10 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long n, char type, int *count)
{
	char	*esad;

	if (type == 'x')
		esad = "0123456789abcdef";
	else
		esad = "0123456789ABCDEF";
	if (n > 15)
		ft_putnbr_base(n / 16, type, count);
	write(1, &esad[n % 16], 1);
	(*count)++;
}
