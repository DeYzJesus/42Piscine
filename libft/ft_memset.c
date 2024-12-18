/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:06:43 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/17 11:08:57 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			j;
	unsigned char	*susdest;
	unsigned char	sium;

	sium = (unsigned char)c;
	susdest = (unsigned char *)s;
	j = 0;
	while (j < n)
	{
		susdest[j] = sium;
		j++;
	}
	return (s);
}
