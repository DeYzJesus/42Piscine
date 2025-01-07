/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:37:02 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/07 20:17:03 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*tmp;
	size_t			total_size;
	size_t			i;

	if (size != 0 && num > ((size_t)-1) / size)
		return (NULL);
	total_size = num * size;
	tmp = (unsigned char *)malloc(total_size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
