#include "includes/printf.h"
#include "includes/libft.h"

void	check_conversion(char const *str, va_list arg, int i, int *arg_len)
{
	if (str[i] == 'c')
		print_putchar(arg, arg_len);
	if (str[i] == '%')
	{
		write(1, "%", 1);
		arg_len++;
	}
	if (str[i] == 'd' || str[i] == 'i') 
		print_int(arg, arg_len);
	if (str[i] == 'u')
		print_uint(arg, arg_len);
	if (str[i] == 'x' || str[i] == 'X')
		print_uint(arg, arg_len, str);
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

	i = 0;
	len = 0;
	arg_len = NULL;
	if(!conversion)
		return (0);
	va_start (arg, conversion);
	while (conversion[i])
	{
		if(conversion[i] == '%')
		{
			i++;
			check_conversion(conversion, arg, i, arg_len);
		}
		else
			len += write(1, &conversion[i], 1);
		i++;
	}
	va_end(arg);
	return(len);
}

#include <stdio.h>

int main()
{
	ft_printf("This sis my percent : %d", 45);
}