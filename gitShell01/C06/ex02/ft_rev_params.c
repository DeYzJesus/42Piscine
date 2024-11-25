/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 00:38:02 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/11/21 00:38:06 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char* argv[])
{
    int i;
    argc--;
    while (argc > 0)
    {
        i = 0;
        while (argv[argc][i] != '\0')
        {
            write(1, &argv[argc][i], 1);
            i++;    
        }
        write(1, "\n", 1);
        argc--;
    }
    return (0);
}
