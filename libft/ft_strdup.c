/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:51:08 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/06 18:21:33 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	j;
	char	*sus;

	j = 0;
	while (s[j] != '\0')
		j++;
	sus = (char *)malloc((j + 1) * sizeof(char));
	if (!sus)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
	{
		sus[j] = s[j];
		j++;
	}
	sus[j] = '\0';
	return (sus);
}
