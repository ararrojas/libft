/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:03:26 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 12:37:23 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	dest = malloc(nmemb * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	
	size_t num = 10;
	size_t size = 1;

	void *ptr = ft_calloc(num, size);
	char *array = (char *)ptr;
	i = 0;
	while (i < num)
	{
		printf("dest[%d] = %d \n", i, array[i]);
		i++;
	}
}*/
