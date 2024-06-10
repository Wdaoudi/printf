/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:49:11 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/10 16:30:59 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	taille(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;
	long	nbr;

	nbr = n;
	i = taille(nbr);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	while (nbr != 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}
