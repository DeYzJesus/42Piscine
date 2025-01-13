/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:53:33 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/13 17:19:06 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_printf(const char *src, ...)
{
	va_list	args;
	va_start(args, src);
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == '%' && src[i+1] != '\0')
		{
			i++;
			if (src[i] == 'c')
			{
				ft_putchar(va_arg(args, int));
				count++;
			}
			else if (src[i] == 's')
			{
				ft_putstr(va_arg(args, char *), &count);
			}
			else if (src[i] == 'p')
			{
				ft_putptr(va_arg(args, void *), &count);
			}
			else if (src[i] == 'd' || src[i] == 'i')
			{
				ft_putnbr(va_arg(args, int), &count);
			}
			else if (src[i] == 'u')
			{
				ft_putnbr_uns(va_arg(args, unsigned int), &count);
			}
			else if (src[i] == 'x')
			{
				ft_putnbr_base(va_arg(args, int), 'x', &count);
			}
			else if (src[i] == 'X')
			{
				ft_putnbr_base(va_arg(args, int), 'X', &count);
			}
			else if (src[i] == '%')
			{
				ft_putchar('%');
				count++;
			}
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

int main(void)
{
	int c = ft_printf("ciaonei%%%% %s %x %c;\n", "sus", 56824, 'c');
	int b = printf("ciaonei%%%% %s %x %c;\n", "sus", 56824, 'c');
	printf("mio : %i, original : %i \n", c, b);
	ft_printf("mio : %i, original : %i \n", c, b);
}
