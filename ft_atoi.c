/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marodrig <marodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:16:59 by marodrig          #+#    #+#             */
/*   Updated: 2024/04/08 15:53:12 by marodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int i;
    int s;
    int res;

    i = 0;
    s = 1;
    res = 0;
    while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            s *= -1;
        i++;
    }
    while ((nptr[i] >= '0') && (nptr[i] <= '9'))
    {
        res = res * 10 + (nptr[i] - 48);
        i++;
    }
    return (res * s);
}