/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:49:02 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/16 17:48:44 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fills the 1st n bytes of mem pointed by s w/ const byte c
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s; //para que serve
	while (i < n)
	{
		str[i] = (unsigned char)c; //again why, search
		i++;
	}
	return (s);
}
/*
#include <string.h>

int	main(void)
{
	char s[] = "teste nr um";
	char s1[] = "teste nr dois";

	ft_memset(s + 5, '?', 6*sizeof(char));
	memset(s1 + 5, '?', 8*sizeof(char));
	
	printf("%s\n", s);
	printf("%s\n", s1);
	
}
*/