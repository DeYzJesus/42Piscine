/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:29:34 by jmerma-b          #+#    #+#             */
/*   Updated: 2025/03/03 17:11:26 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(int c);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_base(unsigned long n, char type, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putnbr_uns(unsigned int n, int *count);
int		ft_printf(const char *src, ...);

#endif
