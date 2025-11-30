#include "ft_printf.h"

int put_hex(unsigned long n, char format)
{
    char    *hex;
    int     count;

    count = 0;
    if (format == 'X')
        hex = "0123456789ABCDEF";
    else
        hex = "0123456789abcdef";
    if (n >= 16)
        count += put_hex(n / 16, format);
    count += ft_putchar(hex[n % 16]);
    return (count);
}

int ft_p(unsigned long d)
{
    int i;
    
    if (!d)
        return (ft_putstr("0x0"));
    i = 0;
    i += ft_putstr("0x");
    i += put_hex(d, 'x');
    return (i);
}