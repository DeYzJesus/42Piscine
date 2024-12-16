/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:27:18 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/14 22:39:32 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i = 0;
	size_t y = 0;
	size_t j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[y] != '\0')
	{
		y++;
		i++;
	}
	char *dest = (char *)malloc((i + 1) * sizeof(char));
	if(!dest)
        return (NULL);
    y = 0;
	while (s1[j] != '\0')
	{
		dest[y] = s1[j];
		y++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		dest[y] = s2[j];
		y++;
		j++;
	}
    dest[y] = '\0';
    return (dest);
}