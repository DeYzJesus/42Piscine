/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:55:41 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/16 11:26:23 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_strlen(char *sium)
{
	int i;

    i = 0;
	while (sium[i] != '\0')
		i++;
	return (i);
}