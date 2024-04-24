/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:33:51 by marodrig          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/18 14:59:52 by marodrig         ###   ########.fr       */
=======
/*   Updated: 2024/04/22 16:54:06 by marodrig         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
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
<<<<<<< HEAD
		while (n > 0 && (i >= 0))
		{
			dst[i] = temp[i];
			--n;
			i++;
=======
		while (n--)
		{
			dst[n] = sce[n];
>>>>>>> refs/remotes/origin/main
		}
	}
	else
	{
		while (n--)
		{
			*dst++ = *sce++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
<<<<<<< HEAD
	char dest[] = "zabcdefghijklm";
    char src[] = "nopqrst";
    char d1[] = "zabcdefghijklm";
    char s1[] = "nopqrst";
=======
	char src[] = "abcdefghijklm";
    char dest[] = "nopqrst";
    char s1[] = "abcdefghijklm";
    char d1[] = "nopqrst";
>>>>>>> refs/remotes/origin/main
    ft_memmove(dest, src, (sizeof(char)*5));
    memmove(d1, s1, (sizeof(char)*5));

    printf("%s\n", dest);
    printf("%s\n", d1);
}
*/