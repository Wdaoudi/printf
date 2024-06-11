/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:32:10 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/11 06:28:25 by wdaoudi-         ###   ########.fr       */
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

int	ft_putnbrbase(int n)
{
	long	nbr;
	char	*base;
	size_t	i;

	nbr = n;
	base = "0123456789ABCDEF";
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		i++;
	}
	if (nbr >= 16)
	{
		i = i + ft_putnbrbase(nbr / 16);
	}
	write(1, &base[nbr % 16], 1);
	i++;
	return (i);
}

// int	ft_putnbrbasebinaire(int n)
// {
// 	long	nbr;
// 	char	*base;
// 	size_t		i;

// 	nbr = n;
// 	base = "01";
// 	i = 0;
// 	if (nbr < 0)
// 	{
// 		write(1, "-", 1);
// 		nbr = -nbr;
// 		i++;
// 	}
// 	if (nbr >= 2)
// 	{
// 		i = i + ft_putnbrbasebinaire(nbr / 2);
// 	}
// 	write(1, &base[nbr % 2], 1);
// 	i++;
// 	return (i);
// }

// int	main(int ac, char **av)
// {
// 	if (ac < 1)
// 		return (0);
// 	ft_putnbrbase(atoi(av[1]));
// 	return (0);
// }