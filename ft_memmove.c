/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:33:51 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/17 16:50:05 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies first n bytes from mem area src to mem area dest, may overlap
//bytes in src are 1st copied into temp array and then to dest
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*sce;
	unsigned char	*dst;
	unsigned char	*temp;

	i = 0;
	temp = 0;
	sce = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (n > 0)
	{
		while (i < n)
		{
			temp[i] = sce[i];
			dst[i] = temp[i];
			i++;
		}
	}
	return (dst);
}

int	main(void)
{
	char src[] = "abcdefghijklm";
    char dest[] = "nopqrst";
    char s1[] = "abcdefghijklm";
    char d1[] = "nopqrst";
    ft_memmove(dest, src, (sizeof(char)*2));
    memmove(d1, s1, (sizeof(char)*2));

    printf("%s\n", dest);
    printf("%s\n", d1);
}