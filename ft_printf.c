/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:08:58 by akaarich          #+#    #+#             */
/*   Updated: 2025/12/02 22:08:40 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format(va_list args, const char format)
{
    int length;

    length = 0;
    if (format == 'c')
        length += ft_putchar(va_arg(args, int));
    else if (format == 's')
        length += ft_putstr(va_arg(args, char *));
    else if (format == 'p')
        length += ft_p(va_arg(args, unsigned long));
    else if (format == 'd' || format == 'i')
        length += ft_putnbr(va_arg(args, int));
    else if (format == 'u')
        length += ft_u_putnbr(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')
        length += put_hex(va_arg(args, unsigned int), format);
    else if (format == '%')
        length += ft_putchar('%');
    return (length);
}

int ft_printf(const char *str, ...)
{
    int     i;
    va_list args;
    int     length;
	int tmp;
	
	i = 0;
    length = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
			if (str[i + 1] == '\0')
				break;
            tmp = ft_format(args, str[i + 1]);
			if (tmp < 0)
				return (-1);
			length += tmp;
			i++;
        }
        else
		{
            tmp= ft_putchar(str[i]);
			if (tmp == -1)
				return (-1);
			length += tmp;
		}
		i++;
    }
    va_end(args);
    return (length);
}
