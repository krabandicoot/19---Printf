#include "../includes/printf.h"
#include "../includes/libft.h"


void print_str(va_list arg, int *arg_len)
{
	char n; 

	n = va_arg(arg, int);
	arg_len += ft_strlen()
}

void print_ptr(va_list arg, int *arg_len)
{
	unsigned long	address;

	address = va_arg(arg, unsigned long);
	if((void *)adress == NULL)
		ft_putstr("NULL");
	else
	{
		ft_putstr("0x");
		ft_putnbr_base_ul(address, "")
	}
}