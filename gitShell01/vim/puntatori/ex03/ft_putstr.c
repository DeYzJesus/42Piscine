/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:53:51 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/12 10:59:34 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}*/

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int x = size -1;
	int y;
	while (i < x)
	{
		y = tab[x];
		tab[x] = tab[i];
		tab[i] = y;
		i++;
		size--;
	}
}

int main(void)
{
	ft_putstr("SUKA");
	return (0);
}
