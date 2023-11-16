/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:12:35 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/16 02:04:47 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}

// int	main(void)
// {
// 	printf("\nnative: %d\n", isdigit(3));
// 	printf("my: %d\n\n", ft_isdigit(3));
// 	printf("native: %d\n", isdigit(0));
// 	printf("my: %d\n\n", ft_isdigit(0));
// 	printf("native: %d\n", isdigit(2147483647));
// 	printf("my: %d\n\n", ft_isdigit(2147483647));
// 	printf("native: %d\n", isdigit(-48));
// 	printf("my: %d\n\n", ft_isdigit(-48));
// 	printf("native: %d\n", isdigit(48));
// 	printf("my: %d\n\n", ft_isdigit(48));
// 	return (0);
// }
