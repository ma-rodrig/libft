/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:02:35 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/22 19:58:05 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compares first n bytes of mem areas s1 and s2
//returns an intenger less than, equal to, or greater than zero
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (n--)
	{
		if (st1[n] != st2[n])
		{
			return (st1[n] - st2[n]);
		}
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "abcdefg";
	char s2[] = "abcdtg";
	size_t size = 5;

	printf("%d\n", ft_memcmp(s1, s2, size));
	printf("%d\n", memcmp(s1, s2, size));
}*/