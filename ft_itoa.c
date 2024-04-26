/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:49:40 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/26 13:31:48 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//allocs and returns a str representing the int
// received as an argument, negative nbrs must be handled

#include "libft.h"

static	int	ft_countint(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
	{
		n *= -1;
		c++;
	}
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}
char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	
	str = malloc(sizeof(char) * (ft_countint(n) + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str [0] = 0;
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	i = ft_countint(n);
	str[i] = '\0';
	i--;
	while (n >= 1)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;	
	}
	return (str);
}

int	main(void)
{
	int a = 12345;
	int	b = -456;
	int c = 0;
	int d = 2147483647;
	int e = -2147483648;

	printf("a = %s\n", ft_itoa(a));
	printf("b = %s\n", ft_itoa(b));
	printf("c = %s\n", ft_itoa(c));
	printf("d = %s\n", ft_itoa(d));
	printf("e = %s\n", ft_itoa(e));
}