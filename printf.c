/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:21:28 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/17 12:44:30 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t i;
	va_list args;
	char c;
	char *str;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				write(1, "%", 1);
			else if (format[i] == 'c')
			{
				c = (char)va_arg(args, int);
				ft_putchar(c); // cast en char
			}
			else if (format[i] == 's')
			{
				str = (char *)va_arg(args, char *);
				ft_putstr(str); // cast en char *
			}
			else if (format[i] == 'p')
			{
				void *ptr = va_arg(args, void *);
				ft_putstr("0x");
				ft_putnbrbase((unsigned long)ptr, "0123456789");
			}
			else if (format[i] == 'd' || format[i] == 'i')
				ft_putnbrbase(va_arg(args, int), "0123456789");
			else if (format[i] == 'u')
				ft_putnbrbase(va_arg(args, int), "0123456789");
			else if (format[i] == 'x')
				ft_putnbrbase(va_arg(args, int), "0123456789abcdef");
			else if (format[i] == 'X')
				ft_putnbrbase(va_arg(args, int), "0123456789ABCDEF");
		}
		else
		{
			ft_putchar(format[i]);
		}
		i ++;
	}
	va_end(args);
	return (i);
}