/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:21:28 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/17 16:07:05 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	printf4(va_list args, char *str)
{
		str = (char *)va_arg(args, char *);
		ft_putstr(str);
}
void	printf3(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	ft_putstr("0x");
	ft_putnbrbase((unsigned long)ptr, "0123456789");
}

int	printf2(va_list args, const char *format, int i, char *str)
{
	int 	c;

	c = 0;
	if (format[i] == '%')
		write(1, "%", 1);
	else if (format[i] == 'c')
	{
		c = (char)va_arg(args, int);
		ft_putchar(c);
	}
	else if (format[i] == 's')
		printf4(args, str);
	else if (format[i] == 'p')
		printf3(args);
	else if (format[i] == 'd' || format[i] == 'i')
		ft_putnbrbase(va_arg(args, int), "0123456789");
	else if (format[i] == 'u')
		ft_putnbrbase(va_arg(args, int), "0123456789");
	else if (format[i] == 'x')
		ft_putnbrbase(va_arg(args, int), "0123456789abcdef");
	else if (format[i] == 'X')
		ft_putnbrbase(va_arg(args, int), "0123456789ABCDEF");
	return (i);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	va_list	args;
	char	*str;

	va_start(args, format);
	i = 0;
	str = NULL;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i = printf2(args, format, i + 1, str);
		}
		else
		{
			ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (i);
}

// int main() {
//     ft_printf("Hello %c\n", 'A');
//     ft_printf("String: %s\n", "Hello, World!");
//     ft_printf("Pointer: %p\n", main);
//     ft_printf("Decimal: %d\n", 123);
//     ft_printf("Unsigned: %u\n", 123);
//     ft_printf("Hex (lowercase): %x\n", 255);
//     ft_printf("Hex (uppercase): %X\n", 255);
//     ft_printf("Percent sign: %%\n");

//     return 0;
// }