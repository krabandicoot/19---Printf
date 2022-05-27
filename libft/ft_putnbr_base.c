#include "../includes/libft.h"

void ft_putnbr_base(int nbr, char *base)
{
	void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		ft_putnbr(n / 10);
		ft_putchar('8');
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{	
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '0');
	}
}


}