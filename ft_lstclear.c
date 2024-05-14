/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:16:28 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/14 16:02:37 by marodrig         ###   ########.fr       */
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