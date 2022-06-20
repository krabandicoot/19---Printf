/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:24:47 by kpaux             #+#    #+#             */
/*   Updated: 2022/06/20 15:34:15 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	if_exist(char c, char *letter)
{
	while (*letter)
	{
		if (c == *letter)
			return (1);
		letter++;
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

int	ft_printf(const char *conv, ...)
{
	int		i;
	int		arg_len;
	va_list	arg;

	va_start(arg, conv);
	i = -1;
	arg_len = 0;
	while (conv[++i])
	{
		if (conv[i] == '%' && conv[i + 1] == '\0')
			return (0);
		else if (conv[i] == '%' && if_exist(conv[i + 1], "cspdiuxX%"))
		{
			i++;
			check_conversion(conv, arg, i, &arg_len);
		}
		else if (conv[i] == '%' && !(if_exist(conv[i + 1], "cspdiuxX%")))
			arg_len += write(1, &conv[i++], 1);
		else
			arg_len += write(1, &conv[i], 1);
	}
	va_end (arg);
	return (arg_len);
}
