/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:10:34 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 16:35:11 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	i = 0;
	ch = c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	if (ch == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*int	main(void)
{
	char str[] = "hola";
	int c = 108;

	printf("%c \n", *ft_strchr(str, c));
}*/
