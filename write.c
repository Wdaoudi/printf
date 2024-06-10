/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:32:10 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/10 17:37:32 by wdaoudi-         ###   ########.fr       */
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

int	ft_putnbrbase(const int n)
{
	long nbr;
	long i;

	i = 0;
	nbr = n;
    write (1, "1", 1);
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbrbase(-nbr);
		i++;
	}
	else if (nbr >= 16)
	{
		ft_putnbrbase(nbr / 16);
		ft_putnbrbase(nbr % 16);
            write (1, "2", 1);
	}
	else if (nbr < 10)
	{
		write(1, &nbr, 1);
		i++;
            write (1, "3", 1);
	}
	else if (nbr >= 10 && nbr < 16)
	{
		if (nbr == 10)
			write(1, "A", 1);
		else if (nbr == 11)
			write(1, "B", 1);
		else if (nbr == 12)
			write(1, "C", 1);
		else if (nbr == 13)
			write(1, "D", 1);
		else if (nbr == 14)
			write(1, "E", 1);
		else if (nbr == 15)
			write(1, "F", 1);
        i ++;
            write (1, "4", 1);

	}
	return (i);
}

int main(int ac, char **av)
{
    if (ac < 1)
        return (0);
    ft_putnbrbase(atoi(av[1]));
    return (0);
}