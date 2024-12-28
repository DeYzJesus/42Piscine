/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:45:41 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/28 13:32:34 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*susdes;
	const unsigned char	*sussrc = (unsigned char *)src;

	susdes = (unsigned char *)dest;
	i = 0;
	if (susdes < sussrc || susdes >= sussrc + n)
	{
		while (i < n)
		{
			susdes[i] = sussrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			susdes[i - 1] = sussrc[i - 1];
			i--;
		}
	}
	return (dest);
}
