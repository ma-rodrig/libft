/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:01:29 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/15 13:29:57 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//frees the mem of the node content using del and frees the node
//the mem of next must not be freed
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

