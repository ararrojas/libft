/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:11:42 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 16:38:31 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen((char *)dst);
	slen = ft_strlen((char *)src);
	if (dlen >= size)
		return (size + slen);
	i = 0;
	if (size > 0)
	{
		while (i < slen && i + dlen < size - 1)
		{
			dst[i + dlen] = src[i];
			i++;
		}
		dst[i + dlen] = '\0';
	}
	return (dlen + slen);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "esto";
	char dest[15] = "aqui se copia ";
	size_t size = 19;

	size_t result = ft_strlcat(dest, src, size);
	printf("result = %zu \n", result);
	printf("src = %s \n", src);
	printf("dest = %s \n", dest);
}*/
