/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:32:54 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/28 11:28:14 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
