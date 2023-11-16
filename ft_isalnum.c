/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:26:30 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 02:02:46 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isalnum(int n)
{
	return ((n >= '0' && n <= '9')
		|| (n >= 'a' && n <= 'z')
		|| (n >= 'A' && n <= 'Z'));
}

// int	main(void)
// {
// 	printf("\nnative: %d\n", isalnum(42));
// 	printf("my: %d\n\n", ft_isalnum(42));
// 	printf("native: %d\n", isalnum(-42));
// 	printf("my: %d\n\n", ft_isalnum(-42));
// 	printf("native: %d\n", isalnum(0));
// 	printf("my: %d\n\n", ft_isalnum(0));
// 	printf("native: %d\n", isalnum(2147483647));
// 	printf("my: %d\n\n", ft_isalnum(2147483647));
// 	printf("native: %d\n", isalnum(-48));
// 	printf("my: %d\n\n", ft_isalnum(-48));
// 	printf("native: %d\n", isalnum(48));
// 	printf("my: %d\n\n", ft_isalnum(48));
// 	printf("native: %d\n", isalnum(65));
// 	printf("my: %d\n\n", ft_isalnum(65));
// 	printf("native: %d\n", isalnum(97));
// 	printf("my: %d\n\n", ft_isalnum(97));
// 	return (0);
// }
