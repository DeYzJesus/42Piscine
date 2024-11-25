/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:01:20 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/14 14:20:51 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	tot;

	minus = 1;
	tot = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -minus;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		tot = tot * 10 + (*str - '0');
		str++;
	}
	if (minus == 0 || minus % 2 == 0)
		return (tot);
	else
		return (tot * minus);
}

/*int	main(void)
{

	int f = ft_atoi("  --123");
	printf("%d",f);
}*/
