/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:02:57 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/25 15:03:09 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_cast;

	ptr_cast = (unsigned char *)s;
	while (n > 0)
	{
		*ptr_cast = 0;
		ptr_cast++;
		n--;
	}
}
/*int	main(void)
{
	char src[50] = "a ver que sale despues de los ceros";

	ft_bzero(src, 5);
	printf("resultado: %s \n", src);
	return (0);
}*/
