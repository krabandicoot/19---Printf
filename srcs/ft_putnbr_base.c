#include "../includes/ft_printf.h"

static int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(base[0] == '\0'|| base[1] == '\0')
		return(0); 
	while(base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base [j])
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}

void ft_putnbr_base_ul(unsigned long n, char *base, int *arg_len)
{
	unsigned long base_len;

	if(check_base(base))
	{
		base_len = 0;
		while(base[base_len])
			base_len++; 
		if (n > base_len - 1)
		{
			ft_putnbr_base_ul(n / base_len, base, arg_len);
			n %= base_len;
		}
		ft_putchar(base[n], arg_len);
	}
}

void ft_putnbr_base(int n, char *base, int *arg_len)
{
	unsigned int	nb;
	int				base_len;

	if (check_base(base))
	{
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
			ft_putnbr_base(nb/base_len, base, arg_len);
			nb %= base_len;
		}
		ft_putchar(base[nb], arg_len);
	}
}
