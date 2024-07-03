/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:07:12 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/25 15:07:16 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	ch = c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char str[] = "array de caracteres";
	int c = 'e';
	size_t n = 10;

	void *result = ft_memchr(str, c, n);
	if (result)
		printf("la letra encontrada es: %c \n", *(char *)result);
	else
		printf("es null");
}*/
