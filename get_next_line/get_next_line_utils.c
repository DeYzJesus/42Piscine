#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1, 0) + ft_strlen(s2, 1) + 1));
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] && s2[j-1] != '\n')
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
int	ft_strlen(const char *src, int i)
{
    int j = 0;
	if (src == NULL)
		return (NULL);
    if (i == 0)
    {
        while (src[j] != '\0')
            j++;
        return (j);
    }
    else
    {
        while (src[j] != '\n' && src[j] != '\0')
            j++;
        return (j);
    }
}

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