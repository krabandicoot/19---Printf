#include "../includes/ft_printf.h"

void ft_putnbr_base(int n, const char *base, int *arg_len)
{
	unsigned int	nb;
	unsigned int	base_len;
	// int sign;

	// sign = '-';
	base_len = 0;
	nb = n;
	while (base[base_len])
		base_len++;
	// if (n == sign && n < 0)
	// {
	// 	ft_putchar('-', arg_len);
	// 	nb = -n;
	// }
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base, arg_len);
	ft_putchar(base[nb % base_len], arg_len);
}



void ft_putnbr_base_ul(unsigned long nb, const char *base, int *arg_len)
{
	unsigned long base_len;

	base_len = 0;
	while(base[base_len])
		base_len++; 
	if (nb >= base_len)
	{
		ft_putnbr_base_ul(nb / base_len, base, arg_len);
		nb %= base_len;
	}
	ft_putchar(base[nb], arg_len);
}
