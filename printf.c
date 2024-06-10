/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:21:28 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/10 13:53:16 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t i;

	i = 0 
    while(src)
	{
		if (src[i] == '%')
		{
            if(src[i+1] == '%')
                write(1, '%', 1);
            else if(src[i+1] == 'c')
                ft_putchar(&src[i]);
            else if(src[i+1] == 's')
                ft_putstr
            else if(src[i+1] == 'p')
            
            else if(src[i+1] == 'd')

            else if(src[i+1] == 'i')

            else if(src[i+1] == 'u')
            
            else if(src[i+1] == 'x')
            
            else if(src[i+1] == 'X')

            i ++;
        }
		else
		{
			ft_putchar_fd(&s[i], 1);
			i++;
		}
	}
    return(i);
}