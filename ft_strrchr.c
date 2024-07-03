/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:13:28 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/28 10:57:39 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	i = ft_strlen(s);
	ch = c;
	while (i > 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	if (ch == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*int	main(void)
{
	char str[] = "hello world";
	int c = 111;
	
	printf("%c \n",*ft_strrchr(str, c));
}*/
