/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilspart2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:19:03 by kpaux             #+#    #+#             */
/*   Updated: 2022/06/20 15:24:29 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_str(va_list arg, int *arg_len)
{
	char	*n;

	n = va_arg(arg, void *);
	if (n == NULL)
		ft_putstr("(null)", arg_len);
	else
		ft_putstr(n, arg_len);
}

void	print_ptr(va_list arg, int *arg_len)
{
	unsigned long	address;

	address = va_arg(arg, unsigned long);
	if ((void *)address == NULL)
		ft_putstr("0x0", arg_len);
	else
	{
		ft_putstr("0x", arg_len);
		ft_putnbr_base_ul(address, "0123456789abcdef", arg_len);
	}
}
