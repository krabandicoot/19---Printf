#include "../includes/printf.h"
#include "../includes/libft.h"


void print_u_int(va_list arg, int *arg_len)
{
	unsigned int n;

	n = va_arg(arg, unsigned int)
	ft_putnbr(arg, arg_len)
}

void print_int(va_list arg, int *arg_len)
{
	int n;

	n = va_arg(arg, int);
	ft_putnbr(arg, arg_len);
	
}

void print_putchar(va_list arg, int *arg_len)
{
	char c;

	c = va_arg(arg, int);
	write(1, &c, 1);
	arg_len++;
}

void print_base(va_list arg, int *arg_len, char str)
{
	unsigned long n;

	n = va_arg(arg, unsigned long);
	if (str == 'X')
		ft_putnbr_base(n, "0123456789ABCDEF", arg_len);
	else (str == 'x')
		ft_putnbr_base(n, "0123456789abcdef", arg_len);
}