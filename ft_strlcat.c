/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:27:39 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/02 16:30:36 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i])
		i++;
	while (src[res])
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] && (i + 1 < size))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char dest[] = "destino";
	char src[] = "source";
	unsigned int size = 5;
	char tdest[] = "destino";
	char tsrc[] = "source";
	unsigned int tsize = 5;


	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("%zu\n", strlcat(tdest,tsrc, tsize));
	printf("%s\n", dest);
	printf("%s\n", tdest);
	
}
*/
/*static void		ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

static void		check_strlcat(char *dest, char *src, int size, int dest_len)
{
	ft_print_result(ft_strlcat(dest, src, size));
	write(1, "\n", 1);
	write(1, dest, dest_len);
	free(dest);
}

int				main(int argc, const char *argv[])
{
	char	*dest;
	int		arg;
	int		dest_len;

	alarm(5);
	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)) || argc == 1)
		return (0);
	memset(dest, 0, dest_len);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
	{
		dest[11] = 'a';
		check_strlcat(dest, "lorem", 15, dest_len);
	}
	else if (arg == 2)
		check_strlcat(dest, "", 15, dest_len);
	else if (arg == 3)
	{
		dest[0] = '\0';
		dest[11] = 'a';
		check_strlcat(dest, "lorem ipsum", 15, dest_len);
	}
	else if (arg == 4)
	{
		dest[14] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	}
	else if (arg == 5)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 0, dest_len);
	}
	else if (arg == 6)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 1, dest_len);
	}
	else if (arg == 7)
	{
		memset(dest, 'r', 15);
		check_strlcat(dest, "lorem ipsum dolor sit amet", 5, dest_len);
	}
	else if (arg == 8)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 6, dest_len);
	}
	else if (arg == 9)
	{
		memset(dest, 'r', 14);
		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	}
	return (0);
}
*/