/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:15:07 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/26 14:46:30 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*int main(void)
{
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    int v1 = 1;
	int v2 = 2;
	int v3 = 3;

	head->content = &v1;
    head->next = second;

    second->content = &v2;
    second->next = third;

    third->content = &v3;
    third->next = NULL;

    t_list *result = ft_lstlast(head);
    printf("el ultimo nodo tiene %d de content.\n",*(int *)result->content);

    free(head);
    free(second);
    free(third);
    return 0;
}*/
