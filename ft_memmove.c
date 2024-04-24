/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:33:51 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/18 14:59:52 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies first n bytes from mem area src to mem area dest, may overlap
//bytes in src are 1st copied into temp array and then to dest
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (dst > temp)
	{
		while (n > 0 && (i >= 0))
		{
			dst[i] = temp[i];
			--n;
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dst[i] = temp[i];
			i++;
		}
	}
	return (dst);
}

int	main(void)
{
	char dest[] = "zabcdefghijklm";
    char src[] = "nopqrst";
    char d1[] = "zabcdefghijklm";
    char s1[] = "nopqrst";
    ft_memmove(dest, src, (sizeof(char)*5));
    memmove(d1, s1, (sizeof(char)*5));

    printf("%s\n", dest);
    printf("%s\n", d1);
}