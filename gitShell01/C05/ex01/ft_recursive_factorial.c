/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:44:41 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/19 17:00:06 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		res = nb * ft_recursive_factorial(nb-1);
	}
	return (res);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
}
*/