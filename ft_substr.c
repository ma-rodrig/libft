/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:06:12 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/24 17:40:04 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates and returns a substring(portion) from s, return NULL if alloc fails
//begins at index 'start' and is of max size 'len'

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	sub = malloc((sizeof(char)) * (len + 1));
	if (!sub)
		return (NULL);
	while ((i < len) && (start < ft_strlen(s)))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char s[] = "benniebananacar";
	int start = 3;
	int len = 8;

	printf("%s\n", ft_substr(s, start, len));
}*/