/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:32:10 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/20 17:14:39 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
	{
		return (ft_putstr("(null)"));
	}
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
	while (str[n])
		n++;
	return (n);
}

int	ft_putnbrbase(unsigned long n, char *base)
{
	unsigned long	nbr;
	size_t			count;
	unsigned long	lenght;

	lenght = ft_strlen(base);
	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		count++;
	}
	if (nbr >= lenght)
	{
		count += ft_putnbrbase(nbr / lenght, base);
	}
	write(1, &base[nbr % lenght], 1);
	count++;
	return (count);
}

int	ft_putptrbase(unsigned long n, char *base)
{
	size_t	length;
	size_t	count;

	length = ft_strlen(base);
	count = 0;
	if (n >= length)
		count += ft_putnbrbase(n / length, base);
	write(1, &base[n % length], 1);
	count++;
	return (count);
}

// int main() {
//     // Test cases for ft_putnbrbase
//     printf("Decimal (base 10):\n");
//     ft_putnbrbase(12345, "0123456789");
//     printf("\nExpected output: 12345\n\n");

//     printf("Hexadecimal (base 16):\n");
//     ft_putnbrbase(255, "0123456789abcdef");
//     printf("\nExpected output: ff\n\n");

//     printf("Binary (base 2):\n");
//     ft_putnbrbase(5, "01");
//     printf("\nExpected output: 101\n\n");

//     printf("Octal (base 8):\n");
//     ft_putnbrbase(64, "01234567");
//     printf("\nExpected output: 100\n\n");

//     printf("Negative number (base 10):\n");
//     ft_putnbrbase(-12345, "0123456789");
//     printf("\nExpected output: -12345\n");

//     return (0);
// }