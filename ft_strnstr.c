/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:09:30 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/12 15:25:09 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of '\0' little in big
//not more then len chars are searched
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] && (len > 0))
	{
		j = 0;
		while (little[j] && (big[i + j] == little[j]))
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char big[] = "zzbabcdefgh";
	char little[] = "bp";
	size_t size = 5;

	printf("%s\n", ft_strnstr(big, little, size));
}
*/