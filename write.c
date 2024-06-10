/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:32:10 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/10 13:56:01 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putchar(const char c)
{
   return(write (1, &c, 1));
}
int ft_putstr(char *str)
{
    size_t  i;

    i = 0;
    while(s[i])
    {
        ft_putchar(&s[i]);
        i ++;
    }
    return (i);
}

int ft_putnbr(const int n)
{
    long    nbr;
    long    i;

    i = 0;
    nbr = n;
    if(nbr < 0)
    {
        write (1, "-", 1);
        ft_putnbr(-nbr);
        i ++;
    }
    else if (nbr >= 10)
    {
        ft_putnbr(i/10);
        ft_putnbr(i%10);    
    }
    else if (nbr < 10)
    {
        write (1, &nbr, 1);
        i ++;
    }
    return(i);
}

