/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:13:28 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/05 12:26:07 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strlen(s);
	ch = c;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	if (ch == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char str[20] = "hello";
	int c = 0;

	printf("%p\n%p\n", str, ft_strrchr(str, c));
}*/
