/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:12:16 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/13 15:21:07 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates mem with malloc and initializes the allocated mem block to all zeros

//if calls malloc for nmemb * size bytes, if malloc fails Return NULL

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*call;

	call = malloc(nmemb * size);
	if (!call)
		return (NULL);
	ft_memset(call, 0, (nmemb * size));
	return (call);
}
