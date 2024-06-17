/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:21:28 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/15 15:50:39 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t i;
	va_list args;
	char	c;
	char	*str;
	
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				write(1, "%", 1);
			else if (format[i + 1] == 'c')
			{
				c = (char) va_arg(args, char);
			    ft_putchar(c); //cast en char 
			}
			else if (format[i + 1] == 's')
			{
				str = (char *) va_arg(args,char *);
				ft_putstr(str); //cast en char *
			}
			else if (format[i + 1] == 'p')
			{
				str = (char *) va_arg(args, char *);
				ft_putstr(str);
			}
			else if (format[i + 1] == 'd')
				ft_itoa(va_arg(args, int));
			else if (format[i + 1] == 'i')
				ft_itoa(va_arg(args, int));
			else if (format[i + 1] == 'u')
				ft_itoa(va_arg(args, int));
			else if (format[i + 1] == 'x')
				ft_putnbrbase(va_arg(args, int));
			else if (format[i + 1] == 'X')
				ft_putnbrbase(va_arg(args, int));
			i++;
		}
		else
		{
			ft_putchar(va_arg(args, int));
			i++;
		}
	}
	va_end(args);
	return (i);
}