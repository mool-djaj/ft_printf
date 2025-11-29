/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:22:24 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/29 20:30:17 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int	ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int put_hex(unsigned int n, char format);

typedef struct s_format
{
	char specifier;
	int (*f)(va_list);
} t_format;





#endif