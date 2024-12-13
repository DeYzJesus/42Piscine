/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puntatori.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:34:21 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/11 12:28:27 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int nbr= 35;
	int *p = &nbr;
	printf("%d", *p);
	write(1, "\n", 1);

	ft_ft(p);
	printf("%d", *p);

	return 0;
}	

