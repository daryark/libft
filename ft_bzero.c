/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:58:50 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 16:12:16 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *p, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		*(unsigned char *)(p + i++) = '\0';
}

// int	main(void)
// {
// 	char	str[10];

// 	bzero(str, 5);
// 	printf("\nnative: %d\n", (int)str[0]);

// 	ft_bzero(str, 5);
// 	printf("my: %d\n\n", (int)str[0]);

// 	bzero(str, sizeof(str));
// 	printf("native: %sd\n", (int)str[9]);

// 	ft_bzero(str, sizeof(str));
// 	printf("my: %d\n\n", (int)str[9]);

// 	return (0);
// }

//void pointer is used to say 'any type', used in function where
// we wanna refer to a memory in more general sense, than some specific type
//size_t - unsigned long