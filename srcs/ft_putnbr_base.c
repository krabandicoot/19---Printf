#include "../includes/ft_printf.h"

void ft_putnbr_base(int n, char *base, int *arg_len)
{
	unsigned int	nb;
	int				base_len;

		base_len = 0;
		while (base[base_len])
			base_len++;
		if (n < 0)
		{
			ft_putchar('-', arg_len);
			nb = -n;
		}
		else
			nb = n;
		if (nb > 9)
		{
			ft_putnbr_base(nb / base_len, base, arg_len);
			nb %= base_len;
		}
		ft_putchar(base[nb], arg_len);
}

void ft_putnbr_base_ul(unsigned long nb, char *base, int *arg_len)
{
	unsigned long base_len;

	base_len = 0;
	while(base[base_len])
		base_len++; 
	if (nb > 0)
	{
		ft_putnbr_base_ul(nb / base_len, base, arg_len);
		nb %= base_len;
	}
	ft_putchar(base[nb], arg_len);
}
