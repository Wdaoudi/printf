/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:21:28 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/10 16:41:55 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t i;
    va_list args;
    
    va_start(args, format);
	i = 0;
    while(format[i])
	{
		if (format[i] == '%')
		{
            if(format[i+1] == '%')
                write(1, '%', 1);
            else if(format[i+1] == 'c')
                ft_putchar(&format[i]);
            else if(format[i+1] == 's')
                ft_putstr(&format);
            else if(format[i+1] == 'p')
                ft_putstr(&format[i]);
            else if(format[i+1] == 'd')
                ft_itoa(format[i]);
            else if(format[i+1] == 'i')
                ft_itoa(format[i]);
            else if(format[i+1] == 'u')
                ft_itoa(format[i]);
            else if(format[i+1] == 'x')
                ft_putnbrbase(format[i]);
            else if(format[i+1] == 'X')
                ft_putnbrbase(format[i]);
            i ++;
        }
		else
		{
			ft_putchar_fd(&format[i], 1);
			i++;
		}
	}
    va_end(args);
    return(i);
}