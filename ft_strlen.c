/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:39:43 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 00:26:44 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	printf("\nnative: %lu\n", strlen("3"));
// 	printf("my: %lu\n\n", ft_strlen("3"));
// 	printf("native: %lu\n", strlen("aluflu"));
// 	printf("my: %lu\n\n", ft_strlen("aluflu"));
// 	printf("native: %lu\n", strlen(""));
// 	printf("my: %lu\n\n", ft_strlen(""));
// 	printf("native: %lu\n", strlen("\n\t"));
// 	printf("my: %lu\n\n", ft_strlen("\n\t"));
// 	return (0);
// }

//size_t is a type of unsigned long, that is recognized
// with no typedef and used in some fncs.