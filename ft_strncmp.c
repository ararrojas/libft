/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:12:48 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/26 13:33:03 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int main(void)
{
	char str1[] = "hoLaaaa";
	char str2[] = "holAAAA";
	size_t size = 4;

	int result = ft_strncmp(str1, str2, size);
	printf("result = %d \n", result);
	if (result < 0)
		printf("str1 es mayor que str2");
	else if (result > 0)
		printf("str2 es mayor que str1");
	else
		printf("son iguales");
}*/
