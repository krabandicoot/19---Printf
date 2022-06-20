/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:18:56 by kpaux             #+#    #+#             */
/*   Updated: 2022/06/20 15:22:57 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_u_int(va_list arg, int *arg_len, const char *base)
{
	unsigned int	n;

	n = va_arg(arg, unsigned int);
	ft_putnbr_base_unsigned(n, base, arg_len);
}

void	print_int(va_list arg, int *arg_len, const char *base)
{
	int	n;

	n = va_arg(arg, int);
	ft_putnbr_base(n, base, arg_len);
}

void	print_putchar(va_list arg, int *arg_len)
{
	char	c;

	c = va_arg(arg, int);
	*arg_len += write(1, &c, 1);
}

void	print_base(va_list arg, int *arg_len, const char *base)
{
	unsigned long	n;

	n = va_arg(arg, unsigned long);
	ft_putnbr_base_unsigned(n, base, arg_len);
}
