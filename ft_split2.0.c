/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:53:13 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/05 15:59:27 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocs and returns an array os strs obtained by splitting s, using
//the char as a delimeter. the array must end with a NULL pointer

#include "libft.h"

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

char	*split(char *s, char **arr, char c)
{
	int	a;
	int	b;
	int	d;

	a = 0;
	d = 0;
	while (a < count_words(s, c))
	{
		if (s[d] && s[d] != c)
		{
			arr[a] = malloc(sizeof(char) * (count_char((char *)s + d, c) + 1));
			if (!arr)
				free_arr(a, arr);
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
	return (*arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		e;

	e = count_words(s, c);
	arr = malloc(sizeof(char *) * (e + 1));
	if (!arr)
		return (NULL);
	split((char *)s, arr, c);
	return (arr);
}
/*
static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void			check_split(char *s, char c)
{
	char	**tabstr;

	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

int					main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
		check_split("          ", ' ');
	else if (arg == 2)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. 
		Sed non risus. Suspendisse", ' ');
	else if (arg == 3)
		check_split("   lorem   ipsum dolor     sit amet, consectetur   
		adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	else if (arg == 4)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. 
		Sed non risus. Suspendisse lectus tortor, dignissim
		 sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum 
		 ultricies 
		 diam. Maecenas ligula massa, varius a, semper congue, 
		 euismod non, mi.", 'i');
	else if (arg == 5)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. 
		Sed 
		non risus. Suspendisse lectus tortor, dignissim sit 
		amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies 
		diam. 
		Maecenas ligula massa, varius a, semper congue, 
		euismod non, mi.", 'z');
	return (0);
}*/