/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:58:19 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/26 15:20:56 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("original: %d\n", memcmp("abc", "abc", 4));
// 	printf("my: %d\n\n", ft_memcmp("abc", "abc", 4));

// 	printf("original: %d\n", memcmp("abc\0", "abc", 4));
// 	printf("my: %d\n\n", ft_memcmp("abc\0", "abc", 4));

// 	printf("original: %d\n", memcmp("abc\0abc", "abc\0ad", 6));
// 	printf("my: %d\n\n", ft_memcmp("abc\0abc", "abc\0ax", 6));

// 	return (0);
// }
