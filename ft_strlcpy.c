/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:08:29 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/10 18:02:10 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{	
    unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	j = 0;
	while ((i < (size - 1)) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (j);
}

#include <stdio.h>
int main(void)
{
    char *dst = "abc";
    char *src = "edcba";
    size_t size = 4;

    printf("%d\n", ft_strlcpy(dst, src, size));
}