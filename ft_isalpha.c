/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:08:14 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/17 20:22:30 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

// int	main(void)
// {
// 	printf("\nnative: %d\n", isalpha('3'));
// 	printf("my: %d\n\n", ft_isalpha('3'));
// 	printf("native: %d\n", isalpha('a'));
// 	printf("my: %d\n\n", ft_isalpha('a'));
// 	printf("native: %d\n", isalpha('Z'));
// 	printf("my: %d\n\n", ft_isalpha('Z'));
// 	printf("native: %d\n", isalpha('f'));
// 	printf("my: %d\n\n", ft_isalpha('f'));
// 	printf("native: %d\n", isalpha(' '));
// 	printf("my: %d\n\n", ft_isalpha(' '));
// 	return (0);
// }
