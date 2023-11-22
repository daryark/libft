/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:14:00 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/21 15:47:18 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char		dst[20];
// 	const char	src[] = "Hello, World!";

// 	memcpy(dst, src, strlen(src));
// 	printf("\nnative: %s\n", dst);
// 	ft_memcpy(dst, src, strlen(src));
// 	printf("my: %s\n\n", dst);

// 	memcpy(dst, src, 5);
// 	dst[5] = '\0';
// 	printf("native: %s\n", dst);
// 	ft_memcpy(dst, src, 5);
// 	dst[5] = '\0';
// 	printf("my: %s\n\n", dst);

// 	if (!ft_memcpy(dst, NULL, 5))
// 		printf("NULL returned\n");
// 	printf("my: %s\n\n", dst);
// 	if (!memcpy(dst, NULL, 5))
// 		printf("NULL returned");
// 	printf("native: %s\n", dst);

// 	// if (!ft_memcpy(NULL, src, 5))
// 	// 	printf("NULL returned\n");
// 	// printf("my: %s\n\n", dst);
// 	// if (!memcpy(NULL, src, 5))
// 	// 	printf("NULL returned\n");
// 	// printf("native: %s\n", dst);

// 	return (0);
// }

//restrict - for all the parameters with this flag means that they
//strictly doesn't point to the same memory location 