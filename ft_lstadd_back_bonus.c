/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:23:19 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/08 15:53:38 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	last_node = ft_lstlast(*lst);
	if (last_node)
		last_node->next = new;
	else
		*lst = new;
}
/*int	main(void)
{
	t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));
	t_list *new = malloc(sizeof(t_list));

    int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	char v4[] = "new";

	head->content = &v1;
    head->next = second;

    second->content = &v2;
    second->next = third;

    third->content = &v3;
    third->next = NULL;

	new->content = &v4;
	new->next = NULL;

    t_list *result = ft_lstlast(head);
    printf("el ultimo nodo tiene %d de content.\n",*(int *)result->content);
	ft_lstadd_back(&head, new);
	t_list *new_last_node = ft_lstlast(head);
	printf("el ultimo nodo tiene de contenido = %s \n", 
	(char *)new_last_node->content);

    free(head);
    free(second);
    free(third);
	free(new);
    return 0;
}*/
