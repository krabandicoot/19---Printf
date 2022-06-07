#include "../includes/ft_printf.h"

void print_str(va_list arg, int *arg_len)
{
	char n; 

	n = va_arg(arg, int);
	arg_len += ft_strlen(&n);
}

void print_ptr(va_list arg, int *arg_len)
{
	unsigned long	address;

	address = va_arg(arg, unsigned long);
	if((void *)address == NULL)
		ft_putstr("(null)", arg_len);
	else
	{
		ft_putstr("0x", arg_len);
		ft_putnbr_base_ul(address, "0123456789abcdef", arg_len);
	}
}
