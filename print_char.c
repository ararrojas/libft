/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:44:36 by arojas-a          #+#    #+#             */
/*   Updated: 2024/09/05 14:20:14 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	print_char(char ch, int *count)
{
	int	check;

	check = write(1, &ch, 1);
	if (check == 1)
		(*count)++;
}
