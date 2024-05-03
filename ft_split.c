/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:53:13 by marodrig          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/30 18:05:41 by marodrig         ###   ########.fr       */
=======
/*   Updated: 2024/05/02 18:43:14 by marodrig         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

//allocs and returns an array os strs obtained by splitting s, using
//the char as a delimeter. the array must end with a NULL pointer

#include "libft.h"

<<<<<<< HEAD
static int 



=======
static int	count_words(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			i++;
			j = 1;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

static int	count_char(char *s, char c)
{
	int	w;

	w = 0;
	while (*s && *s != c)
	{
		w++;
		s++;
	}
	return (w);
}

static void	free_arr(int p, char **arr)
{
	while (p > 0)
	{
		p--;
		free(*(arr + p));
	}
	free(arr);
}
>>>>>>> refs/remotes/origin/main

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		a;
	int		b;
	int		d;
	int		e;

	e = count_words(s, c);
	arr = malloc(sizeof(char *) * (e + 1));
	if (!arr)
		return (NULL);
	a = 0;
	d = 0;
	while (a < e)
	{
		if (s[d] && s[d] != c)
		{
			arr[a] = malloc(sizeof(char) * (count_char((char *)s + d, c) + 1));
			if (!arr)
			{
				free_arr(a, arr);
				return (NULL);
			}
			b = 0;
			while (s[d] && s[d] != c)
				arr[a][b++] = s[d++];
			arr[a][b] = '\0';
			a++;
		}
		if (s[d] && s[d] == c)
			d++;
	}
	arr[a] = NULL;
	return (arr);
}
