/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:31:46 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 02:04:59 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(unsigned char c)
{
	return (c > 31);
}

// int	main(void)
// {
// 	printf("\nnative: %d\n", isprint('3'));
// 	printf("my: %d\n\n", ft_isprint('3'));
// 	printf("native: %d\n", isprint('a'));
// 	printf("my: %d\n\n", ft_isprint('a'));
// 	printf("native: %d\n", isprint('\n'));
// 	printf("my: %d\n\n", ft_isprint('\n'));
// 	printf("native: %d\n", isprint('\t'));
// 	printf("my: %d\n\n", ft_isprint('\t'));
// 	printf("native: %d\n", isprint(' '));
// 	printf("my: %d\n\n", ft_isprint(' '));
// 	return (0);
// }