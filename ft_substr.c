/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:50:52 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/30 00:22:23 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*buffer;
// 	size_t	i;
// 	size_t	s_len;

// 	s_len = ft_strlen(s);
// 	if (s_len < start)
// 	{
// 		start = 0;
// 		len = 0;
// 	}
// 	if ((s_len - start) < len)
// 		len = s_len - start;
// 	buffer = (char *)malloc(sizeof(char) * len + 1);
// 	if (!buffer)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		buffer[i] = s[start + i];
// 		i++;
// 	}
// 	buffer[i] = '\0';
// 	return (buffer);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		start = 0;
		len = 0;
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	printf("string = %s.\n", ft_substr("hello string", 6, 6));
// 	printf("string = %s.\n", ft_substr("hello string", 6, 10));
// 	printf("str = %s.\n", ft_substr("hello string", 6, 3));
// 	printf(" = %s.\n", ft_substr("", 16, 3));
// 	printf("hello = %s.\n", ft_substr("hello", 16, 3));
// 	printf("hel = %s.\n", ft_substr("hello", 16, 5));
// 	printf(" = %s.\n", ft_substr("hello string", 0, 0));
// 	printf(" = %s.\n", ft_substr("", 0, 3));
// 	printf("hel = %s.\n", ft_substr("hello string", 0, 3));
// 	printf(" = %s.\n", ft_substr("", 3, 0));
// 	printf(" = %s.\n", ft_substr("tyety", 3, 0));
// 	printf(" = %s.\n", ft_substr("", 0, 0));
// 	return (0);
// }
