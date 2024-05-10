/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:33:51 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/10 17:14:54 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies first n bytes from mem area src to mem area dest, may overlap
//bytes in src are 1st copied into temp array and then to dest
//if dst and src equal or null, return dest without performing copy
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sce;

	sce = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (!dst && !sce)
		return (dst);
	if (dst < sce)
	{
		while (n--)
			*dst++ = *sce++;
	}
	else
	{
		while (n--)
			dst[n] = sce[n];
	}
	return (dst);
}
/*
int	main(void)
{
	char src[] = "abcdefghim";
    char dest[] = "nopt";
    char s1[] = "abcdefghim";
    char d1[] = "nopt";
    ft_memmove(dest, src, 5);
    memmove(d1, s1, 5);

    printf("%s\n", dest);
    printf("%s\n", d1);
}*/