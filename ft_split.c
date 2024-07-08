/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:10:16 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/08 10:40:29 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static size_t	ft_word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s == c)
		s++;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	*ft_del(char **ptr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j && ptr[i] != NULL)
	{
		free(ptr[i]);
		ptr[i] = NULL;
		i++;
	}
	free(ptr);
	ptr = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	char	**str;

	word_count = ft_count_words(s, c);
	str = ft_calloc(word_count + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s && i < word_count)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			str[i] = ft_strndup(s, ft_word_len(s, c));
			if (str[i++] == NULL)
				return (ft_del(str, i));
		}
		while (*s && *s != c)
			s++;
	}
	str[word_count] = NULL;
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char *s = "split  ||this|for|me|||||!|";
	char c = '|';
	int	i = 0;

	printf("cantidad de subcadenas = %zu \n",ft_count_words(s, c));
	char **result = ft_split(s, c);
	while (result[i] != NULL)
	{
		printf("%s \n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
