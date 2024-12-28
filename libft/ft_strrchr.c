/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:14:51 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/28 11:48:41 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (c == '\0')
	{
		return ((char *)str + i);
	}
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
