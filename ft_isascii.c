/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:29:39 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 02:04:36 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	printf("\nnative: %d\n", isascii(0x80));
// 	printf("my: %d\n\n", ft_isascii(0x80));
// 	printf("native: %d\n", isascii(0x77));
// 	printf("my: %d\n\n", ft_isascii(0x77));
// 	printf("native: %d\n", isascii(100));
// 	printf("my: %d\n\n", ft_isascii(100));
// 	printf("native: %d\n", isascii(1000));
// 	printf("my: %d\n\n", ft_isascii(1000));
// 	printf("native: %d\n", isascii(0x01));
// 	printf("my: %d\n\n", ft_isascii(0x01));
// 	printf("native: %d\n", isascii(0x01));
// 	printf("my: %d\n\n", ft_isascii(0x01));
// 	printf("native: %d\n", isascii(-0x01));
// 	printf("my: %d\n\n", ft_isascii(-0x01));
// 	return (0);
// }