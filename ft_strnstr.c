/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:09:30 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/13 13:01:47 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of '\0' little in big
//not more then len chars are searched
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0' || little == big)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && ((i + j) < len))
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char big[30] = "aaabcabcd";
	char little[10] = "aabc";
	size_t size = -1;

	printf("%s\n", ft_strnstr(big, little, size));
	//printf("%d\n", strnstr(big, little, size));
} */
