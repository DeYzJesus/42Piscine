/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:45:27 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/14 01:11:59 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		z = x;
		while (str[z] == to_find[y] && str[z] != '\0')
		{
			z++;
			y++;
		}
		if (to_find[y] == '\0')
			return (str + x);
		x++;
	}
	return (NULL);
}

/*int main(void){
	char prova[15] = "SUSEJ";
	char insert[] = {"SE"};
	printf("%s",ft_strstr(prova,insert));
	return (0);
}*/