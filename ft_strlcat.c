/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:21:13 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/23 00:22:44 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (d_len >= dstsize)
		return (s_len + dstsize);
	i = 0;
	while ((dstsize - 1) > (d_len + i) && src[i])
	{
		dst[i + d_len] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (s_len + d_len);
}

	// if (d_len >= dstsize)
	// 	d_len = dstsize;
// int	main(void)
// {
// 	// char d1[11] = "a";
// 	// printf("original: %lu\n", strlcat(d1, "lorem", 15));
// 	char d2[11] = "a";
// 	printf("my: %lu\n\n", ft_strlcat(d2, "lorem", 15));
// 	return (0);
// }
