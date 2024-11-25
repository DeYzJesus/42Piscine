/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:17:26 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/06 20:34:37 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char	charAlphabet;

	charAlphabet = 'z';
	
	while(charAlphabet >= 'a'){
		write(1, &charAlphabet, 1);
		charAlphabet--;
	}	
}

int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
