/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:43:56 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/13 15:19:44 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//erases the data in the n bytes of mem starting at local pointed by s
//by writing zeros (bytes containing '\0') to that area
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char s[] = "testeum";
	size_t n = ft_strlen(s);
	size_t i = 0;

	ft_bzero(s, sizeof(char)*5);
	while (i < n)
	{
		printf("%c\n", s[i]);
		i++;
	}
}
*/