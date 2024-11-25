/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:17:20 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/21 00:29:55 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				y;
	int				counter;
	unsigned int	i;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	counter = i;
	while (i < size)
	{
		dest[i] = src[y];
		i++;
		y++;
		counter++;
	}
	dest[i] = '\0';
	while (src[y] != '\0')
	{
		counter++;
		y++;
	}
	return (counter - 1);
}
