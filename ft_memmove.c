/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:43:02 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/21 21:16:37 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else if (s > d)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

// int main() {
// 	char src[] = "Hello, Memmove!";
// 	char dest[50];

// 	// ft_memmove(dest, src, sizeof(src));
// 	// printf("Source: %s\n", src);
// 	// printf("Destination: %s\n", dest);

// 	// ft_memmove(dest, src, 10);
// 	// printf("Source: %s\n", src);
// 	// printf("Destination, src before dst: %s\n\n", dest);

// 	ft_memmove(src, dest, 10);
// 	printf("Source: %s\n", src);
// 	printf("Destination, src after dst: %s\n\n", dest);

// 	char src2[] = "Hello, Memmove!";
// 	char dest2[50];

// 	// memmove(dest2, src2, sizeof(src));
// 	// printf("Source: %s\n", src);
// 	// printf("Destination: %s\n", dest);

// 	// memmove(dest2, src2, 10);
// 	// printf("Source: %s\n", src);
// 	// printf("Destination, src before dst: %s\n\n", dest);

// 	memmove(src2, dest2, 10);
// 	printf("Source: %s\n", src2);
// 	printf("Destination, src after dst: %s\n\n", dest2);

// 	return 0;
// }
