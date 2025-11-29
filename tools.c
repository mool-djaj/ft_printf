/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaarich <akaarich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:39:48 by akaarich          #+#    #+#             */
/*   Updated: 2025/11/29 20:33:14 by akaarich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return 0;
	while (s[i])
	{
		write(0, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int i;
	i = 0;

	if (n == -2147483648)
	{
		i = ft_putstr("-2147483648");
		return i;
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
		
	}
	else
	{
		ft_putchar(n + '0');
		i++;
	}
	return i;
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 1;
}
int put_hex(unsigned int n, char format)
{
    char *hex;
    int count = 0;

    if (format == 'X')
        hex = "0123456789ABCDEF";
    if (format == 'x')
        hex = "0123456789abcdef";

    if (n >= 16)
        count += put_hex(n / 16, format);
    
    count += ft_putchar(hex[n % 16]);
    return (count);
}
int main()
{
	put_hex(555,'X');
	char *s;
	printf("\n%u",s);
}