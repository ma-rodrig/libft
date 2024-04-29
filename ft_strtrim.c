/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:05:36 by marodrig          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/25 18:24:01 by marodrig         ###   ########.fr       */
=======
/*   Updated: 2024/04/26 12:12:53 by marodrig         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

//allocates and returns a copy of s1 with the chars(whitespaces) specified
//in set removed from the beggining and end of the str
//returns the trimmed string, null if alloc fails

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

<<<<<<< HEAD
	i = 0;
	j = 0;
	if ((s1 = '\0') || (set = '\0'))
		return (NULL);
	trim = malloc((sizeof(char)) * (ft_strlen(set) + 1));
=======
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while ((end > start) && ft_checkset(s1[end - 1], set))
		--end;
	trim = malloc(sizeof(char) * (end - start + 1));
>>>>>>> refs/remotes/origin/main
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i++] = s1[start++];
	}
	trim[i] = '\0';
	return (trim);
}
/*
int	main(void)
{
<<<<<<< HEAD
	char	s1[] = "string trimmed here";
	char	set[] = " ";
=======
	char	s1[] = "  string trimmed here ";
	char	set[] = " ";
	
	char	trim = ft_strtrim(s1, set);
>>>>>>> refs/remotes/origin/main

	printf("%s\n", trim);
	free(trim);
}*/