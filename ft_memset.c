/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:08:37 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 16:34:31 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
int	main(void)
{
	int c = '-';
	char result[] = "original";
	size_t n = 8;

	ft_memset(result, c, n);
	printf("%s \n", result);
}*/
