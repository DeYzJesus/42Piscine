/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:32:54 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/18 10:08:26 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			j;
	unsigned char	*susdest;

	j = 0;
	susdest = (unsigned char *)s;
	while (j < n)
	{
		susdest[j] = 0;
		j++;
	}
}
