/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:14:04 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/03 14:36:51 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*dest;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start)
		len = 0;
	if (len > slen - start)
		len = slen - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char str[] = "test";
	int start = 10;
	int len = 1;

	char *ptr = ft_substr(str, start, len);
	printf("la substring es: %s \n", ptr);
}*/
