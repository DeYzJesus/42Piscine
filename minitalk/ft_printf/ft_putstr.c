/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 01:12:29 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/03/05 11:38:53 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	if (!str)
	{
		write (1, "(null)", 6);
		*count += 6;
		return ;
	}
	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	*count += i;
}
