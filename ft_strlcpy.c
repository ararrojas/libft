/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:11:57 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 16:38:48 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[8] = "copiate";
	char dest[50]; 
	size_t size = sizeof(dest);
	
	size_t result = ft_strlcpy(dest, src, size);
	if (result >= size)
	{
		printf("len original de src = %zu \n", result);
		printf("size = %zu \n", size);
		printf("desbordamiento de src \n");
	}
	else
		printf("mi strlpcy: %zu \n", result);
	printf("src = %s \n", src);
	printf("dest = %s \n", dest);
}*/
