/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:17:15 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/07 14:52:39 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	char	counter;
	int 	maxValue;
	
	counter = '0';
	maxValue = 10;

	for(int i = 0; i < maxValue; i++)
	{
		write(1, &counter, 1);
		counter++;
	}	
}

int main(void)
{
	ft_print_numbers();
	return 0;
}	
