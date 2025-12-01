#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	tmp;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		tmp = ft_putchar(s[i]);
		if (tmp == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	len;
	int	tmp;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		len++;
		n = -n;
	}
	if (n > 9)
	{
		tmp = ft_putnbr(n / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	len++;
	return (len);
}

int	ft_u_putnbr(unsigned int n)
{
	int	len;
	int	tmp;

	len = 0;
	if (n > 9)
	{
		tmp = ft_u_putnbr(n / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	len++;
	return (len);
}
