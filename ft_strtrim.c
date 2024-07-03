/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:13:47 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/25 15:13:50 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*dest;

	dest = 0;
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (s1 && set)
	{
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
			end--;
		dest = ft_strdup(s1);
		while (start < end)
			dest[i++] = s1[start++];
		dest[i] = '\0';
	}
	return (dest);
}
/*int	main (void)
{
	char *s1 = "aaaaaaaaaaholaeaaeeeholaaaaaaa";
	char *set = "a";

	char *result = ft_strtrim(s1, set);
	if (result)
	{
		printf("%s \n", result);
	}
	return (0);
}*/
