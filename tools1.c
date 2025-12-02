#include "ft_printf.h"

int	put_hex (unsigned long n, char format)
{
    char    *hex;
    int     count;
	int		tmp;

    count = 0;
    if (format == 'X')
        hex = "0123456789ABCDEF";
    else
        hex = "0123456789abcdef";
    if (n >= 16)
    	count += put_hex(n / 16, format);
    tmp = ft_putchar(hex[n % 16]);
	if (tmp == -1)
		return (-1);
	count += tmp;
    return (count);
}

int	ft_p (unsigned long d)
{
    int i;
	int	tmp;

    if (!d)
		return (ft_putstr("0x0"));
	i = 0;
	tmp = ft_putstr("0x");
	if (tmp == -1)
		return (-1);
	i += tmp;
	tmp = put_hex(d, 'x');
	if (tmp == -1)
		return (-1);
	i += tmp;
	return (i);
}