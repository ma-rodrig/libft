/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:16:28 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/15 14:12:22 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//deletes and frees the given node and every successor of it, using del and free
//the ptr to the lst must be set to NULL
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*lt;

	if (!lst)
		return ;
	lt = *lst;
	while (lt)
	{
		temp = lt->next;
		ft_lstdelone(lt, del);
		lt = temp;
	}
	*lst = NULL;
}
/* 
void	ft_del(void *content)
{
    free(content);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *node1 = ft_lstnew("hello");
	ft_lstadd_front(&lst, node1);
	
	t_list *node2 = ft_lstnew("world");
	ft_lstadd_back(&lst, node2);
	
	
	ft_lstclear(&lst, ft_del);

	if (!lst)
		printf("lst is cleared\n");
	else
		printf("lst not cleared\n");
} */