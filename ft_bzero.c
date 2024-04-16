/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:43:56 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/16 17:46:17 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//erases the data in the n bytes of mem starting at local pointed by s
//by writing zeros (bytes containing '\0') to that area
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n); //memset but for 0, see wether is better 0 or \0!!
}

// still to TEST