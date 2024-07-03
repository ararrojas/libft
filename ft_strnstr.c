/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:13:05 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/27 15:33:17 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big [i + j] && little[j]
				&& i + j < len && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*void test_ft_strnstr(const char *big, const char *little, size_t len) {
    char *result_ft = ft_strnstr(big, little, len);
    char *result_std = strnstr(big, little, len);
    
    if (result_ft == result_std) {
        printf("PASSED: ft_strnstr(\"%s\", \"%s\", %zu)
		== \"%s\"\n", big, little, len, result_ft);
    } 
	else 
	{
        printf("FAILED: ft_strnstr(\"%s\", \"%s\", %zu) == \"%s\"
		(expected \"%s\")\n", big, little, len, result_ft, result_std);
    }
}

int main() {
    // Caso 1: Cadena vacía en little
    test_ft_strnstr("Hello, world!", "", 13);

    // Caso 2: Cadena encontrada dentro del rango
    test_ft_strnstr("Hello, world!", "world", 13);

    // Caso 3: Cadena no encontrada dentro del rango
    test_ft_strnstr("Hello, world!", "world", 5);

    // Caso 4: Cadena no encontrada en absoluto
    test_ft_strnstr("Hello, world!", "planet", 13);

    // Caso 5: little más largo que big
    test_ft_strnstr("Hello", "Hello, world!", 13);

    // Caso 6: little presente al principio de big
    test_ft_strnstr("Hello, world!", "Hello", 13);

    // Caso 7: little presente al final de big dentro del rango
    test_ft_strnstr("Hello, world!", "world!", 13);

    // Caso 8: little presente al final de big fuera del rango
    test_ft_strnstr("Hello, world!", "world!", 12);

    // Caso 9: Cadena vacía en big
    test_ft_strnstr("", "world", 5);

    // Caso 10: len es 0
    test_ft_strnstr("Hello, world!", "Hello", 0);

    return 0;
}*/
