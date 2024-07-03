/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:11:05 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 16:37:48 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	my_function(unsigned int i, char *s)
{
	if (*s != '\0')
		*s -= 32;
}

int	main(void)
{
	char str[] = "hola";

	printf("string antes = %s \n", str);
	ft_striteri(str, my_function);
	printf("string despues = %s \n", str);
}*/
