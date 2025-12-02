#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>
int main()
{
		char *a;

		int i = ft_printf("%d", 10);
		printf("\n%d\n",i);

		int j = printf("%d", 10);
		printf("\n%d",j);

    return (0);

}