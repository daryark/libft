/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:08:35 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/29 14:18:52 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char const *s, char const *set)
{
	int	start;
	int	j;

	start = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == s[start])
		{
			start++;
			j = 0;
		}
		else
			j++;
	}
	return (start);
}

int	ft_end(char const *s, char const *set, int start)
{
	int	end;
	int	j;

	j = 0;
	end = ft_strlen(s) - 1;
	while (set[j] && (&s[start] < &s[end]))
	{
		if (set[j] == s[end])
		{
			j = 0;
			end--;
		}
		else
			j++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	int		start;
	int		end;
	int		i;

	start = ft_start(s1, set);
	end = ft_end(s1, set, start);
	buffer = (char *)malloc(sizeof(char) * ((end - start + 1) + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		buffer[i] = s1[start];
		start++;
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

// int	main(void)
// {
// 	printf("result: %s\n\n", ft_strtrim("letatbtt", "tel"));
// 	printf("result: %s\n\n", ft_strtrim("     ", " "));
// 	return (0);
// }
