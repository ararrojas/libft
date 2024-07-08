/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:13:47 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/05 14:52:06 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ptr_to_final_char(const char *s1, const char *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (s1[len - 1] && len && ft_strchr(set, s1[len - 1]))
		len--;
	return ((char *)s1 + len - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final_char;
	size_t	str_len;

	final_char = NULL;
	if (!s1)
		return (ft_strdup(""));
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if (*s1)
		final_char = ptr_to_final_char(s1, set);
	else
		return (ft_strdup(""));
	str_len = final_char - s1 + 1;
	return (ft_substr(s1, 0, str_len));
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
