/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:11:24 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/08 10:45:31 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dest;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = ft_calloc(len + 1, 1);
	if (dest == NULL)
		return (NULL);
	while (s1[i])
		dest[j++] = s1[i++];
	i = 0;
	while (s2[i])
		dest[j++] = s2[i++];
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char str1[] = "medialuna con ";
	char str2[] = "dulce de leche";

	char *result = ft_strjoin(str1, str2);
	printf("quiero comer %s \n", result);
}*/
