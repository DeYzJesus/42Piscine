/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:02:51 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/12 12:26:50 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	int	a = 0;
	while(a <= 7)		// itero fino a 7 il primo numero dato che non puo essere superato
	{
		int	b = a + 1;	//ogni volta che ricomincio b diventa 1 in piu rispetto a quello di prima 
		while(b <= 8)		//itero fino a 8 il secondo numero 
		{
			int	c = b + 1;	//ogni volta che b viene cambiato, cambia quello dopo di 1
			while(c <= 9)		//itero fino a 9
			{
				char arrayChar[5] = {a + '0' , b + '0', c + '0', ',', ' '};	//ogni numero viene aggiunto all'array sempre nuovo
				write(1, &arrayChar, 3); //scrive il numero all'interno
				if(!(a == 7 && b == 8 && c == 9))	//verifica se non e l'ultimo numero
				{
					write(1, &arrayChar[3], 2); //finche non e l'ultimo numero mette una virgola e spazio
				}
				c++;
			}
			b++;
		}
		a++;
	}
}	
int main(void)
{
	ft_print_comb();
	return 0;	
}
