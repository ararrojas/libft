/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:12:33 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/05 14:12:03 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	i;
	size_t			len;
	char			*dest;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	dest = ft_calloc(sizeof(char) * (len + 1), 1);
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*char 	my_function(unsigned int i, char c)
{
	printf("index = %d, character = %c \n", i, c);
	return (c - 32);
}

int	main(void)
{
	char str[] = "hola";
	
	printf("string before = %s \n", str);
	char *result = ft_strmapi(str, my_function);
	printf("string after = %s \n", result);
}*/
