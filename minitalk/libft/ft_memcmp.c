/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:11:27 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/17 11:07:02 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			j;
	unsigned char	*sus1;
	unsigned char	*sus2;

	j = 0;
	sus1 = (unsigned char *)s1;
	sus2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (j < n && (sus1[j] == sus2[j]))
	{
		j++;
	}
	if (j == n)
		return (0);
	return (sus1[j] - sus2[j]);
}
