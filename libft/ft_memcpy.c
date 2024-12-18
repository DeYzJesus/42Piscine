/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:26:18 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/18 10:07:41 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*susd;
	unsigned char		*sussrc;
	size_t				j;

	susd = (unsigned char *)dest;
	sussrc = (unsigned char *)src;
	j = 0;
	while (j < n)
	{
		susd[j] = sussrc[j];
		j++;
	}
	return (dest);
}
