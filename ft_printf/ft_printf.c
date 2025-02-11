/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:53:33 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/02/09 16:20:19 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	check(va_list args, int *count, int c)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(args, int));
		(*count)++;
	}
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'p')
		ft_putptr(va_arg(args, void *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putnbr_uns(va_arg(args, unsigned int), count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), 'x', count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), 'X', count);
	else if (c == '%')
	{
		ft_putchar('%');
		(*count)++;
	}
}

int	ft_printf(const char *src, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, src);
	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '%' && src[i + 1] != '\0')
		{
			i++;
			check(args, &count, src[i]);
		}
		else
		{
			ft_putchar(src[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
