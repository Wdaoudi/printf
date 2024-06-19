/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:45:24 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/19 17:39:14 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define __CONVERTER "cspdiuxX%"

int		ft_printf(const char *format, ...);
int		ft_putchar(const char c);
int		ft_putstr(char *str);
int		ft_putnbr(const int n);
int		ft_putnbrbase(long n, char *base);
char	*ft_itoa(int n);

#endif