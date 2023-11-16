/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:17:32 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 02:25:35 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *p, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		*(unsigned char *)(p + i++) = (unsigned char)c;
	return (p);
}

// int	main(void)
// {
// 	char	str[10];

// 	memset(str, '*', 5);
// 	printf("\nnative: %s\n", str);
// 	ft_memset(str, '*', 5);
// 	printf("my: %s\n\n", str);
// 	printf("native: %s\n", memset(str, 46, 5));
// 	printf("my: %s\n\n", ft_memset(str, 46, 5));
// 	memset(str, 's', sizeof(str));
// 	printf("native: %s\n", str);
// 	ft_memset(str, 's', sizeof(str));
// 	printf("my: %s\n\n", str);
// 	return (0);
// }

//void pointer is used to say 'any type', used in function where
// we wanna refer to a memory in more general sense, than some specific type
//size_t - unsigned long