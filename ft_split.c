/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:19:52 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/30 00:33:00 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

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

static int	ft_count_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (!s[i + 1] || ((s[i] == c) && (s[i + 1] != c)))
			counter++;
		i++;
	}
	return (counter);
}

static int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

static void	ft_free(char **buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		word_len;
	int		i;
	int		s_i;

	buffer = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!buffer)
		return (NULL);
	i = -1;
	s_i = 0;
	while (++i < ft_count_words(s, c))
	{
		while (s[s_i] == c)
			s_i++;
		word_len = ft_word_len(&s[s_i], c);
		buffer[i] = ft_substr(s, s_i, word_len);
		if (!buffer[i])
		{
			ft_free(buffer);
			return (NULL);
		}
		s_i += word_len;
	}
	buffer[i] = NULL;
	return (buffer);
}

// int	main(void)
// {
// 	int			i;
// 	char		**result;

// 	// result = ft_split("Hello,world,this,is,an,example", ',');
// 	// result = ft_split("                  olol", ' ');
// 	// result = ft_split("Hello,", ',');
// 	// printf("\n\n");
// 	// result = ft_split("          ", ' ');
// 	// result = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse      ", ' ');
// 	// result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
// 	result = ft_split("lorem ipsum dolor sit amet,  mi.", 'z');
// 	// result = ft_split("", 'z');
// 	// result = ft_split("\0aa\0bbb", '\0');
// 	if (result)
// 	{
// 		i = 0;
// 		while (result[i])
// 		{
// 			printf("_%s_\n", result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Error splitting the string.\n");
// 	}
// 	return (0);
// }
