/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 00:35:23 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/16 19:10:30 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

/*char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t j = 0;
    size_t rem = 0;
    size_t start;
    size_t end;
    int bol = 1;
    while (s1[i] != '\0' && bol)
    {
        j = 0;
        while (set[j] != '\0')
        {
            if (s1[i] == set[j])
            {
                i++;
                rem++;
                break;
            }
            j++;
        }
        if (set[j] == '\0')
        {
            bol = 0;
            start = i;
        }
    }
    bol = 1;
    i = (size_t)ft_strlen(s1) - 1;
    while (i >= 0 && bol)
    {
        j = 0;
        while (set[j] != '\0')
        {
            if (s1[i] == set[j])
            {
                rem++;
                i--;
                break;
            }
            j++;
        }
        if (set[j] == '\0')
        {
            bol = 0;
            end = i;
        }
        
    }
    i = (size_t)ft_strlen(s1) - rem;
    char *res = (char *)malloc((i + 1) * sizeof(char));
    if(!res)
        return (NULL);
    j = 0;
    while (start <= end)
    {
        res[j] = s1[start];
        j++;
        start++;  
    }
    res[j] = '\0';
    return (res);
}
*/

char *ft_strtrim(char const *s1, char const *set) 
{
    size_t start, end, i;

    // Trova l'indice di inizio: il primo carattere non presente in 'set'
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start])) {
        start++;
    }

    // Trova l'indice di fine: l'ultimo carattere non presente in 'set'
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1])) {
        end--;
    }

    // Calcola la lunghezza della nuova stringa e alloca memoria
    char *trimmed = (char *)malloc((end - start + 1) * sizeof(char));
    if (!trimmed) {
        return NULL;
    }

    // Copia i caratteri dall'indice start all'indice end
    i = 0;
    while (start < end) {
        trimmed[i] = s1[start];
        start++;
        i++;
    }
    trimmed[i] = '\0'; // Aggiungi il terminatore nullo

    return trimmed;
}