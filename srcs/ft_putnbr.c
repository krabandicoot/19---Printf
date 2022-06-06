/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:40:32 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 16:54:27 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int n, int *arg_len)
{
	if (n == INT_MIN)
	{
		ft_putnbr(n / 10, arg_len);
		ft_putchar('8');
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n, arg_len);
	}
	else
	{	
		if (n > 9)
		{
			ft_putnbr(n / 10, arg_len);
		}
		ft_putchar(n % 10 + '0');
	}
}