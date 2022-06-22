#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

#define PARAMS	"%", -18

int main()
{
	printf("ft_printf: \n");
	ft_printf("%i\n", ft_printf(PARAMS));
	printf("printf: \n");
	printf("%i\n", printf(PARAMS));
}
