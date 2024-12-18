/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:37:02 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/18 10:08:07 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*sium;

	sium = (void *)malloc(size * num);
	if (sium == NULL)
		return (NULL);
	ft_memset(sium, 0, size * num);
	return (sium);
}
