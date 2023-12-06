/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:59:58 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/12/06 00:19:27 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (*(s + i) != (unsigned char)c && (s < (s + i)))
		i--;
	if (*(s + i) == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
	// while (s[i] != (unsigned char)c && (i >= 0))
	// 	i--;

// int	main(void)
// {
// 	char	s[7] = "he0llo";

// 	printf("original: %s\n", strrchr(s, 'l'));
// 	printf("original: %s\n", strrchr(s, 'g'));
// 	printf("original: %s\n", strrchr(s + 2, 'h'));
// 	printf("original: %s\n\n", strrchr(s, '\0'));

// 	printf("my: %s\n", ft_strrchr(s, 'l'));
// 	printf("my: %s\n", ft_strrchr(s, 'g'));
// 	printf("my: %s\n", ft_strrchr(s + 2, 'h'));
// 	printf("my: %s\n\n", ft_strrchr(s, '\0'));

// 	char se[] = "";
// 	printf("original: %s\n", strrchr(se, 'g'));
// 	printf("original: %s\n\n", strrchr(se, '\0'));
// 	printf("my: %s\n", ft_strrchr(se, 'g'));
// 	printf("my: %s\n", ft_strrchr(se, '\0'));
// }
