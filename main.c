#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>
int main()
{
		int i = ft_u_putnbr(-2);
		printf("\n%d\n",i);

		int j = printf("%u",-2);
		printf("\n%d",j);
    return (0);

}