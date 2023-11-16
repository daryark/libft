/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:21:49 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 02:42:20 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(char c);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int c);
int		ft_isprint(unsigned char c);
size_t	ft_strlen(const char *s);
void	*memset(void *p, int c, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif