/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:02:08 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/09 18:21:25 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void checkIsLast(int a, int b, int* aFirst, int* bFirst)
{

	int lastA = '9';
	int lastB = '9';
	if( a == 8 && b == 9)
	{
		write(1, &lastA, 1);
		write(1, &lastB, 1);
		cambiaValori( *aFirst, *bFirst);
		
	}
}

void cambiaValori(int* a, int *b)
{
	if(*b < 9)
	{
		*b++;
	}
	else
	{
		if(*a <= 9)
		{
			*a++;
			*b = 0;
		}
	}
}

void ft_print_comb2(void)
{

	int	aFirst = 0;
	int	bFirst = 0;

	int	a = 0;
	while(a <= 9)
	{
		int b = a + 1;
		while(b <= 9)
		{
			char stringa[7] = {aFirst + '0', bFirst + '0', ' ', a + '0', b + '0', ',', ' '};
			write(1, stringa, 7);
		        checkIsLast(a, b, &aFirst, &bFirst);	
			b++;	
		}
		a++;
	}

	int c = 0;
	int d = 0;


}

int	main(void)
{
	ft_print_comb2();
	return 0;
}
