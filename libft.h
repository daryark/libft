/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:21:49 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/22 17:53:07 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// # include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*memset(void *p, int c, size_t len);
void	ft_bzero(void *p, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_tolower(int c);
int		ft_toupper(int c);
//strchr
//strrchr
//strncmp
// memchr
//memcmp
//strnstr
//atoi

//calloc
//strdup

//
//ft_substr
//ft_strjoin
//ft_strtrim
//ft_split
//ft_itoa
//ft_strmapi
//ft_striteri
//ft_putchar_fd
//ft_putstr_fd
//ft_putendl_fd
//ft_putnbr_fd

#endif