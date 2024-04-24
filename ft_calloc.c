/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:12:16 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/23 15:26:51 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates mem with malloc and initializes the allocated mem block to all zeros

//1st check -> nmemb and size dont overflow the size_t type, if yes Return NULL
//2nd check -> calls malloc for nmemb * size bytes, if malloc fails Return NULL
//if malloc Success -> check if size is zero, yes: returns alloc mem w/o iniciar

//otherwise -> call set_zero to initialize the alloc mem block to zeros
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
	{
		call = malloc(nmemb * size);
		if (!call)
			return (NULL);
		ft_memset(call, 0, nmemb);
		return (call);
	}
}
/*
int	main(void)
{
	size_t i = 0;
	size_t nmemb = 7;
	size_t size = sizeof(int);
	int *alloc_mem = (int *)ft_calloc(nmemb, size);

	if(alloc_mem)
	{
		while (i < size)
		{
			printf("%d\n", alloc_mem[i]);
			i++;
		}
		free(alloc_mem);
	}
	else
	{
		printf("fail.\n");
	}
	
}
*/