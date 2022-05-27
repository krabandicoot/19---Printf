#include "../includes/printf.h"

static void	check_format(char const *str, va_list arg, int index, int *arg_len)
{
	char	c;

	if (str[index] == 'c')
	{
		c = va_arg(arg, int);
		*arg_len += write(1, &c, 1);
	}
	if (str[index] == '%')
		*arg_len += write(1, "%", 1);
	if (str[index] == 'd' || str[index] == 'i')
		print_int(arg, arg_len);
	if (str[index] == 'u')
		print_uint(arg, arg_len);
	if (str[index] == 'x' || str[index] == 'X')
		print_hexa(arg, arg_len, str[index]);
	if (str[index] == 'p')
		print_address_hexa(arg, arg_len);
	if (str[index] == 's')
		print_str(arg, arg_len);
}

int ft_printf(const char *, ...)
{

}