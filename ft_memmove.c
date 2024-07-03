/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:08:18 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/25 15:08:23 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
/*int	main(void)
{
	char src[] = "holaAA";
	char dest[10];
	size_t n = 5;

	printf("src antes = %s \n", src);
	printf("dest antes = %s \n", dest);
	ft_memmove(dest, src + 2, n);
	printf("src dp = %s \n", src);
	printf("dest dp = %s \n", dest);
}*/
