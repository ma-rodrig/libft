/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:19:13 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/12 15:16:00 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_atoi(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strdup(const char *c);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
/*
-memset
-bzero
-memcpy
-memmove
-strchr
-memchr
-memcmp
-calloc 
*/
#endif