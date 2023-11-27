/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:02:48 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/23 16:58:45 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == (unsigned char)c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	if (c == '\0')
// 		return ((char *)s);
// 	return (0);
// }

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	char	s[6] = "he\0llo";

// 	printf("original: %s\n", strchr(s, 'l'));
// 	printf("original: %s\n", strchr(s, 'g'));
// 	printf("original: %p\n\n", strchr(s, '\0'));

// 	char	s1[6] = "he\0llo";
// 	printf("my: %s\n", ft_strchr(s, 'l'));
// 	printf("my: %s\n", ft_strchr(s, 'g'));
// 	printf("my: %p\n", ft_strchr(s, '\0'));
// }
