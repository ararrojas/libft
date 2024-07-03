/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:07:59 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/25 15:08:04 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char src[50] = "Esto se tiene que copiar. ";
	char dest[50];

	ft_memcpy(dest, src, 5);
	printf("yo = %s \n", dest);
	memcpy(dest, src, 5);
	printf("true memcpy = %s \n", dest);
}*/
