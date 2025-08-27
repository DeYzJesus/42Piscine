/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:55:29 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/28 11:54:54 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freen(char **str, int end)
{
	int	i;

	i = 0;
	while (i < end)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	ft_countwords(char const *sium, char c)
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

static void	ft_populate(char const *s, char **dest, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	i = 0;
	j = 0;
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
		if (dest[j] == NULL)
		{
			ft_freen(dest, j);
			return ;
		}
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	int			words;
	char		**dest;

	if (s == NULL)
		return (NULL);
	words = ft_countwords(s, c);
	dest = malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	ft_populate(s, dest, c);
	if (dest != NULL)
	{
		dest[words] = NULL;
	}
	return (dest);
}
