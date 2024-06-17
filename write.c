/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:32:10 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/17 12:46:08 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(const int n)
{
	long	nbr;
	long	i;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr);
		i++;
	}
	else if (nbr >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else if (nbr < 10)
	{
		write(1, &nbr, 1);
		i++;
	}
	return (i);
}
long	ft_strlen(char *str)
{
	long	n;

	n = 0;
	while (str)
		n++;
	return (n);
}

int	ft_putnbrbase(long n, char *base)
{
	long	nbr;
	size_t	i;
	long	lenght;

	lenght = ft_strlen(base);
	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		i++;
	}
	if (nbr >= lenght)
	{
		i = i + ft_putnbrbase(nbr / lenght, base);
	}
	write(1, &base[nbr % lenght], 1);
	i++;
	return (i);
}
