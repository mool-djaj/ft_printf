#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *s)
{
    size_t i;

    i = 0;
    if (!s)
        return (ft_putstr("(null)"));
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}

int ft_putnbr(int n)
{
    int i;
    
    i = 0;
    if (n == -2147483648)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        i += ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        i += ft_putnbr(n / 10);
    i += ft_putchar((n % 10) + '0');
    return (i);
}


int ft_u_putnbr(unsigned int n)
{
    int i;

    i = 0;
    if (n > 9)
        i += ft_u_putnbr(n / 10);
    i += ft_putchar((n % 10) + '0');
    return (i);
}
