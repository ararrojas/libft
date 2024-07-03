/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:10:16 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 16:22:53 by arojas-a         ###   ########.fr       */
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
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(s) * (n + 1));
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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_len;
	char	**ptr;

	i = 0;
	j = 0;
	ptr = (char **)malloc(sizeof(s) * (ft_count_words((char const *)s, c) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_len = 0;
			while (s[i + word_len] != '\0' && s[i + word_len] != c)
				word_len++;
			ptr[j++] = ft_strndup(&s[i], word_len);
			i += word_len;
		}
		else
			i++;
	}
	ptr[j] = NULL;
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	char *s =  "aqui tiene que haber varias subcadenas";
	char c = ' ';
	int	i = 0;

	printf("cantidad de subcadenas = %zu \n",ft_count_words(s, c));
	char **result = ft_split(s, c);
	while (result[i] != NULL)
	{
		printf("%s \n", result[i]);
		i++;
	}

	return (0);
}*/
