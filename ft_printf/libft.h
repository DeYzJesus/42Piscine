/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:29:34 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/01/13 17:12:02 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char	c);
void	ft_putnbr(int	n, int *count);
void	ft_putnbr_base(int	n, char	type, int *count);
void	ft_putstr(char	*str, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putnbr_uns(unsigned int	n, int *count);

#endif
