#include "includes/ft_printf.h"

int	check_exist(char c, char *conversion)
{
	while(*conversion)
	{
		if (c == *conversion)
			return (1);
		conversion++;
	}
	return (0);

}

void	check_conversion(char const *str, va_list arg, int i, int *arg_len)
{
	if (str[i] == '%')
		*arg_len += write(1, "%", 1);
	else if (str[i] == 'c')
		print_putchar(arg, arg_len);
	else if (str[i] == 'd' || str[i] == 'i') 
		print_int(arg, arg_len, BASE_DECIMAL);
	else if (str[i] == 'u')
		print_u_int(arg, arg_len, BASE_DECIMAL);
	else if (str[i] == 'x')
		print_base(arg, arg_len, BASE_HEXA_L);
	else if (str[i] == 'X')
		print_base(arg, arg_len, BASE_HEXA_U);
	else if (str[i] == 'p')
		print_ptr(arg, arg_len);
	else if (str[i] == 's')
		print_str(arg, arg_len);
}
#include <stdio.h>
int ft_printf(const char *conversion, ...)
{
	int		i;

	int		arg_len;
	va_list	arg;

	va_start (arg, conversion);
	i = 0;
	arg_len = 0;
	if(!conversion)
		return (0);
	while (conversion[i])
	{
		if(conversion[i] == '%' && check_exist(conversion[i + 1],"cspdiuxX%"))
		{
			i++;
			check_conversion(conversion, arg, i, &arg_len);	
		}
		else if (conversion[i] == '%' && !(check_exist(conversion[i + 1],"cspdiuxX%")))
		{
			arg_len += write(1, &conversion[i + 1], 1);
			i++;
		}
		else
			arg_len += write(1, &conversion[i], 1);
		i++;
	}
	va_end(arg);
	return(arg_len);
}
