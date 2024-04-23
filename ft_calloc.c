/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:12:16 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/23 14:20:07 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates mem with malloc and initializes the allocated mem block to all zeros

//1st check -> count and n dont overflow the size_t type, if yes Return NULL
//2nd check -> calls malloc for count * n bytes, if malloc fails Return NULL
//if malloc Success -> check if n is zero, yes: returns alloc mem w/o iniciar

//otherwise -> call set_zero to initialize the alloc mem block to zeros
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	
}