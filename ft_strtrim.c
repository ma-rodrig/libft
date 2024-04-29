/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:05:36 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/25 18:24:01 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates and returns a copy of s1 with the chars specified
//in set removed from the beggining and end of the str
//returns the trimmed string, null if alloc fails


//CORRIGIR NAO ACABADO



#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	i = 0;
	j = 0;
	if ((s1 = '\0') || (set = '\0'))
		return (NULL);
	trim = malloc((sizeof(char)) * (ft_strlen(set) + 1));
	if (!trim)
		return (NULL);
	while (s1[i])
	{
		if (set[i] == s1[i])
		{
			trim[j] = s1[i];
			j++;
		}
		i++;
	}
	trim[j] = '\0';
	return (trim);
}

int	main(void)
{
	char	s1[] = "string trimmed here";
	char	set[] = " ";

	printf("%s\n", ft_strtrim(s1, set));
}