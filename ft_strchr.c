/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:45:16 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/16 14:49:54 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns a pointer to the 1st occurrence of the character c int the string s
//returns NULL if not found, '/0' 

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return ((char *)s + i);
	}
	return (0);
}
/*
int	main(void)
{
	char s[] = "abcdefgh";
	int	c = 'e';

	printf("%s\n", ft_strchr(s, c));
}
*/