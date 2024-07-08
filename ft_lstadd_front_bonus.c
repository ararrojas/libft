/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:22:19 by arojas-a          #+#    #+#             */
/*   Updated: 2024/07/03 19:25:20 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	t_list	*node1 = ft_lstnew("hola");
	t_list	*lst = node1;
	t_list	*new = ft_lstnew("nuevo hola");
	ft_lstadd_front(&lst, new);
	printf("%s \n", (char *)lst->content);
	free(new);
}*/
