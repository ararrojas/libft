/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 09:55:30 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/01 12:15:15 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <string.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node = (t_list *)malloc(sizeof(t_list));
	char str[] = "hola hola!";
	
	if (node == NULL)
		printf("Error al crear el nodo");
	
	node->content = malloc(sizeof(char) + 11);
	strcpy(node->content, str);
	node->next = NULL;

	printf("Contenido del nodo: %s \n", (char *)node->content);

	ft_lstdelone(node, del);
	return (0);
}*/
