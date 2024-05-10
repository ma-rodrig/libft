/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:55:46 by marodrig          #+#    #+#             */
/*   Updated: 2024/05/10 16:35:05 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		ft_print_result2(int n)
{
	char c;

	if (n >= 10)
		ft_print_result2(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

static t_list	*check_lstnew(void *content, int is_nb)
{
	t_list		*elem;

	if (!(elem = ft_lstnew(content)))
			ft_print_result("NULL");
	else
	{
		if (!(elem->content))
			ft_print_result("NULL");
		else
		{
			if (is_nb)
				ft_print_result2(*(int *)(elem->content));
			else
				ft_print_result((char *)elem->content);
			write(1, "\n", 1);
		}
		if (!(elem->next))
		{
			write(1, "\n", 1);
			ft_print_result("NULL");
		}
	}
	return (elem);
}

int 			main(int argc, const char *argv[])
{
	t_list		*elem;
	int			arg;


	elem = NULL;
	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		elem = check_lstnew("lorem ipsum dolor sit", 0);
	else if (arg == 2)
	{
		elem = check_lstnew(&arg, 1);
	}
	else if (arg == 3)
		elem = check_lstnew(NULL, 0);
	free(elem);
	return (0);
}*/
