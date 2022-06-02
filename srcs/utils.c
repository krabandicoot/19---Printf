#include "../includes/printf.h"
#include "../includes/libft.h"
/*
void print_str(va_list arg, int *arg_len)
{
	char n; 

	n = va_arg(arg, int);
	arg_len += ft_strlen()
}

void print_u_int(va_list arg, int *arg_len)
{
	char n;

	n = ()
}*/

void print_int(va_list arg, int *arg_len)
{
	unsigned int n;

	n = va_arg(arg, unsigned int);
	
}

void print_putchar(va_list arg, int *arg_len)
{
	char c;

	c = va_arg(arg, int);
	write(1, &c, 1);
	arg_len++;
}