/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:19:52 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/11/30 03:50:17 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
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

	buffer = (char **)ft_calloc(sizeof(char *), (ft_count_words(s, c) + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	s_i = 0;
	while (i < ft_count_words(s, c))
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
		i++;
		s_i += word_len;
	}
	return (buffer);
}

// int	main(void)
// {
// 	int			i;
// 	char		**r;

// 	// r = ft_split("Hello,world,this,is,an,example", ',');
// 	// r = ft_split("                  olol", ' ');
// 	// r = ft_split("Hello,", ',');
// 	// printf("\n\n");
// 	// r = ft_split("          ", ' ');
// 	// r = ft_split("   adipiscing elit. Sed non. Suspendisse   ", ' ');
// 	// r = ft_split("Sed non risus. Cras mi.", 'i');
// 	r = ft_split("lorem ipsum dolor sit amet,  mi.", 'z');
// 	// r = ft_split("", 'z');
// 	// r = ft_split("\0aa\0bbb", '\0');
// 	if (r)
// 	{
// 		i = 0;
// 		while (r[i])
// 		{
// 			printf("_%s_\n", r[i]);
// 			i++;
// 		}
// 		free(r);
// 	}
// 	else
// 	{
// 		printf("Error splitting the string.\n");
// 	}
// 	return (0);
// }
