/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:21:28 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/20 18:12:57 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptrdef(va_list args, size_t len)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	printf("%zu\n", len);
	len += write(1, "0x", 2);
	if (ptr == NULL)
		len += write(1, "0", 1);
	else
		len += ft_putptrbase((long)ptr, "0123456789abcdef");
	len --;
	return (len);
}

int	type(va_list args, const char c, size_t len)
{
	if (c == '%')
		len += ft_putchar('%');
	else if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ptrdef(args, len);
	else if (c == 'd' || c == 'i')
		len += ft_putnbrbase(va_arg(args, int), "0123456789");
	else if (c == 'u')
		len += ft_putnbrbase(va_arg(args, unsigned int), "0123456789");
	else if (c == 'x')
		len += ft_putnbrbase(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_putnbrbase(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (len);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	len;
	va_list	args;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = type(args, format[i + 1], len);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	printf("%zu\n", len);
	return (len);
}

/*int	main(void)
{
	// ft_printf("%c",'A');
	// ft_printf("%s\n", "Hello, World!");
	ft_printf("%p\n", main);
	// ft_printf("%d\n", 123);
	// ft_printf("%u\n", 123);
	// ft_printf("%x\n", 42);
	// ft_printf("%X\n", 42);
	// ft_printf("%%\n");
	// printf("%c\n", 'A');
	// printf("%s\n", "Hello, World!");
	printf("%p\n", main);
	// printf("%d\n", 123);
	// printf("%u\n", 123);
	// printf("%x\n", 255);
	// printf("%X\n", 255);
	// printf("%%\n");

	return (0);
}*/