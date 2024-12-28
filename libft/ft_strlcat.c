/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:24:09 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/28 14:19:41 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen((char *)dest);
	slen = ft_strlen((char *)src);
	i = dlen;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (i < dstsize - 1 && *src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dlen + slen);
}
