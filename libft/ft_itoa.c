/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:04:13 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/18 11:00:48 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		len += 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

static void	int_to_str(char *str, int n, int len)
{
	while (n != 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	number;
	unsigned int	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_number_size(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		res[0] = '0';
	res[len] = '\0';
	if (number != 0)
		int_to_str(res, number, len);
	return (res);
}
