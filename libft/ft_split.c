/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:55:29 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/18 12:04:12 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void ft_freen(char **str, int end)
{
	size_t	i;

	i = 0;
	while (i < end)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	ft_countwords(char const *sium, char s)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (sium[i] != '\0')
	{
		while (sium[i] == c)
			i++;
		if (sium[i] == '\0')
			break ;
		words++;
		while (sium[i] != c && sium[i] != '\0')
			i++;
	}
	return (words);
}



char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j = 0;
	size_t x = 0;
	size_t start;
	size_t end;
	int words;

	words = ft_countwords(s, c);
	i = 0;
	char **dest = malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		dest[j] = ft_substr(s, (unsigned int)start, (end - start));
		j++;
	}
	dest[j] = NULL;
	return (dest);
}