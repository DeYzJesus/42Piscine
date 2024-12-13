/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 00:38:31 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/21 00:38:35 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char* s1, char *s2)
{
    int i = 0;
    if (s1[i] == '\0' && s2[i] =='\0')
        return (0);
    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0' && s2[i] =='\0')
            return (0);
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(int argc, char** argv)
{
    int i = 0;
    while (argv[0][i] != '\0')
    {
        write(1, argv[0][i]++, 1);
    }
    return (0);
}