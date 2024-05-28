/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:44:34 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/22 19:27:33 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ori;
	unsigned char	*dst;

	i = 0;
	ori = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (n > 0)
	{
		while (i < n)
		{
			dst[i] = ori[i];
			i++;
		}
	}
	return (dst);
}

int	main(void)
{
	//char src[] = "abcdefghijklm";
    //char dest[] = "nopqrst";
    char s1[] = "abcdefghijklm";
    char d1[] = "nopqrst";
    ft_memcpy(d1, s1, 42);
    memcpy(NULL, NULL, 42);

    //printf("%s\n", dest);
    printf("%s\n", d1);
}
