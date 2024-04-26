/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:07:19 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/26 18:31:27 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc((sizeof(char)) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);	
}

char ft_f(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (c - 32);
    else
        return (c);
}

int main(void)
{
	printf("%s\n", ft_strmapi("Hello, World!", ft_f);
}