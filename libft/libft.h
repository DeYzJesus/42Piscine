/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:33:27 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/16 19:11:08 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT.H
#define LIBFT.H

int	atoi(const char *str);
void bzero(void *s, size_t n);
void *calloc(size_t num, size_t size);
int ft_isalnum (char c);
int ft_isalpha(char c);
int ft_isascii (char c);
int ft_isdigit (char c);
int	ft_isprint(int c);
char *ft_itoa(int n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void    *memcpy(void *dest, const void *src, size_t n);
void    *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *strchr(const char *str, int c);
char *strdup(const char *s);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	ft_strlen(char *sium);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int strncmp(const char *s1, const char *s2, size_t n);
char *strnstr(const char *haystack, const char *needle, size_t len);
char *strrchr(const char *str, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
