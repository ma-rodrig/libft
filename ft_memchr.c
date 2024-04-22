/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:56:02 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/22 18:01:42 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//scans the initial n bytes of mem area pointed by s
//to find the first instance of c
//returns a pointer to the matching byte/ NULL if does not occur
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] && (i < n))
	{
		if (str[i] == c)
		{
			return ((unsigned char *)str + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "abcdefgh";
	int	c = 'c';
	char f[] = "abcdefgh";
	int d = 'c';
	char *str = ft_memchr(s, c, (sizeof(char)*5));
	char *test = memchr(f, d, (sizeof(char)*5));
	printf("%s\n", str);
	printf("%s\n", test);
}*/