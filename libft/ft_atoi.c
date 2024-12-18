/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:32:12 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/18 10:08:34 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
			if (str[i] == '-')
				sign *= -1;
		i++;
		while (str[i] == '-' || str[i] == '+')
			i++;
		while (ft_isdigit(str[i]))
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
	}
	return (res * sign);
}
