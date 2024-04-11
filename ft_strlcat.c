/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:27:39 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/11 11:11:28 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i])
		i++;
	while (src[res])
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] && ((i + 1) < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

#include <stdio.h>

int main(void)
{
	char dest[] = "destino";
	char src[] = "source";
	unsigned int size = 3;

	printf("%i\n", ft_strlcat(dest, src, size));
}