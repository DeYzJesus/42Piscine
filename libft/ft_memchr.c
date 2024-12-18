/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:44:28 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/18 10:07:49 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*susdest;

	i = 0;
	susdest = (unsigned char *)s;
	while (i < n)
	{
		if (susdest[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
