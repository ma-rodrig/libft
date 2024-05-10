/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:58:03 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/09 13:53:23 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//same as strchr but last occ
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s);
	while (s[j] && (i >= 0))
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		--i;
		j++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

/*
int	main(void)
{
	char s[] = "qwertyuio";
	int c = 'r';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}
*/
