/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:14:37 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/11 09:20:27 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		c -= 32;
	}
	return (c);
}

#include <stdio.h>

int	main(void)
{
	int	c = d;

	printf("%i\n", ft_toupper(c));
}