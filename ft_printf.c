#include "includes/printf.h"

void	check_conversion(char const *str, va_list arg, int i, int *arg_len)
{
	if (str[i] == 'c')
		*arg_len += print_putchar(str, arg);
	if (str[i] == '%')
		*arg_len += print_putchar("%");
	if (str[i] == 'd' || str[i] == 'i') //what's the difference ?? 
		return ;//function for int
	if (str[i] == 'u')
		return ;//arg_len += print_u_int() 
	if (str[i] == 'x' || str[i] == 'X')
		return ;//arg_len += print_hexa();
	if (str[i] == 'p')
		return ;//function ptr
	if (str[i] == 's')
		return ;//function str
}

int ft_printf(const char *conversion, ...)
{
	int		i;
	int		len;
	int		*arg_len;
	va_list	arg;


	if(!conversion)
		return (0);
	va_start (arg, conversion);
	while (conversion[i])
		if(conversion == "%")
		{
			check_conversion(conversion, arg, i, arg_len);
			i++;
		}
		else
			len += print_putchar(conversion);
		i++;
	va_end(arg);
	return(len);

}