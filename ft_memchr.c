/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:11:42 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/24 14:56:11 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	data[] = {1, 3, 5, 7, 9, 11};
// 	unsigned char	data2[] = {0x12, 0xFF, 0x0A, 0x0D};
// 	char	data3[] = "hello world";

// 	printf("s       : %p\n", data3);
// 	printf("original: %p\n", memchr(data3, 'l', 4));
// 	printf("my      : %p\n\n", ft_memchr(data3, 'l', 4));
// 	printf("s       : %p\n", data);
// 	printf("original: %p\n", memchr(data, 9, sizeof(data)));
// 	printf("my      : %p\n\n", ft_memchr(data, 9, sizeof(data)));
// 	printf("s       : %p\n", data2);
// 	printf("original: %p\n", memchr(data2, 0xFF, 4));
// 	printf("my      : %p\n\n", ft_memchr(data2, 0xFF, 4));
// 	printf("s       : %p\n", data2);
// 	printf("original: %p\n", memchr(data2, 0xFA, 4));
// 	printf("my      : %p\n\n", ft_memchr(data2, 0xFA, 4));

// 	return (0);
// }
