/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:30:46 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/06 20:10:29 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char	charAlphabet;

	charAlphabet = 'a';
	while(charAlphabet <= 'z'){
		write(1, &charAlphabet, 1);
		charAlphabet++;
	}
}

int main(void){

	ft_print_alphabet();
	return 0;	
}
