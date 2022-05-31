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
}

void print_hexa(va_list arg, int *arg_len)
{

}*/

void print_putchar(va_list arg, int *arg_len)
{
	char n;

	n = va_arg(arg, int);
	*arg_len += write(1, &n, 1); 
}